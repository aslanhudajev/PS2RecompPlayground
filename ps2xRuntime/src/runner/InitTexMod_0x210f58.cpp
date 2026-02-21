#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitTexMod
// Address: 0x210f58 - 0x211170
void InitTexMod_0x210f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210f58u;

    // 0x210f58: 0x27bdffb0
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210f5c: 0xffbf0040
    ctx->pc = 0x210f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x210f60: 0xffb30030
    ctx->pc = 0x210f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x210f64: 0xffb20020
    ctx->pc = 0x210f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210f68: 0xffb10010
    ctx->pc = 0x210f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x210f6c: 0xffb00000
    ctx->pc = 0x210f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210f70: 0x80882d
    ctx->pc = 0x210f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f74: 0x8e220048
    ctx->pc = 0x210f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x210f78: 0x24420005
    ctx->pc = 0x210f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x210f7c: 0x2c420002
    ctx->pc = 0x210f7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x210f80: 0x10400002
    ctx->pc = 0x210F80u;
    {
        const bool branch_taken_0x210f80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F84u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210f80) {
            ctx->pc = 0x210F8Cu;
            goto label_210f8c;
        }
    }
    ctx->pc = 0x210F88u;
    // 0x210f88: 0xae200044
    ctx->pc = 0x210f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_210f8c:
    // 0x210f8c: 0x8e220044
    ctx->pc = 0x210f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x210f90: 0x4400004
    ctx->pc = 0x210F90u;
    {
        const bool branch_taken_0x210f90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x210F94u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x210f90) {
            ctx->pc = 0x210FA4u;
            goto label_210fa4;
        }
    }
    ctx->pc = 0x210F98u;
    // 0x210f98: 0x131400
    ctx->pc = 0x210f98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 16));
    // 0x210f9c: 0x10000008
    ctx->pc = 0x210F9Cu;
    {
        const bool branch_taken_0x210f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210FA0u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x210f9c) {
            ctx->pc = 0x210FC0u;
            goto label_210fc0;
        }
    }
    ctx->pc = 0x210FA4u;
label_210fa4:
    // 0x210fa4: 0x26240004
    ctx->pc = 0x210fa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x210fa8: 0x282d
    ctx->pc = 0x210fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fac: 0x260302d
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fb0: 0x260382d
    ctx->pc = 0x210fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fb4: 0xc0b1b56
    ctx->pc = 0x210FB4u;
    SET_GPR_U32(ctx, 31, 0x210FBCu);
    ctx->pc = 0x210FB8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210FBCu; }
    }
    if (ctx->pc != 0x210FBCu) { return; }
    ctx->pc = 0x210FBCu;
    // 0x210fbc: 0x40902d
    ctx->pc = 0x210fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210fc0:
    // 0x210fc0: 0x56400009
    ctx->pc = 0x210FC0u;
    {
        const bool branch_taken_0x210fc0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x210fc0) {
            ctx->pc = 0x210FC4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
            ctx->pc = 0x210FE8u;
            goto label_210fe8;
        }
    }
    ctx->pc = 0x210FC8u;
    // 0x210fc8: 0x3c04003a
    ctx->pc = 0x210fc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x210fcc: 0x24845868
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22632));
    // 0x210fd0: 0x26250004
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4));
    // 0x210fd4: 0xc0b492e
    ctx->pc = 0x210FD4u;
    SET_GPR_U32(ctx, 31, 0x210FDCu);
    ctx->pc = 0x210FD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 36));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210FDCu; }
    }
    if (ctx->pc != 0x210FDCu) { return; }
    ctx->pc = 0x210FDCu;
    // 0x210fdc: 0x2402ffff
    ctx->pc = 0x210fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210fe0: 0x1000005c
    ctx->pc = 0x210FE0u;
    {
        const bool branch_taken_0x210fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210FE4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x210fe0) {
            ctx->pc = 0x211154u;
            goto label_211154;
        }
    }
    ctx->pc = 0x210FE8u;
