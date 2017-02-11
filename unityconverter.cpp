#include "unityconverter.h"
#include "ui_unityconverter.h"
#include <QDialog>
#include <QPixmap>
#include "qtoolbar.h"
#include <QToolButton>


double get_value_of(int a)
{

    double  mmValue = 0.1;
    double  cmValue = 1;
    double  dmValue = 10;
    double  mValue = 100;
    double  kmValue = 100000;
    double  inValue = 2.54000843476;
    double  ftValue = 30.4801012183;
    double  ydValue = 91.440275784;
    double  miValue = 160934.708789;
    double mi2Value = 160934.708789;
    double value[10];
    value[0] = mmValue;
    value[1] = cmValue;
    value[2] = inValue;
    value[3] = ftValue;
    value[4] = dmValue;
    value[5] = ydValue;
    value[6] = mValue;
    value[7] = kmValue;
    value[8] = miValue;
    value[9] = mi2Value;
    return value[a];
}


double get_value_of_angle(int a)
{
    double gValue = 1;
    double dValue = 0.90000000000000002220;
    double rValue = 0.01570796326794896697;
    double Tvalue = 0.00250000000000000005;
    double value[4];
    value[0] = gValue;
    value[1] = dValue;
    value[2] = rValue;
    value[3] = Tvalue;
    return value[a];
}


double get_value_of_weight(int a)
{

    double cvalue = 45359.20000;
    double mcalue = 453592;
    double ovalue = 16;
    double gvalue = 453.59200;
    double pvalue = 1;
    double kvalue = 0.45359;
    double svalue = 0.07143;
    double tusvalue = 0.00050;
    double tvalue = 0.000453592;
    double tukvalue = 0.00050;
    double value[10];
    value[0] = cvalue;
    value[1] = mcalue;
    value[2] = ovalue;
    value[3] = gvalue;
    value[4] = pvalue;
    value[5] = kvalue;
    value[6] = svalue;
    value[7] = tusvalue;
    value[8] = tvalue;
    value[9] = tukvalue;
    return value[a];
}

double get_value_of_area(int a)
{
    double fvalue = 1;
    double mvalue = 0.09290;
    double avalue = 0.00093;
    double acvalue = 0.00002;
    double hvalue = 0.00001;
    double kvalue = 0.00000009;
    double mivalue = 0.00000004;
    double value[7];
    value[0] = fvalue;
    value[1] = mvalue;
    value[2] = avalue;
    value[3] = acvalue;
    value[4] = hvalue;
    value[5] = kvalue;
    value[6] = mivalue;
    return value[a];
}

double get_value_of_speed(int a)
{
    double fvalue = 1;
    double mvalue = 0.00001;
    double kmvalue = 0.01000;
    double mivalue = 0.000000001;
    double kvalue = 0.00000000101605;
    double value[5];
    value[0]= fvalue;
    value[1] = mvalue;
    value[2] = kmvalue;
    value[3] = mivalue;
    value[4] = kvalue;
    return value[a];
}

double get_value_of_volume(int a)
{
    double ml = 1;
    double ous = 0.03381;
    double ouk = 0.03520;
    double cm = 0.10000;
    double dm = 0.001;
    double pus = 0.00211;
    double puk = 0.00176;
    double kus = 0.00106;
    double kuk = 0.00088;
    double gus = 0.00026;
    double guk = 0.00022;
    double buk = 0.0000274961560374;
    double bus = 0.0000283775930707;
    double m =0.000001;
    double kl = 0.00000001;

    double value[15];
    value[0] =ml;
    value[1]= ous;
    value[2]= ouk;
    value[3]=cm;
    value[4]=dm;
    value[5]=pus;
    value[6]=puk;
    value[7]=kus;
    value[8]=kuk;
    value[9]=gus;
    value[10]=guk;
    value[11]=buk;
    value[12]=bus;
    value[13]=m;
    value[14]=kl;
    return value[a];
}

double get_value_of_acceleration(int a)
{
    double gvalue = 1;
    double invalue = 0.39370;
    double ftvalue = 0.03281;
    double mvalue = 0.01000;
    double value[4];
    value[0] = gvalue;
    value[1] = invalue;
    value[2] = ftvalue;
    value[3] = mvalue;
    return value[a];
}


