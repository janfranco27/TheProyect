#include "ui_edit_articulo.h"
#include "ui_ui_edit_articulo.h"
#include "object_e_articulo.h"

const int op_default = 0;
const int not_found = -1;

ui_edit_articulo::ui_edit_articulo(object_e_articulo *ar, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_edit_articulos)
{
    ui->setupUi(this);

    update_form();

    qDebug()<<ar->mf_get_pk_articulo()<<" "<<ar->mf_get_descripcion();
    ui->l_codigoop->setText(ar->mf_get_pk_articulo());
    ui->le_nombre_2->setText(ar->mf_get_descripcion());
    ui->le_precio_2->setText(ar->mf_get_precio_lista());
    ui->le_stock_2->setText(ar->mf_get_stock());

     int grupo_index = ui->cb_grupo->findText(ar->mf_get_fk_grupo());
     int marca_index =ui->cb_marca->findText(ar->mf_get_fk_marca());
    int medida_index = ui->cb_medida->findText(ar->mf_get_fk_medida());
    grupo_index = (grupo_index==not_found)?op_default:grupo_index;
    marca_index = (marca_index==not_found)?op_default:marca_index;
    medida_index = (medida_index==not_found)?op_default:medida_index;

    ui->cb_grupo->setCurrentIndex(grupo_index);
    ui->cb_marca->setCurrentIndex(marca_index);
    ui->cb_medida->setCurrentIndex(medida_index);


}

ui_edit_articulo::~ui_edit_articulo()
{
    delete ui;
}

void ui_edit_articulo::update_form()
{
    //Actualizamos los combobox con la informacion de la BD

    vector<_QSTR> grupo = SYSTEM->getDescripcion("e_grupo");
    vector<_QSTR> marca = SYSTEM->getDescripcion("e_marca");
    vector<_QSTR> medida = SYSTEM->getDescripcion("e_medida");
    vector<_QSTR> proveedor = SYSTEM->getDescripcion("e_proveedor");

    foreach(_QSTR a, grupo)
    {
        qDebug()<<a;
    }

    SYSTEM->loadComboBoxFromVector(ui->cb_grupo,grupo,false);
    SYSTEM->loadComboBoxFromVector(ui->cb_marca,marca,false);
    SYSTEM->loadComboBoxFromVector(ui->cb_medida,medida,false);
    SYSTEM->loadComboBoxFromVector(ui->cb_proveedor,proveedor,false);
}
