//
// Created by Selamet Şamlı on 8.03.2018.
//

#ifndef ALANCEVREHESABİ_DİKDORTGEN_H
#define ALANCEVREHESABİ_DİKDORTGEN_H


class Dikdortgen {

public:

    int kisaKenar,uzunKenar;

    int alan(){
        return kisaKenar*uzunKenar;
    }
    int cevre(){
        return 2*(kisaKenar+uzunKenar);
    }
};


#endif //ALANCEVREHESABİ_DİKDORTGEN_H