label_210fe8:
    // 0x210fe8: 0x8e220048
    ctx->pc = 0x210fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x210fec: 0x443004d
    ctx->pc = 0x210FECu;
    {
        const bool branch_taken_0x210fec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x210fec) {
            ctx->pc = 0x210FF0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->pc = 0x211124u;
            goto label_211124;
        }
    }
    ctx->pc = 0x210FF4u;
    // 0x210ff4: 0x40182d
    ctx->pc = 0x210ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ff8: 0x2862ffff
    ctx->pc = 0x210ff8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967295));
    // 0x210ffc: 0x10400007
    ctx->pc = 0x210FFCu;
    {
        const bool branch_taken_0x210ffc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211000u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967293));
        if (branch_taken_0x210ffc) {
            ctx->pc = 0x21101Cu;
            goto label_21101c;
        }
    }
    ctx->pc = 0x211004u;
    // 0x211004: 0x1040001a
    ctx->pc = 0x211004u;
    {
        const bool branch_taken_0x211004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211008u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x211004) {
            ctx->pc = 0x211070u;
            goto label_211070;
        }
    }
    ctx->pc = 0x21100Cu;
    // 0x21100c: 0x10620008
    ctx->pc = 0x21100Cu;
    {
        const bool branch_taken_0x21100c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x211010u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x21100c) {
            ctx->pc = 0x211030u;
            goto label_211030;
        }
    }
    ctx->pc = 0x211014u;
    // 0x211014: 0x10000051
    ctx->pc = 0x211014u;
    {
        const bool branch_taken_0x211014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211018u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x211014) {
            ctx->pc = 0x21115Cu;
            goto label_21115c;
        }
    }
    ctx->pc = 0x21101Cu;
label_21101c:
    // 0x21101c: 0x2402ffff
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211020: 0x1062000a
    ctx->pc = 0x211020u;
    {
        const bool branch_taken_0x211020 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x211024u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x211020) {
            ctx->pc = 0x21104Cu;
            goto label_21104c;
        }
    }
    ctx->pc = 0x211028u;
    // 0x211028: 0x1000004c
    ctx->pc = 0x211028u;
    {
        const bool branch_taken_0x211028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21102Cu;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x211028) {
            ctx->pc = 0x21115Cu;
            goto label_21115c;
        }
    }
    ctx->pc = 0x211030u;
label_211030:
    // 0x211030: 0xc0b3da0
    ctx->pc = 0x211030u;
    SET_GPR_U32(ctx, 31, 0x211038u);
    ctx->pc = 0x211034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211038u; }
    }
    if (ctx->pc != 0x211038u) { return; }
    ctx->pc = 0x211038u;
    // 0x211038: 0x26240024
    ctx->pc = 0x211038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 36));
    // 0x21103c: 0xc0b1bb4
    ctx->pc = 0x21103Cu;
    SET_GPR_U32(ctx, 31, 0x211044u);
    ctx->pc = 0x211040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211044u; }
    }
    if (ctx->pc != 0x211044u) { return; }
    ctx->pc = 0x211044u;
    // 0x211044: 0x10000044
    ctx->pc = 0x211044u;
    {
        const bool branch_taken_0x211044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211048u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x211044) {
            ctx->pc = 0x211158u;
            goto label_211158;
        }
    }
    ctx->pc = 0x21104Cu;
