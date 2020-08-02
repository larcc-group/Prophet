# Prophet
It is Biodigestor Data Analytics prototype with support to distributed data base in the cloud.

## Prophet Web

Web-base GUI interface for Biodigestor Data Analytics. Source codes are in [ProphetWeb](https://github.com/larcc-group/Prophet/tree/master/ProphetWeb).

## Prophet Service

Trains a C++ neural network and does inference. Source codes are in [ProphetService](https://github.com/larcc-group/Prophet/tree/master/ProphetService), which is a background service for **Prophet Web**.

## Publications

### Reference paper
[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.345587.svg)](https://doi.org/10.5281/zenodo.345587) Pieper, R.; Griebler, D.; Lovato, A.. **Towards a Software as a Service for Biodigestor Analytics**. *Revista Eletrônica Argentina-Brasil de Tecnologias da Informação e da Comunicação (REABTIC)*, 2016.

```bibtex
@article{larcc:saas_analytics:REABTIC:16,
    author={Ricardo Pieper and Dalvan Griebler and Adalberto Lovato},
    title={{Towards a Software as a Service for Biodigestor Analytics}},
    journal={Revista Eletrônica Argentina-Brasil de Tecnologias da Informação e da Comunicação (REABTIC)},
    number={5},
    volume={1},
    pages={15},
    publisher={SETREM},
    address={Três de Maio, Brazil},
    month={August},
    year={2016},
    doi={10.5281/zenodo.345587},
    url={http://larcc.setrem.com.br/wp-content/uploads/2017/04/PIEPER_REABTIC_2016.pdf},
    abstract={The field of machine learning is becoming even more important in the last years. The ever-increasing amount of data and complexity of computational problems challenges the currently available technology. Meanwhile, anaerobic digesters represent a good alternative for renewable energy production in Brazil. However, performing efficient and accurate predictions/analytics while completely abstracting machine learning details from end-users might not be a simple task to achieve. Usually, such tools are made for a specific scenario and may not fit with particular and general needs. Our goal was to create a SaaS for biogas data analytics by using a neural network. Therefore, an open source, cloud-enabled SaaS (Software as a Service) was developed and deployed in LARCC (Laboratory of Advanced Researches on Cloud Computing) at SETREM. The results have shown the SaaS application is able to perform predictions. The neural network's accuracy is not significantly worse than a state-of-the-art implementation, and its training speed is faster. The user interface demonstrates to be intuitive, and the predictions were accurate when providing the training algorithm with sufficient data. In addition, the file processing and network training time were good enough under traditional workload conditions.},
}
```

### Undergraduate Thesis
