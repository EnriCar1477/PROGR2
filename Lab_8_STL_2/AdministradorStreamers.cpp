//
// Created by enric on 26/11/2025.
//

#include "AdministradorStreamers.h"

#include "MetricaBasica.h"
#include "MetricaCalidad.h"
#include "MetricaEngagement.h"

void AdministradorStreamers::cargarDatosStreamers() {
    ifstream arch("streamers.csv",ios::in);
    if(!arch.is_open()) {
        cout<<"Error al abrir archivo streamer.csv"<<endl;
        exit(1);
    }
    map<int,Streamer*> streamersMap;
    char tipo[MAX];
    while(true) {
        arch.getline(tipo,MAX,',');
        if (arch.eof()) break;
        Streamer* streamer;
        if (strcmp(tipo,"Gratuito")==0) {
            streamer=new StreamerGratuito();
        }else streamer=new StreamerPagado();
        streamer->leer(arch);
        streamersMap[streamer->getId()]=streamer;
    }
    for (auto it:streamersMap) {
        streamers.push_back(it.second);
    }


}

void AdministradorStreamers::actualizarDatosMetricas() {
    ifstream arch("metricas.csv",ios::in);
    if(!arch.is_open()) {
        cout<<"Error al abrir archivo streamer.csv"<<endl;
        exit(1);
    }
    char tipo[MAX];
    int idStreamer;
    while(true) {
        arch.getline(tipo,MAX,',');
        if (arch.eof()) break;
        arch>>idStreamer;
        arch.get();
        Metrica *metrica;
        if (strcmp(tipo,"ENGAGEMENT")==0) {
            metrica=new MetricaEngagement();
        }else if(strcmp(tipo,"QUALITY")==0) {
            metrica=new MetricaCalidad();
        }else {
            metrica=new MetricaBasica();
        }
        metrica->leer(arch);
        list<Streamer* >::iterator it;
        for (it=streamers.begin();it!=streamers.end();it++) {
            Streamer* streamerLocal=*it;
            if (streamerLocal->getId()==idStreamer) {
                streamerLocal->agregar(metrica);
                break;
            }
        }
    }
}

void AdministradorStreamers::reporte() {
    ofstream arch("report.csv",ios::out);
    if(!arch.is_open()) {
        cout<<"Error al abrir el archivo report.csv"<<endl;
        exit(1);
    }
    for (auto &it:streamers) {
        it->imprimir(arch);
    }

}