double get_value_of_electric_charge_unit(int a)
{
    double cvalue = 1;
    double acvalue = 0.10000;
    double ahvalue = 0.00028;
    double fvalue = 0.00001;
    double value[4];
    value[0] = cvalue;
    value[1] = acvalue;
    value[2] = ahvalue;
    value[3] = fvalue;
    return value[a];

}
double get_value_of_torque(int a)
{
    double v1 = 1;
    double v2 = 0.1;
    double v3 = 0.00102;
    double v4  = 0.001;
    double v5 = 0.0001;
    double v6 = 0.0000001;
    double v7 =  0.0000000980665;
    double v8 = 0.0000000980665;
    double v9 =  0.00000007061552;
    double v10 = 0.00000001;
    double v11 =  0.0000000001129848333338;
    double v12 =  0.000000000013558180003119;
    double v13 =  0.000000000013558180003119;
    double v14 =  0.00000000001;
    double v15 = 0.000000000098066500286389;
    double v16 =  0.000000000098066496716131;
    double v17 = 0.00000000000001;
    double value[17];
    value[0] = v1;
    value[1] = v2;
    value[2] = v3;
    value[3] = v4;
    value[4] = v5;
    value[5] = v6;
    value[6] = v7;
    value[7] = v8;
    value[8] = v9;
    value[9] = v10;
    value[10] = v11;
    value[11] = v12;
    value[12] = v13;
    value[13] = v14;
    value[14] = v15;
    value[15] = v16;
    value[16] = v17;
    return value[a];
}
double get_value_of_energy_and_work(int a)
{
    double v1  = 6241506363.00000095367431640625; //ev
    double v2  = 6241506.36300000082701444626; //kev
    double v3  = 6241.50636300000041956082;  //mev
    double v4  = 1; //nj
    double v5  = 0.00100000000000000002; //mcj
    double v6  = 0.000001; //mj
    double v7  = 0.000000001;//j
    double v8= 0.000000001; //nm
    double v9 = 0.000000000238845897; //cal
    double v10  = 0.000000000001;//kj
    double v11  = 0.000000000001; //kwh
    double v12  = 0.00000000000027777800; //wh
    double v13  = 0.00000000000027777800; //ws
    double v14 = 0.00000000000023900600; //kcal
    double v15  = 0.000000000000001;//mgj
    double v16 = 0.000000000000000378; //hph metric
    double v17 = 0.00000000000000037300; //hph
    double v18  = 0.00000000000000027800;  //kvh
    double v19  = 0.000000000000000001;//ggj
    double v20  = 0.00000000000000000028; //mgvh
    double v21 = 0.00000000000000000000001; //ggwh
    double v22 = 0.000000000000000000000001; //kton
    double v23 = 0.0000000000000000000000000001; //mton
    double v24 = 0.00000000000000000000000000000001; //gton
    double value[24];
    value[0] = v1;
    value[1] = v2;
    value[2] = v3;
    value[3] = v4;
    value[4] = v5;
    value[5] = v6;
    value[6] = v7;
    value[7] = v8;
    value[8] = v9;
    value[9] = v10;
    value[10] = v11;
    value[11] = v12;
    value[12] = v13;
    value[13] = v14;
    value[14] = v15;
    value[15] = v16;
    value[16] = v17;
    value[17] = v18;
    value[18] = v19;
    value[19] = v20;
    value[20] = v21;
    value[21] = v22;
    value[22] = v23;
    value[23] = v24;
    return value[a];
}



double get_value_of_time(int a)
{
    double s =  1;
    double m =  0.01667;
    double h =  0.00028;
    double d =  0.000011574;
    double md = 0.000011264;
    double w =  0.000001653;
    double ld = 0.000000424;
    double mn = 0.000000379;
    double y  = 0.000000032;
    double value[9];
    value[0] = s;
    value[1] = m;
    value[2] = h;
    value[3] = d;
    value[4] = md;
    value[5] = w;
    value[6] = ld;
    value[7] = mn;
    value[8] = y;
    return value[a];
}





unityconverter::unityconverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::unityconverter)
{
    ui->setupUi(this);
}

unityconverter::~unityconverter()
{
    delete ui;
}

void unityconverter::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void unityconverter::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void unityconverter::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void unityconverter::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void unityconverter::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void unityconverter::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void unityconverter::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void unityconverter::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void unityconverter::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void unityconverter::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void unityconverter::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void unityconverter::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}