label_21104c:
    // 0x21104c: 0x26240024
    ctx->pc = 0x21104cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 36));
    // 0x211050: 0xc0b1bb4
    ctx->pc = 0x211050u;
    SET_GPR_U32(ctx, 31, 0x211058u);
    ctx->pc = 0x211054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211058u; }
    }
    if (ctx->pc != 0x211058u) { return; }
    ctx->pc = 0x211058u;
    // 0x211058: 0x40802d
    ctx->pc = 0x211058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21105c: 0x200202d
    ctx->pc = 0x21105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211060: 0xc0b3e12
    ctx->pc = 0x211060u;
    SET_GPR_U32(ctx, 31, 0x211068u);
    ctx->pc = 0x211064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF848u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCopyTexture_0x2cf848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211068u; }
    }
    if (ctx->pc != 0x211068u) { return; }
    ctx->pc = 0x211068u;
    // 0x211068: 0x1000003a
    ctx->pc = 0x211068u;
    {
        const bool branch_taken_0x211068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21106Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
        if (branch_taken_0x211068) {
            ctx->pc = 0x211154u;
            goto label_211154;
        }
    }
    ctx->pc = 0x211070u;
label_211070:
    // 0x211070: 0x86230000
    ctx->pc = 0x211070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211074: 0x2402ffff
    ctx->pc = 0x211074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211078: 0x14620037
    ctx->pc = 0x211078u;
    {
        const bool branch_taken_0x211078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x21107Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x211078) {
            ctx->pc = 0x211158u;
            goto label_211158;
        }
    }
    ctx->pc = 0x211080u;
    // 0x211080: 0xc0b3da0
    ctx->pc = 0x211080u;
    SET_GPR_U32(ctx, 31, 0x211088u);
    ctx->pc = 0x211084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211088u; }
    }
    if (ctx->pc != 0x211088u) { return; }
    ctx->pc = 0x211088u;
    // 0x211088: 0x40202d
    ctx->pc = 0x211088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21108c: 0x94820008
    ctx->pc = 0x21108cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x211090: 0x30420040
    ctx->pc = 0x211090u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x211094: 0x10400004
    ctx->pc = 0x211094u;
    {
        const bool branch_taken_0x211094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211098u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x211094) {
            ctx->pc = 0x2110A8u;
            goto label_2110a8;
        }
    }
    ctx->pc = 0x21109Cu;
    // 0x21109c: 0x94820012
    ctx->pc = 0x21109cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2110a0: 0x1000002c
    ctx->pc = 0x2110A0u;
    {
        const bool branch_taken_0x2110a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2110A4u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2110a0) {
            ctx->pc = 0x211154u;
            goto label_211154;
        }
    }
    ctx->pc = 0x2110A8u;
label_2110a8:
    // 0x2110a8: 0x8c45cb68
    ctx->pc = 0x2110a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294953832)));
    // 0x2110ac: 0x28a20040
    ctx->pc = 0x2110acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 64));
    // 0x2110b0: 0x14400006
    ctx->pc = 0x2110B0u;
    {
        const bool branch_taken_0x2110b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2110B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2110b0) {
            ctx->pc = 0x2110CCu;
            goto label_2110cc;
        }
    }
    ctx->pc = 0x2110B8u;
    // 0x2110b8: 0x3c04003a
    ctx->pc = 0x2110b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2110bc: 0xc0b492e
    ctx->pc = 0x2110BCu;
    SET_GPR_U32(ctx, 31, 0x2110C4u);
    ctx->pc = 0x2110C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22672));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110C4u; }
    }
    if (ctx->pc != 0x2110C4u) { return; }
    ctx->pc = 0x2110C4u;
    // 0x2110c4: 0x10000024
    ctx->pc = 0x2110C4u;
    {
        const bool branch_taken_0x2110c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2110C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2110c4) {
            ctx->pc = 0x211158u;
            goto label_211158;
        }
    }
    ctx->pc = 0x2110CCu;
