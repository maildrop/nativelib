#pragma once

// ���̃V���{���� dll ���r���h����Ƃ��ɂ͒�`�����B
// �v���W�F�N�g�� C/C++ �v���v���Z�b�T��`�Őݒ肷��B
// ���̃v���W�F�N�g�Ńr���h�����Ƃ��ɂ� �v���W�F�N�g�Œ�`����Ă���̂� dllexport ���I������
// �悻�̃v���W�F�N�g�Ɏ����čs�������ɂ͒�`����Ă��Ȃ��̂�
// __declspec( dllimport ) ���g�p�����B

/*
���̎��ɂł��� .lib �t�@�C���� dumpbin.exe (VC�̃R�}���h���C���c�[�� �I�u�W�F�N�g�t�@�C���̕\���̂��߂̃c�[���j��
 /EXPORTS �� �V���{����\��������ƈȉ��̂悤�ɂȂ�B


> dumpbin /EXPORTS nativelib.dll
Microsoft (R) COFF/PE Dumper Version 14.26.28806.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file nativelib.dll

File Type: DLL

  Section contains the following exports for nativelib.dll

    00000000 characteristics
    FFFFFFFF time date stamp
        0.00 version
           1 ordinal base
           4 number of functions
           4 number of names

    ordinal hint RVA      name

          1    0 0001121C ??0some_class@@QAE@XZ = @ILT+535(??0some_class@@QAE@XZ)
          2    1 0001110E ??1some_class@@QAE@XZ = @ILT+265(??1some_class@@QAE@XZ)
          3    2 000112BC ??4some_class@@QAEAAV0@ABV0@@Z = @ILT+695(??4some_class@@QAEAAV0@ABV0@@Z)
          4    3 000110F5 ?proc@some_class@@QAEXXZ = @ILT+240(?proc@some_class@@QAEXXZ)

  Summary

        1000 .00cfg
        1000 .data
        1000 .idata
        1000 .msvcjmc
        2000 .rdata
        1000 .reloc
        1000 .rsrc
        7000 .text
       10000 .textbss

 �}���O������Ă�̂ŁA�֐��������̂܂܂ł͂Ȃ����m���ɃG�N�X�|�[�g����Ă��邱�Ƃ�������B
*/
#if defined( NLEXPORT )
#define NLAPI __declspec( dllexport )
#else /* defined( NLEXPORT ) */
#define NLAPI __declspec( dllimport )
#endif /* defined( NLEXPORT ) */

class NLAPI some_class {
    int a;
public: 
    some_class ();
    ~some_class ();

    void proc ();
};