void unityconverter::on_pushButton_15_clicked()
{
    if(ui->stackedWidget->currentIndex() == 0)
    {
        int index = 0;
        for(int i=0; i<10; i++)
        {
            if(i == ui->comboBox->currentIndex())
            {
                index = i;
            }
        }


        double main_value = get_value_of(index);
        double  mmValue = 0.1;
        double  cmValue = 1;
        double  dmValue = 10;
        double  mValue = 100;
        double  kmValue = 100000;
        double  inValue = 2.54000843476;
        double  ftValue = 30.4801012183;
        double  ydValue = 91.440275784;
        double  miValue = 160934.708789;

        double user_inputed_value = ui->lineEdit->text().toDouble();
        double mm = user_inputed_value * (main_value / mmValue);
        double cm = user_inputed_value * (main_value / cmValue);
        double in = user_inputed_value * (main_value / inValue);
        double ft = user_inputed_value * (main_value / ftValue);
        double dm = user_inputed_value * (main_value / dmValue);
        double yd = user_inputed_value * (main_value / ydValue);
        double m = user_inputed_value * (main_value / mValue);
        double km = user_inputed_value * (main_value / kmValue);
        double mi = user_inputed_value * (main_value / miValue);


        QString result=QString::number(mm);
        QString result1=QString::number(cm);
        QString result2=QString::number(in);
        QString result3=QString::number(ft);
        QString result4=QString::number(dm);
        QString result5=QString::number(yd);
        QString result6=QString::number(m);
        QString result7=QString::number(km);
        QString result8=QString::number(mi);

        ui->lineEdit_2->setText(result);
        ui->lineEdit_5->setText(result1);
        ui->lineEdit_6->setText(result2);
        ui->lineEdit_7->setText(result3);
        ui->lineEdit_8->setText(result4);
        ui->lineEdit_9->setText(result5);
        ui->lineEdit_10->setText(result6);
        ui->lineEdit_11->setText(result7);
        ui->lineEdit_12->setText(result8);

    }
    else if(ui->stackedWidget->currentIndex() == 1)
    {
        double cValue = 1;
        double user_inputed_value = ui->lineEdit_13->text().toDouble();
        if(ui->comboBox_4->currentIndex() == 0)
        {

            double c =user_inputed_value;
            double f = ((user_inputed_value *(cValue*9/5) + 32));
            double k = cValue * ((user_inputed_value * 1) + 273.15);

            QString result = QString::number(c);
            QString result2 = QString::number(f);
            QString result3 = QString::number(k);
            ui->lineEdit_14->setText(result);
            ui->lineEdit_15->setText(result2);
            ui->lineEdit_16->setText(result3);
        }
        else if(ui->comboBox_4->currentIndex() == 1)
        {

            if (user_inputed_value < 32)
            {
                int user_value = ui->lineEdit_13->text().toInt();
                int c = (user_value - 32) * 0.5555555556;
                QString result = QString::number(c);
                ui->lineEdit_14->setText(result);
            }
            else
            {
                double f = (user_inputed_value - 32) * 0.5555555556;
                QString result = QString::number(f);
                ui->lineEdit_14->setText(result);
            }

            double f = user_inputed_value;
            double k = (user_inputed_value + 459.67) * 5/9;
            QString result2 = QString::number(f);
            QString result3 = QString::number(k);
            ui->lineEdit_15->setText(result2);
            ui->lineEdit_16->setText(result3);
        }
        else if(ui->comboBox_4->currentIndex() == 2)
        {
            double c = user_inputed_value -273.15;
            double f = ((user_inputed_value * (9 / 5)) - 459.67);
            double k = user_inputed_value;

            QString result = QString::number(c);
            QString result2 = QString::number(f);
            QString result3 = QString::number(k);
            ui->lineEdit_14->setText(result);
            ui->lineEdit_15->setText(result2);
            ui->lineEdit_16->setText(result3);
        }
    }
    else if(ui->stackedWidget->currentIndex() == 2)
    {
        double user_inputed_value = ui->lineEdit_17->text().toDouble();
        int index = 0;
        for(int i=0; i<4; i++)
        {
            if(ui->comboBox_5->currentIndex() == i)
            {
               index = i;
            }
        }

        double main_value = get_value_of_angle(index);
        double gValue = 1;
        double dValue = 0.90000000000000002220;
        double rValue = 0.01570796326794896697;
        double Tvalue = 0.00250000000000000005;


        double g = user_inputed_value * (gValue / main_value );
        double d = user_inputed_value * (dValue / main_value );
        double r = user_inputed_value * (rValue / main_value );
        double t = user_inputed_value * (Tvalue / main_value );

        QString result = QString::number(g);
        QString result2 = QString::number(d);
        QString result3 = QString::number(r);
        QString result4 = QString::number(t);
        ui->lineEdit_18->setText(result);
        ui->lineEdit_19->setText(result2);
        ui->lineEdit_20->setText(result3);
        ui->lineEdit_21->setText(result4);



    }
    else if(ui->stackedWidget->currentIndex() == 3)
    {
        double user_inputed_value = ui->lineEdit_22->text().toDouble();
        int index = 0;
        for(int i=0; i<9; i++)
        {
            if(ui->comboBox_7->currentIndex() == i)
            {
                index = i;
            }
        }

        double main_value = get_value_of_weight(index);

        double cvalue = 45359.20000;
        double mcalue = 453592;
        double ovalue = 16;
        double gvalue = 453.59200;
        double pvalue = 1;
        double kvalue = 0.45359;
        double svalue = 0.07143;
        double tusvalue = 0.00050;
        double tvalue = 0.000453592;
        double tukvalue = 0.00050;

        double c = user_inputed_value * (cvalue / main_value);
        double m = user_inputed_value * (mcalue / main_value);
        double o = user_inputed_value * (ovalue / main_value);
        double g = user_inputed_value * (gvalue / main_value);
        double p = user_inputed_value * (pvalue / main_value);
        double k = user_inputed_value * (kvalue / main_value);
        double s = user_inputed_value * (svalue / main_value);
        double yus = user_inputed_value * (tusvalue / main_value);
        double t = user_inputed_value * (tvalue / main_value);
        double tuk = user_inputed_value * (tukvalue / main_value);

        QString result=QString::number(c);
        QString result1=QString::number(m);
        QString result2=QString::number(o);
        QString result9=QString::number(g);
        QString result3=QString::number(p);
        QString result4=QString::number(k);
        QString result5=QString::number(s);
        QString result6=QString::number(yus);
        QString result7=QString::number(t);
        QString result8=QString::number(tuk);

        ui->lineEdit_23->setText(result);
        ui->lineEdit_24->setText(result1);
        ui->lineEdit_25->setText(result2);
        ui->lineEdit_26->setText(result9);
        ui->lineEdit_27->setText(result3);
        ui->lineEdit_28->setText(result4);
        ui->lineEdit_29->setText(result5);
        ui->lineEdit_30->setText(result6);
        ui->lineEdit_31->setText(result7);
        ui->lineEdit_32->setText(result8);
    }
    else if(ui->stackedWidget->currentIndex() == 4)
    {
        double user_inputed_value = ui->lineEdit_33->text().toDouble();
        int index = 0;
        for(int i=0; i<7; i++)
        {
            if(ui->comboBox_9->currentIndex() == i)
            {
                index = i;
            }
        }

        double main_value = get_value_of_area(index);
        double fvalue = 1;
        double mvalue = 0.09290;
        double avalue = 0.00093;
        double acvalue = 0.00002;
        double hvalue = 0.00001;
        double kvalue = 0.00000009;
        double mivalue = 0.00000004;

        double f = user_inputed_value * (fvalue / main_value);
        double m = user_inputed_value * (mvalue / main_value);
        double a = user_inputed_value * (avalue / main_value);
        double ac = user_inputed_value * (acvalue / main_value);
        double h = user_inputed_value * (hvalue / main_value);
        double k = user_inputed_value * (kvalue / main_value);
        double mi = user_inputed_value * (mivalue / main_value);

        QString result=QString::number(f);
        QString result1=QString::number(m);
        QString result2=QString::number(a);
        QString result9=QString::number(ac);
        QString result3=QString::number(h);
        QString result4=QString::number(k);
        QString result5=QString::number(mi);
        ui->lineEdit_34->setText(result);
        ui->lineEdit_35->setText(result1);
        ui->lineEdit_36->setText(result2);
        ui->lineEdit_37->setText(result9);
        ui->lineEdit_38->setText(result3);
        ui->lineEdit_39->setText(result4);
        ui->lineEdit_40->setText(result5);
    }
    else if(ui->stackedWidget->currentIndex() == 5)
    {
        double user_inputed_value = ui->lineEdit_41->text().toDouble();
        int index = 0;
        for (int i=0; i<5; i++)
        {
            if(ui->comboBox_25->currentIndex()==i)
            {
                 index = i;
            }
        }

        double main_value = get_value_of_speed(index);
        double fvalue = 1;
        double mvalue = 0.00001;
        double kmvalue = 0.01000;
        double mivalue = 0.000000001;
        double kvalue = 0.00000000101605;
        double f = user_inputed_value * (fvalue /main_value);
        double m = user_inputed_value * (mvalue / main_value);
        double km = user_inputed_value * (kmvalue / main_value);
        double mi = user_inputed_value * (mivalue / main_value);
        double k = user_inputed_value * (kvalue / main_value);

        QString result=QString::number(f);
        QString result1=QString::number(m);
        QString result2=QString::number(km);
        QString result9=QString::number(mi);
        QString result3=QString::number(k);

        ui->lineEdit_42->setText(result);
        ui->lineEdit_43->setText(result1);
        ui->lineEdit_44->setText(result2);
        ui->lineEdit_45->setText(result9);
        ui->lineEdit_46->setText(result3);
    }
    else if(ui->stackedWidget->currentIndex() == 6)
    {
        double user_inputed_value = ui->lineEdit_3->text().toDouble();
        int index = 0;
        for(int i=0; i<15; i++)
        {
            if(ui->comboBox_15->currentIndex() == i)
            {
                index = i;
            }
        }
        double main_value = get_value_of_volume(index);
        double ml = 1;
        double ous = 0.03381;
        double ouk = 0.03520;
        double cm = 0.10000;
        double dm = 0.001;
        double pus = 0.00211;
        double puk = 0.00176;
        double kus = 0.00106;
        double kuk = 0.00088;
        double gus = 0.00026;
        double guk = 0.00022;
        double buk = 0.0000274961560374;
        double bus = 0.0000283775930707;
        double m =0.000001;
        double kl = 0.00000001;
        double mlvalue = user_inputed_value * (ml / main_value);
        double ousvalue = user_inputed_value * (ous / main_value);
        double oukvalue = user_inputed_value * (ouk / main_value);
        double cmcalue = user_inputed_value * (cm / main_value);
        double dmvalue = user_inputed_value * (dm / main_value);
        double pusvalue = user_inputed_value * (pus / main_value);
        double pukvalue = user_inputed_value * (puk / main_value);
        double kusvalue = user_inputed_value * (kus / main_value);
        double kukvalue = user_inputed_value * (kuk / main_value);
        double gusvalue = user_inputed_value * (gus / main_value);
        double gekvalue = user_inputed_value * (guk / main_value);
        double bukvalue = user_inputed_value * (buk / main_value);
        double busvalue = user_inputed_value * (bus / main_value);
        double mmvalue = user_inputed_value * (m / main_value);
        double klvalue = user_inputed_value * (kl / main_value);


        QString result=QString::number(mlvalue);
        QString result1=QString::number(ousvalue);
        QString result2=QString::number(oukvalue);
        QString result3=QString::number(cmcalue);
        QString result4=QString::number(dmvalue);
        QString result5=QString::number(pusvalue);
        QString result6=QString::number(pukvalue);
        QString result7=QString::number(kusvalue);
        QString result8=QString::number(kukvalue);
        QString result9=QString::number(gusvalue);
        QString result10=QString::number(gekvalue);
        QString result11=QString::number(bukvalue);
        QString result12=QString::number(busvalue);
        QString result13=QString::number(mmvalue);
        QString result14=QString::number(klvalue);

        ui->lineEdit_4->setText(result);
        ui->lineEdit_47->setText(result1);
        ui->lineEdit_48->setText(result2);
        ui->lineEdit_49->setText(result3);
        ui->lineEdit_50->setText(result4);
        ui->lineEdit_51->setText(result5);
        ui->lineEdit_52->setText(result6);
        ui->lineEdit_53->setText(result7);
        ui->lineEdit_54->setText(result8);
        ui->lineEdit_55->setText(result9);
        ui->lineEdit_56->setText(result10);
        ui->lineEdit_57->setText(result11);
        ui->lineEdit_58->setText(result12);
        ui->lineEdit_59->setText(result13);
        ui->lineEdit_60->setText(result14);

    }
    else if(ui->stackedWidget->currentIndex() == 7)
    {
        double user_inputed_value = ui->lineEdit_61->text().toDouble();
        int index = 0;
        for(int i=0; i<4; i++)
        {
            if(ui->comboBox_17->currentIndex() == i)
            {
                index = i;
            }
        }
        double main_value = get_value_of_acceleration(index);
        double gvalue = 1;
        double invalue = 0.39370;
        double ftvalue = 0.03281;
        double mvalue = 0.01000;

        double g = user_inputed_value * (gvalue / main_value);
        double in = user_inputed_value * (invalue / main_value);
        double ft = user_inputed_value * (ftvalue / main_value);
        double m =user_inputed_value * (mvalue / main_value);

        QString result=QString::number(g);
        QString result1=QString::number(in);
        QString result2=QString::number(ft);
        QString result3=QString::number(m);
        ui->lineEdit_62->setText(result);
        ui->lineEdit_63->setText(result1);
        ui->lineEdit_64->setText(result2);
        ui->lineEdit_65->setText(result3);


    }
    else if(ui->stackedWidget->currentIndex() == 8)
    {
        double user_inputed_value = ui->lineEdit_66->text().toDouble();
        int index = 0;
        for(int i = 0; i<4; i++)
        {
            if(ui->comboBox_13->currentIndex() == i)
            {
                index = i;
            }
        }
        double main_value = get_value_of_electric_charge_unit(index);
        double cvalue = 1;
        double acvalue = 0.10000;
        double ahvalue = 0.00028;
        double fvalue = 0.00001;

        double c = user_inputed_value * (cvalue / main_value);
        double ac = user_inputed_value * (acvalue / main_value);
        double ah = user_inputed_value * (ahvalue / main_value);
        double f = user_inputed_value * (fvalue / main_value);

        QString result=QString::number(c);
        QString result1=QString::number(ac);
        QString result2=QString::number(ah);
        QString result3=QString::number(f);
        ui->lineEdit_67->setText(result);
        ui->lineEdit_68->setText(result1);
        ui->lineEdit_69->setText(result2);
        ui->lineEdit_70->setText(result3);

    }
    else if(ui->stackedWidget->currentIndex() == 9)
    {
        double user_inputed_value = ui->lineEdit_71->text().toDouble();
        int index = 0;
        for(int i=0; i<18; i++)
        {
            if(ui->comboBox_19->currentIndex() == i)
            {
                index = i;
            }
        }
        double main_value = get_value_of_torque(index);
        double dmm = 1;
        double dcm = 0.1;
        double gmm = 0.00102;
        double dm  = 0.001;
        double gcm = 0.0001;
        double nmm = 0.0000001;
        double gm =  0.0000000980665;
        double kmm = 0.0000000980665;
        double oi =  0.00000007061552;
        double ncm = 0.00000001;
        double pi =  0.0000000001129848333338;
        double of =  0.000000000013558180003119;
        double pf =  0.000000000013558180003119;
        double nm =  0.00000000001;
        double kcm = 0.000000000098066500286389;
        double km =  0.000000000098066496716131;
        double knm = 0.00000000000001;

        double s1 = user_inputed_value * (dmm / main_value);
        double s2 = user_inputed_value * (dcm / main_value);
        double s3 = user_inputed_value * (gmm / main_value);
        double s4 = user_inputed_value * (dm / main_value);
        double s5 = user_inputed_value * (gcm / main_value);
        double s6 = user_inputed_value * (nmm / main_value);
        double s7 = user_inputed_value * (gm / main_value);
        double s8 = user_inputed_value * (kmm / main_value);
        double s9 = user_inputed_value * (oi / main_value);
        double s10 = user_inputed_value * (ncm / main_value);
        double s11 = user_inputed_value * (pi / main_value);
        double s12 = user_inputed_value * (of / main_value);
        double s13 = user_inputed_value * (pf / main_value);
        double s14 = user_inputed_value * (nm / main_value);
        double s15 = user_inputed_value * (kcm / main_value);
        double s16 = user_inputed_value * (km / main_value);
        double s17 = user_inputed_value * (knm / main_value);

        QString result=QString::number(s1);
        QString result1=QString::number(s2);
        QString result2=QString::number(s3);
        QString result3=QString::number(s4);
        QString result4=QString::number(s5);
        QString result5=QString::number(s6);
        QString result6=QString::number(s7);
        QString result7=QString::number(s8);
        QString result8=QString::number(s9);
        QString result9=QString::number(s10);
        QString result10=QString::number(s11);
        QString result11=QString::number(s12);
        QString result12=QString::number(s13);
        QString result13=QString::number(s14);
        QString result14=QString::number(s15);
        QString result15=QString::number(s16);
        QString result16=QString::number(s17);

        ui->lineEdit_72->setText(result);
        ui->lineEdit_73->setText(result1);
        ui->lineEdit_74->setText(result2);
        ui->lineEdit_75->setText(result3);
        ui->lineEdit_76->setText(result4);
        ui->lineEdit_77->setText(result5);
        ui->lineEdit_78->setText(result6);
        ui->lineEdit_79->setText(result7);
        ui->lineEdit_88->setText(result8);
        ui->lineEdit_80->setText(result9);
        ui->lineEdit_81->setText(result10);
        ui->lineEdit_82->setText(result11);
        ui->lineEdit_83->setText(result12);
        ui->lineEdit_84->setText(result13);
        ui->lineEdit_85->setText(result14);
        ui->lineEdit_86->setText(result15);
        ui->lineEdit_87->setText(result16);

    }
    else if(ui->stackedWidget->currentIndex() == 10)
    {
        double user_inputed_value = ui->lineEdit_89->text().toDouble();
        int index = 0;
        for(int i=0; i<24; i++)
        {
            if(ui->comboBox_24->currentIndex() == i)
            {
                index = i;
            }
        }
        double main_value = get_value_of_energy_and_work(index);
        double v1  = 6241506363.00000095367431640625; //ev
        double v2  = 6241506.36300000082701444626; //kev
        double v3  = 6241.50636300000041956082;  //mev
        double v4  = 1; //nj
        double v5  = 0.00100000000000000002; //mcj
        double v6  = 0.000001; //mj
        double v7  = 0.000000001;//j
        double v8= 0.000000001; //nm
        double v9 = 0.000000000238845897; //cal
        double v10  = 0.000000000001;//kj
        double v11  = 0.000000000001; //kwh
        double v12  = 0.00000000000027777800; //wh
        double v13  = 0.00000000000027777800; //ws
        double v14 = 0.00000000000023900600; //kcal
        double v15  = 0.000000000000001;//mgj
        double v16 = 0.000000000000000378; //hph metric
        double v17 = 0.00000000000000037300; //hph
        double v18  = 0.00000000000000027800;  //kvh
        double v19  = 0.000000000000000001;//ggj
        double v20  = 0.00000000000000000028; //mgvh
        double v21 = 0.00000000000000000000001; //ggwh
        double v22 = 0.000000000000000000000001; //kton
        double v23 = 0.0000000000000000000000000001; //mton
        double v24 = 0.00000000000000000000000000000001; //gton

        double s1 = user_inputed_value * (v1 / main_value);
        double s2 = user_inputed_value * (v2 / main_value);
        double s3 = user_inputed_value * (v3 / main_value);
        double s4 = user_inputed_value * (v4 / main_value);
        double s5 = user_inputed_value * (v5 / main_value);
        double s6 = user_inputed_value * (v6 / main_value);
        double s7 = user_inputed_value * (v7 / main_value);
        double s8 = user_inputed_value * (v8 / main_value);
        double s9 = user_inputed_value * (v9 / main_value);
        double s10 = user_inputed_value * (v10 / main_value);
        double s11 = user_inputed_value * (v11 / main_value);
        double s12 = user_inputed_value * (v12 / main_value);
        double s13 = user_inputed_value * (v13 / main_value);
        double s14 = user_inputed_value * (v14 / main_value);
        double s15 = user_inputed_value * (v15 / main_value);
        double s16 = user_inputed_value * (v16 / main_value);
        double s17 = user_inputed_value * (v17 / main_value);
        double s18 = user_inputed_value * (v18 / main_value);
        double s19 = user_inputed_value * (v19 / main_value);
        double s20 = user_inputed_value * (v20 / main_value);
        double s21 = user_inputed_value * (v21 / main_value);
        double s22 = user_inputed_value * (v22 / main_value);
        double s23 = user_inputed_value * (v23 / main_value);
        double s24 = user_inputed_value * (v24 / main_value);

        QString result=QString::number(s1);
        QString result1=QString::number(s2);
        QString result2=QString::number(s3);
        QString result3=QString::number(s4);
        QString result4=QString::number(s5);
        QString result5=QString::number(s6);
        QString result6=QString::number(s7);
        QString result7=QString::number(s8);
        QString result8=QString::number(s9);
        QString result9=QString::number(s10);
        QString result10=QString::number(s11);
        QString result11=QString::number(s12);
        QString result12=QString::number(s13);
        QString result13=QString::number(s14);
        QString result14=QString::number(s15);
        QString result15=QString::number(s16);
        QString result16=QString::number(s17);
        QString result17=QString::number(s18);
        QString result18=QString::number(s19);
        QString result19=QString::number(s20);
        QString result20=QString::number(s21);
        QString result21=QString::number(s22);
        QString result22=QString::number(s23);
        QString result23=QString::number(s24);

        ui->lineEdit_90->setText(result);
        ui->lineEdit_91->setText(result1);
        ui->lineEdit_92->setText(result2);
        ui->lineEdit_93->setText(result3);
        ui->lineEdit_94->setText(result4);
        ui->lineEdit_95->setText(result5);
        ui->lineEdit_96->setText(result6);
        ui->lineEdit_97->setText(result7);
        ui->lineEdit_98->setText(result8);
        ui->lineEdit_99->setText(result9);
        ui->lineEdit_100->setText(result10);
        ui->lineEdit_101->setText(result11);
        ui->lineEdit_102->setText(result12);
        ui->lineEdit_103->setText(result13);
        ui->lineEdit_104->setText(result14);
        ui->lineEdit_105->setText(result15);
        ui->lineEdit_106->setText(result16);
        ui->lineEdit_107->setText(result17);
        ui->lineEdit_108->setText(result18);
        ui->lineEdit_109->setText(result19);
        ui->lineEdit_110->setText(result20);
        ui->lineEdit_111->setText(result21);
        ui->lineEdit_112->setText(result22);
        ui->lineEdit_113->setText(result23);


    }
    else if(ui->stackedWidget->currentIndex() == 11)
    {
        double user_inputed_value = ui->lineEdit_114->text().toDouble();
        int index = 0;
        for(int i=0; i<9; i++)
        {
            if(ui->comboBox_21->currentIndex() == i)
            {
                index = i;
            }
        }

        double main_value = get_value_of_time(index);
        double s = 1;
        double m =  0.01667;
        double h =  0.000277778;
        double d =  0.000011574;
        double md = 0.000011264;
        double w =  0.000001653;
        double ld = 0.000000424;
        double mn = 0.000000379;
        double y  = 0.000000032;

        double s1 = user_inputed_value * (s / main_value);
        double s2 = user_inputed_value * (m / main_value);
        double s3 = user_inputed_value * (h / main_value);
        double s4 = user_inputed_value * (d / main_value);
        double s5 = user_inputed_value * (md / main_value);
        double s6 = user_inputed_value * (w / main_value);
        double s7 = user_inputed_value * (ld / main_value);
        double s8 = user_inputed_value * (mn / main_value);
        double s9 = user_inputed_value * (y / main_value);

        QString result=QString::number(s1);
        QString result1=QString::number(s2);
        QString result2=QString::number(s3);
        QString result3=QString::number(s4);
        QString result4=QString::number(s5);
        QString result5=QString::number(s6);
        QString result6=QString::number(s7);
        QString result7=QString::number(s8);
        QString result8=QString::number(s9);
        ui->lineEdit_115->setText(result);
        ui->lineEdit_116->setText(result1);
        ui->lineEdit_117->setText(result2);
        ui->lineEdit_118->setText(result3);
        ui->lineEdit_119->setText(result4);
        ui->lineEdit_120->setText(result5);
        ui->lineEdit_121->setText(result6);
        ui->lineEdit_122->setText(result7);
        ui->lineEdit_123->setText(result8);
    }
}
