label_2110cc:
    // 0x2110cc: 0x8c62cb68
    ctx->pc = 0x2110ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294953832)));
    // 0x2110d0: 0x40282d
    ctx->pc = 0x2110d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110d4: 0x24420001
    ctx->pc = 0x2110d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2110d8: 0xac62cb68
    ctx->pc = 0x2110d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953832), GPR_U32(ctx, 2));
    // 0x2110dc: 0x94820008
    ctx->pc = 0x2110dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2110e0: 0x34420040
    ctx->pc = 0x2110e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
    // 0x2110e4: 0xa4820008
    ctx->pc = 0x2110e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2110e8: 0xa4850012
    ctx->pc = 0x2110e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x2110ec: 0x3c02003a
    ctx->pc = 0x2110ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2110f0: 0x24420cb0
    ctx->pc = 0x2110f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x2110f4: 0x52100
    ctx->pc = 0x2110f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2110f8: 0x441821
    ctx->pc = 0x2110f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2110fc: 0xac600004
    ctx->pc = 0x2110fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x211100: 0xac60000c
    ctx->pc = 0x211100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x211104: 0x821821
    ctx->pc = 0x211104u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211108: 0x3c013f80
    ctx->pc = 0x211108u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21110c: 0x44810000
    ctx->pc = 0x21110cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x211110: 0xe4600000
    ctx->pc = 0x211110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x211114: 0x441021
    ctx->pc = 0x211114u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211118: 0xe4400008
    ctx->pc = 0x211118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21111c: 0x1000000d
    ctx->pc = 0x21111Cu;
    {
        const bool branch_taken_0x21111c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211120u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x21111c) {
            ctx->pc = 0x211154u;
            goto label_211154;
        }
    }
    ctx->pc = 0x211124u;
label_211124:
    // 0x211124: 0x3c02ffff
    ctx->pc = 0x211124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x211128: 0x821024
    ctx->pc = 0x211128u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21112c: 0x14400004
    ctx->pc = 0x21112Cu;
    {
        const bool branch_taken_0x21112c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211130u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x21112c) {
            ctx->pc = 0x211140u;
            goto label_211140;
        }
    }
    ctx->pc = 0x211134u;
    // 0x211134: 0x131400
    ctx->pc = 0x211134u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 16));
    // 0x211138: 0x2028025
    ctx->pc = 0x211138u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21113c: 0xae300048
    ctx->pc = 0x21113cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_211140:
    // 0x211140: 0xc0b3da0
    ctx->pc = 0x211140u;
    SET_GPR_U32(ctx, 31, 0x211148u);
    ctx->pc = 0x211144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211148u; }
    }
    if (ctx->pc != 0x211148u) { return; }
    ctx->pc = 0x211148u;
    // 0x211148: 0x240202d
    ctx->pc = 0x211148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21114c: 0xc0b3de4
    ctx->pc = 0x21114Cu;
    SET_GPR_U32(ctx, 31, 0x211154u);
    ctx->pc = 0x211150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetRomTexture_0x2cf790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211154u; }
    }
    if (ctx->pc != 0x211154u) { return; }
    ctx->pc = 0x211154u;
label_211154:
    // 0x211154: 0xdfbf0040
    ctx->pc = 0x211154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_211158:
    // 0x211158: 0xdfb30030
    ctx->pc = 0x211158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21115c:
    // 0x21115c: 0xdfb20020
    ctx->pc = 0x21115cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211160: 0xdfb10010
    ctx->pc = 0x211160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211164: 0xdfb00000
    ctx->pc = 0x211164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211168: 0x3e00008
    ctx->pc = 0x211168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21116Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210F8Cu: goto label_210f8c;
            case 0x210FA4u: goto label_210fa4;
            case 0x210FC0u: goto label_210fc0;
            case 0x210FE8u: goto label_210fe8;
            case 0x21101Cu: goto label_21101c;
            case 0x211030u: goto label_211030;
            case 0x21104Cu: goto label_21104c;
            case 0x211070u: goto label_211070;
            case 0x2110A8u: goto label_2110a8;
            case 0x2110CCu: goto label_2110cc;
            case 0x211124u: goto label_211124;
            case 0x211140u: goto label_211140;
            case 0x211154u: goto label_211154;
            case 0x211158u: goto label_211158;
            case 0x21115Cu: goto label_21115c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211170u;
}