void unityconverter::on_pushButton_16_clicked()
{
    siu = new units(this);
    siu->show();
}

void unityconverter::on_pushButton_14_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
    ui->lineEdit_8->setText("");
    ui->lineEdit_9->setText("");
    ui->lineEdit_10->setText("");
    ui->lineEdit_11->setText("");
    ui->lineEdit_12->setText("");
    ui->lineEdit_13->setText("");
    ui->lineEdit_14->setText("");
    ui->lineEdit_15->setText("");
    ui->lineEdit_16->setText("");
    ui->lineEdit_17->setText("");
    ui->lineEdit_18->setText("");
    ui->lineEdit_19->setText("");
    ui->lineEdit_20->setText("");
    ui->lineEdit_21->setText("");
    ui->lineEdit_22->setText("");
    ui->lineEdit_23->setText("");
    ui->lineEdit_24->setText("");
    ui->lineEdit_25->setText("");
    ui->lineEdit_26->setText("");
    ui->lineEdit_27->setText("");
    ui->lineEdit_28->setText("");
    ui->lineEdit_29->setText("");
    ui->lineEdit_30->setText("");
    ui->lineEdit_31->setText("");
    ui->lineEdit_32->setText("");
    ui->lineEdit_33->setText("");
    ui->lineEdit_34->setText("");
    ui->lineEdit_35->setText("");
    ui->lineEdit_36->setText("");
    ui->lineEdit_37->setText("");
    ui->lineEdit_38->setText("");
    ui->lineEdit_39->setText("");
    ui->lineEdit_40->setText("");
    ui->lineEdit_41->setText("");
    ui->lineEdit_42->setText("");
    ui->lineEdit_43->setText("");
    ui->lineEdit_44->setText("");
    ui->lineEdit_45->setText("");
    ui->lineEdit_46->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_47->setText("");
    ui->lineEdit_48->setText("");
    ui->lineEdit_49->setText("");
    ui->lineEdit_50->setText("");
    ui->lineEdit_51->setText("");
    ui->lineEdit_52->setText("");
    ui->lineEdit_53->setText("");
    ui->lineEdit_54->setText("");
    ui->lineEdit_55->setText("");
    ui->lineEdit_56->setText("");
    ui->lineEdit_57->setText("");
    ui->lineEdit_58->setText("");
    ui->lineEdit_59->setText("");
    ui->lineEdit_60->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_61->setText("");
    ui->lineEdit_62->setText("");
    ui->lineEdit_63->setText("");
    ui->lineEdit_64->setText("");
    ui->lineEdit_65->setText("");
    ui->lineEdit_66->setText("");
    ui->lineEdit_67->setText("");
    ui->lineEdit_68->setText("");
    ui->lineEdit_69->setText("");
    ui->lineEdit_70->setText("");
    ui->lineEdit_71->setText("");
    ui->lineEdit_72->setText("");
    ui->lineEdit_73->setText("");
    ui->lineEdit_74->setText("");
    ui->lineEdit_75->setText("");
    ui->lineEdit_76->setText("");
    ui->lineEdit_77->setText("");
    ui->lineEdit_78->setText("");
    ui->lineEdit_79->setText("");
    ui->lineEdit_88->setText("");
    ui->lineEdit_80->setText("");
    ui->lineEdit_81->setText("");
    ui->lineEdit_82->setText("");
    ui->lineEdit_83->setText("");
    ui->lineEdit_84->setText("");
    ui->lineEdit_85->setText("");
    ui->lineEdit_86->setText("");
    ui->lineEdit_87->setText("");
    ui->lineEdit_89->setText("");
    ui->lineEdit_90->setText("");
    ui->lineEdit_91->setText("");
    ui->lineEdit_92->setText("");
    ui->lineEdit_93->setText("");
    ui->lineEdit_94->setText("");
    ui->lineEdit_95->setText("");
    ui->lineEdit_96->setText("");
    ui->lineEdit_97->setText("");
    ui->lineEdit_98->setText("");
    ui->lineEdit_99->setText("");
    ui->lineEdit_100->setText("");
    ui->lineEdit_101->setText("");
    ui->lineEdit_102->setText("");
    ui->lineEdit_103->setText("");
    ui->lineEdit_104->setText("");
    ui->lineEdit_105->setText("");
    ui->lineEdit_106->setText("");
    ui->lineEdit_107->setText("");
    ui->lineEdit_108->setText("");
    ui->lineEdit_109->setText("");
    ui->lineEdit_110->setText("");
    ui->lineEdit_111->setText("");
    ui->lineEdit_112->setText("");
    ui->lineEdit_113->setText("");
    ui->lineEdit_114->setText("");
    ui->lineEdit_115->setText("");
    ui->lineEdit_116->setText("");
    ui->lineEdit_117->setText("");
    ui->lineEdit_118->setText("");
    ui->lineEdit_119->setText("");
    ui->lineEdit_120->setText("");
    ui->lineEdit_121->setText("");
    ui->lineEdit_122->setText("");
    ui->lineEdit_123->setText("");

}

void unityconverter::on_pushButton_13_clicked()
{
    si = new SI(this);
    si->show();
}



void unityconverter::on_actionHelp_triggered()
{
    helpWindow = new help(this);
    helpWindow->show();
}

void unityconverter::on_actionAbout_triggered()
{
    aboutWindow = new about(this);
    aboutWindow->show();
}



void unityconverter::on_actionQuit_triggered()
{
    unityconverter::QMainWindow::close();
}
