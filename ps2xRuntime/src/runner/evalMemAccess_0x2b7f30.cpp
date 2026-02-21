#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalMemAccess
// Address: 0x2b7f30 - 0x2b862c
void evalMemAccess_0x2b7f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7f30u;

label_2b7f30:
    // 0x2b7f30: 0x27bdff60
    ctx->pc = 0x2b7f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b7f34:
    // 0x2b7f34: 0xffbf0090
    ctx->pc = 0x2b7f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b7f38:
    // 0x2b7f38: 0xffbe0080
    ctx->pc = 0x2b7f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2b7f3c:
    // 0x2b7f3c: 0xffb70070
    ctx->pc = 0x2b7f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2b7f40:
    // 0x2b7f40: 0xffb60060
    ctx->pc = 0x2b7f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b7f44:
    // 0x2b7f44: 0xffb50050
    ctx->pc = 0x2b7f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b7f48:
    // 0x2b7f48: 0xffb40040
    ctx->pc = 0x2b7f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b7f4c:
    // 0x2b7f4c: 0xffb30030
    ctx->pc = 0x2b7f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b7f50:
    // 0x2b7f50: 0xffb20020
    ctx->pc = 0x2b7f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b7f54:
    // 0x2b7f54: 0xffb10010
    ctx->pc = 0x2b7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b7f58:
    // 0x2b7f58: 0xffb00000
    ctx->pc = 0x2b7f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b7f5c:
    // 0x2b7f5c: 0x80f02d
    ctx->pc = 0x2b7f5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f60:
    // 0x2b7f60: 0xa0982d
    ctx->pc = 0x2b7f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f64:
    // 0x2b7f64: 0xc0a82d
    ctx->pc = 0x2b7f64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f68:
    // 0x2b7f68: 0xe0b82d
    ctx->pc = 0x2b7f68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f6c:
    // 0x2b7f6c: 0x100902d
    ctx->pc = 0x2b7f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f70:
    // 0x2b7f70: 0x2414fffe
    ctx->pc = 0x2b7f70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b7f74:
    // 0x2b7f74: 0x2416ffff
    ctx->pc = 0x2b7f74u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7f78:
    // 0x2b7f78: 0x3c040037
    ctx->pc = 0x2b7f78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2b7f7c:
    // 0x2b7f7c: 0x8c8220b0
    ctx->pc = 0x2b7f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8368)));
label_2b7f80:
    // 0x2b7f80: 0x3c03ffff
    ctx->pc = 0x2b7f80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_2b7f84:
    // 0x2b7f84: 0x3463fff1
    ctx->pc = 0x2b7f84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
label_2b7f88:
    // 0x2b7f88: 0x431024
    ctx->pc = 0x2b7f88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b7f8c:
    // 0x2b7f8c: 0xac8220b0
    ctx->pc = 0x2b7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8368), GPR_U32(ctx, 2));
label_2b7f90:
    // 0x2b7f90: 0x3c100037
    ctx->pc = 0x2b7f90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2b7f94:
    // 0x2b7f94: 0x8e0320ac
    ctx->pc = 0x2b7f94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
label_2b7f98:
    // 0x2b7f98: 0x8c710014
    ctx->pc = 0x2b7f98u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b7f9c:
    // 0x2b7f9c: 0x24020001
    ctx->pc = 0x2b7f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b7fa0:
    // 0x2b7fa0: 0xac620014
    ctx->pc = 0x2b7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2b7fa4:
    // 0x2b7fa4: 0x3c04003b
    ctx->pc = 0x2b7fa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b7fa8:
    // 0x2b7fa8: 0x248452f8
    ctx->pc = 0x2b7fa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21240));
label_2b7fac:
    // 0x2b7fac: 0xc0addb0
label_2b7fb0:
    if (ctx->pc == 0x2B7FB0u) {
        ctx->pc = 0x2B7FB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FB4u;
        goto label_2b7fb4;
    }
    ctx->pc = 0x2B7FACu;
    SET_GPR_U32(ctx, 31, 0x2B7FB4u);
    ctx->pc = 0x2B7FB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FB4u; }
    }
    if (ctx->pc != 0x2B7FB4u) { return; }
    ctx->pc = 0x2B7FB4u;
label_2b7fb4:
    // 0x2b7fb4: 0x3c0202d
    ctx->pc = 0x2b7fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fb8:
    // 0x2b7fb8: 0x260282d
    ctx->pc = 0x2b7fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fbc:
    // 0x2b7fbc: 0x26e60001
    ctx->pc = 0x2b7fbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 23), 1));
label_2b7fc0:
    // 0x2b7fc0: 0x2647ffff
    ctx->pc = 0x2b7fc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2b7fc4:
    // 0x2b7fc4: 0xc0ae35e
label_2b7fc8:
    if (ctx->pc == 0x2B7FC8u) {
        ctx->pc = 0x2B7FC8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B7FCCu;
        goto label_2b7fcc;
    }
    ctx->pc = 0x2B7FC4u;
    SET_GPR_U32(ctx, 31, 0x2B7FCCu);
    ctx->pc = 0x2B7FC8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEval_0x2b8d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FCCu; }
    }
    if (ctx->pc != 0x2B7FCCu) { return; }
    ctx->pc = 0x2B7FCCu;
label_2b7fcc:
    // 0x2b7fcc: 0x8e0220ac
    ctx->pc = 0x2b7fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
label_2b7fd0:
    // 0x2b7fd0: 0xac510014
    ctx->pc = 0x2b7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
label_2b7fd4:
    // 0x2b7fd4: 0xc0ad232
label_2b7fd8:
    if (ctx->pc == 0x2B7FD8u) {
        ctx->pc = 0x2B7FD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FDCu;
        goto label_2b7fdc;
    }
    ctx->pc = 0x2B7FD4u;
    SET_GPR_U32(ctx, 31, 0x2B7FDCu);
    ctx->pc = 0x2B7FD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B48C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalForceInt_0x2b48c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FDCu; }
    }
    if (ctx->pc != 0x2B7FDCu) { return; }
    ctx->pc = 0x2B7FDCu;
label_2b7fdc:
    // 0x2b7fdc: 0x14400188
label_2b7fe0:
    if (ctx->pc == 0x2B7FE0u) {
        ctx->pc = 0x2B7FE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B7FE4u;
        goto label_2b7fe4;
    }
    ctx->pc = 0x2B7FDCu;
    {
        const bool branch_taken_0x2b7fdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7FE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2b7fdc) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B7FE4u;
label_2b7fe4:
    // 0x2b7fe4: 0x82a40000
    ctx->pc = 0x2b7fe4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2b7fe8:
    // 0x2b7fe8: 0x3c02003c
    ctx->pc = 0x2b7fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7fec:
    // 0x2b7fec: 0x2442a781
    ctx->pc = 0x2b7fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2b7ff0:
    // 0x2b7ff0: 0x821021
    ctx->pc = 0x2b7ff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b7ff4:
    // 0x2b7ff4: 0x90420000
    ctx->pc = 0x2b7ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7ff8:
    // 0x2b7ff8: 0x30420002
    ctx->pc = 0x2b7ff8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2b7ffc:
    // 0x2b7ffc: 0x2483ffe0
    ctx->pc = 0x2b7ffcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
label_2b8000:
    // 0x2b8000: 0x62200b
    ctx->pc = 0x2b8000u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_2b8004:
    // 0x2b8004: 0x2483ffbf
    ctx->pc = 0x2b8004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967231));
label_2b8008:
    // 0x2b8008: 0x2c62001b
    ctx->pc = 0x2b8008u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 27));
label_2b800c:
    // 0x2b800c: 0x10400167
label_2b8010:
    if (ctx->pc == 0x2B8010u) {
        ctx->pc = 0x2B8010u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x2B8014u;
        goto label_2b8014;
    }
    ctx->pc = 0x2B800Cu;
    {
        const bool branch_taken_0x2b800c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8010u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 30), 16)));
        if (branch_taken_0x2b800c) {
            ctx->pc = 0x2B85ACu;
            goto label_2b85ac;
        }
    }
    ctx->pc = 0x2B8014u;
label_2b8014:
    // 0x2b8014: 0x3c02003b
    ctx->pc = 0x2b8014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2b8018:
    // 0x2b8018: 0x24425360
    ctx->pc = 0x2b8018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21344));
label_2b801c:
    // 0x2b801c: 0x31880
    ctx->pc = 0x2b801cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b8020:
    // 0x2b8020: 0x621821
    ctx->pc = 0x2b8020u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b8024:
    // 0x2b8024: 0x8c620000
    ctx->pc = 0x2b8024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b8028:
    // 0x2b8028: 0x400008
label_2b802c:
    if (ctx->pc == 0x2B802Cu) {
        ctx->pc = 0x2B8030u;
        goto label_2b8030;
    }
    ctx->pc = 0x2B8028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7F30u: goto label_2b7f30;
            case 0x2B7F34u: goto label_2b7f34;
            case 0x2B7F38u: goto label_2b7f38;
            case 0x2B7F3Cu: goto label_2b7f3c;
            case 0x2B7F40u: goto label_2b7f40;
            case 0x2B7F44u: goto label_2b7f44;
            case 0x2B7F48u: goto label_2b7f48;
            case 0x2B7F4Cu: goto label_2b7f4c;
            case 0x2B7F50u: goto label_2b7f50;
            case 0x2B7F54u: goto label_2b7f54;
            case 0x2B7F58u: goto label_2b7f58;
            case 0x2B7F5Cu: goto label_2b7f5c;
            case 0x2B7F60u: goto label_2b7f60;
            case 0x2B7F64u: goto label_2b7f64;
            case 0x2B7F68u: goto label_2b7f68;
            case 0x2B7F6Cu: goto label_2b7f6c;
            case 0x2B7F70u: goto label_2b7f70;
            case 0x2B7F74u: goto label_2b7f74;
            case 0x2B7F78u: goto label_2b7f78;
            case 0x2B7F7Cu: goto label_2b7f7c;
            case 0x2B7F80u: goto label_2b7f80;
            case 0x2B7F84u: goto label_2b7f84;
            case 0x2B7F88u: goto label_2b7f88;
            case 0x2B7F8Cu: goto label_2b7f8c;
            case 0x2B7F90u: goto label_2b7f90;
            case 0x2B7F94u: goto label_2b7f94;
            case 0x2B7F98u: goto label_2b7f98;
            case 0x2B7F9Cu: goto label_2b7f9c;
            case 0x2B7FA0u: goto label_2b7fa0;
            case 0x2B7FA4u: goto label_2b7fa4;
            case 0x2B7FA8u: goto label_2b7fa8;
            case 0x2B7FACu: goto label_2b7fac;
            case 0x2B7FB0u: goto label_2b7fb0;
            case 0x2B7FB4u: goto label_2b7fb4;
            case 0x2B7FB8u: goto label_2b7fb8;
            case 0x2B7FBCu: goto label_2b7fbc;
            case 0x2B7FC0u: goto label_2b7fc0;
            case 0x2B7FC4u: goto label_2b7fc4;
            case 0x2B7FC8u: goto label_2b7fc8;
            case 0x2B7FCCu: goto label_2b7fcc;
            case 0x2B7FD0u: goto label_2b7fd0;
            case 0x2B7FD4u: goto label_2b7fd4;
            case 0x2B7FD8u: goto label_2b7fd8;
            case 0x2B7FDCu: goto label_2b7fdc;
            case 0x2B7FE0u: goto label_2b7fe0;
            case 0x2B7FE4u: goto label_2b7fe4;
            case 0x2B7FE8u: goto label_2b7fe8;
            case 0x2B7FECu: goto label_2b7fec;
            case 0x2B7FF0u: goto label_2b7ff0;
            case 0x2B7FF4u: goto label_2b7ff4;
            case 0x2B7FF8u: goto label_2b7ff8;
            case 0x2B7FFCu: goto label_2b7ffc;
            case 0x2B8000u: goto label_2b8000;
            case 0x2B8004u: goto label_2b8004;
            case 0x2B8008u: goto label_2b8008;
            case 0x2B800Cu: goto label_2b800c;
            case 0x2B8010u: goto label_2b8010;
            case 0x2B8014u: goto label_2b8014;
            case 0x2B8018u: goto label_2b8018;
            case 0x2B801Cu: goto label_2b801c;
            case 0x2B8020u: goto label_2b8020;
            case 0x2B8024u: goto label_2b8024;
            case 0x2B8028u: goto label_2b8028;
            case 0x2B802Cu: goto label_2b802c;
            case 0x2B8030u: goto label_2b8030;
            case 0x2B8034u: goto label_2b8034;
            case 0x2B8038u: goto label_2b8038;
            case 0x2B803Cu: goto label_2b803c;
            case 0x2B8040u: goto label_2b8040;
            case 0x2B8044u: goto label_2b8044;
            case 0x2B8048u: goto label_2b8048;
            case 0x2B804Cu: goto label_2b804c;
            case 0x2B8050u: goto label_2b8050;
            case 0x2B8054u: goto label_2b8054;
            case 0x2B8058u: goto label_2b8058;
            case 0x2B805Cu: goto label_2b805c;
            case 0x2B8060u: goto label_2b8060;
            case 0x2B8064u: goto label_2b8064;
            case 0x2B8068u: goto label_2b8068;
            case 0x2B806Cu: goto label_2b806c;
            case 0x2B8070u: goto label_2b8070;
            case 0x2B8074u: goto label_2b8074;
            case 0x2B8078u: goto label_2b8078;
            case 0x2B807Cu: goto label_2b807c;
            case 0x2B8080u: goto label_2b8080;
            case 0x2B8084u: goto label_2b8084;
            case 0x2B8088u: goto label_2b8088;
            case 0x2B808Cu: goto label_2b808c;
            case 0x2B8090u: goto label_2b8090;
            case 0x2B8094u: goto label_2b8094;
            case 0x2B8098u: goto label_2b8098;
            case 0x2B809Cu: goto label_2b809c;
            case 0x2B80A0u: goto label_2b80a0;
            case 0x2B80A4u: goto label_2b80a4;
            case 0x2B80A8u: goto label_2b80a8;
            case 0x2B80ACu: goto label_2b80ac;
            case 0x2B80B0u: goto label_2b80b0;
            case 0x2B80B4u: goto label_2b80b4;
            case 0x2B80B8u: goto label_2b80b8;
            case 0x2B80BCu: goto label_2b80bc;
            case 0x2B80C0u: goto label_2b80c0;
            case 0x2B80C4u: goto label_2b80c4;
            case 0x2B80C8u: goto label_2b80c8;
            case 0x2B80CCu: goto label_2b80cc;
            case 0x2B80D0u: goto label_2b80d0;
            case 0x2B80D4u: goto label_2b80d4;
            case 0x2B80D8u: goto label_2b80d8;
            case 0x2B80DCu: goto label_2b80dc;
            case 0x2B80E0u: goto label_2b80e0;
            case 0x2B80E4u: goto label_2b80e4;
            case 0x2B80E8u: goto label_2b80e8;
            case 0x2B80ECu: goto label_2b80ec;
            case 0x2B80F0u: goto label_2b80f0;
            case 0x2B80F4u: goto label_2b80f4;
            case 0x2B80F8u: goto label_2b80f8;
            case 0x2B80FCu: goto label_2b80fc;
            case 0x2B8100u: goto label_2b8100;
            case 0x2B8104u: goto label_2b8104;
            case 0x2B8108u: goto label_2b8108;
            case 0x2B810Cu: goto label_2b810c;
            case 0x2B8110u: goto label_2b8110;
            case 0x2B8114u: goto label_2b8114;
            case 0x2B8118u: goto label_2b8118;
            case 0x2B811Cu: goto label_2b811c;
            case 0x2B8120u: goto label_2b8120;
            case 0x2B8124u: goto label_2b8124;
            case 0x2B8128u: goto label_2b8128;
            case 0x2B812Cu: goto label_2b812c;
            case 0x2B8130u: goto label_2b8130;
            case 0x2B8134u: goto label_2b8134;
            case 0x2B8138u: goto label_2b8138;
            case 0x2B813Cu: goto label_2b813c;
            case 0x2B8140u: goto label_2b8140;
            case 0x2B8144u: goto label_2b8144;
            case 0x2B8148u: goto label_2b8148;
            case 0x2B814Cu: goto label_2b814c;
            case 0x2B8150u: goto label_2b8150;
            case 0x2B8154u: goto label_2b8154;
            case 0x2B8158u: goto label_2b8158;
            case 0x2B815Cu: goto label_2b815c;
            case 0x2B8160u: goto label_2b8160;
            case 0x2B8164u: goto label_2b8164;
            case 0x2B8168u: goto label_2b8168;
            case 0x2B816Cu: goto label_2b816c;
            case 0x2B8170u: goto label_2b8170;
            case 0x2B8174u: goto label_2b8174;
            case 0x2B8178u: goto label_2b8178;
            case 0x2B817Cu: goto label_2b817c;
            case 0x2B8180u: goto label_2b8180;
            case 0x2B8184u: goto label_2b8184;
            case 0x2B8188u: goto label_2b8188;
            case 0x2B818Cu: goto label_2b818c;
            case 0x2B8190u: goto label_2b8190;
            case 0x2B8194u: goto label_2b8194;
            case 0x2B8198u: goto label_2b8198;
            case 0x2B819Cu: goto label_2b819c;
            case 0x2B81A0u: goto label_2b81a0;
            case 0x2B81A4u: goto label_2b81a4;
            case 0x2B81A8u: goto label_2b81a8;
            case 0x2B81ACu: goto label_2b81ac;
            case 0x2B81B0u: goto label_2b81b0;
            case 0x2B81B4u: goto label_2b81b4;
            case 0x2B81B8u: goto label_2b81b8;
            case 0x2B81BCu: goto label_2b81bc;
            case 0x2B81C0u: goto label_2b81c0;
            case 0x2B81C4u: goto label_2b81c4;
            case 0x2B81C8u: goto label_2b81c8;
            case 0x2B81CCu: goto label_2b81cc;
            case 0x2B81D0u: goto label_2b81d0;
            case 0x2B81D4u: goto label_2b81d4;
            case 0x2B81D8u: goto label_2b81d8;
            case 0x2B81DCu: goto label_2b81dc;
            case 0x2B81E0u: goto label_2b81e0;
            case 0x2B81E4u: goto label_2b81e4;
            case 0x2B81E8u: goto label_2b81e8;
            case 0x2B81ECu: goto label_2b81ec;
            case 0x2B81F0u: goto label_2b81f0;
            case 0x2B81F4u: goto label_2b81f4;
            case 0x2B81F8u: goto label_2b81f8;
            case 0x2B81FCu: goto label_2b81fc;
            case 0x2B8200u: goto label_2b8200;
            case 0x2B8204u: goto label_2b8204;
            case 0x2B8208u: goto label_2b8208;
            case 0x2B820Cu: goto label_2b820c;
            case 0x2B8210u: goto label_2b8210;
            case 0x2B8214u: goto label_2b8214;
            case 0x2B8218u: goto label_2b8218;
            case 0x2B821Cu: goto label_2b821c;
            case 0x2B8220u: goto label_2b8220;
            case 0x2B8224u: goto label_2b8224;
            case 0x2B8228u: goto label_2b8228;
            case 0x2B822Cu: goto label_2b822c;
            case 0x2B8230u: goto label_2b8230;
            case 0x2B8234u: goto label_2b8234;
            case 0x2B8238u: goto label_2b8238;
            case 0x2B823Cu: goto label_2b823c;
            case 0x2B8240u: goto label_2b8240;
            case 0x2B8244u: goto label_2b8244;
            case 0x2B8248u: goto label_2b8248;
            case 0x2B824Cu: goto label_2b824c;
            case 0x2B8250u: goto label_2b8250;
            case 0x2B8254u: goto label_2b8254;
            case 0x2B8258u: goto label_2b8258;
            case 0x2B825Cu: goto label_2b825c;
            case 0x2B8260u: goto label_2b8260;
            case 0x2B8264u: goto label_2b8264;
            case 0x2B8268u: goto label_2b8268;
            case 0x2B826Cu: goto label_2b826c;
            case 0x2B8270u: goto label_2b8270;
            case 0x2B8274u: goto label_2b8274;
            case 0x2B8278u: goto label_2b8278;
            case 0x2B827Cu: goto label_2b827c;
            case 0x2B8280u: goto label_2b8280;
            case 0x2B8284u: goto label_2b8284;
            case 0x2B8288u: goto label_2b8288;
            case 0x2B828Cu: goto label_2b828c;
            case 0x2B8290u: goto label_2b8290;
            case 0x2B8294u: goto label_2b8294;
            case 0x2B8298u: goto label_2b8298;
            case 0x2B829Cu: goto label_2b829c;
            case 0x2B82A0u: goto label_2b82a0;
            case 0x2B82A4u: goto label_2b82a4;
            case 0x2B82A8u: goto label_2b82a8;
            case 0x2B82ACu: goto label_2b82ac;
            case 0x2B82B0u: goto label_2b82b0;
            case 0x2B82B4u: goto label_2b82b4;
            case 0x2B82B8u: goto label_2b82b8;
            case 0x2B82BCu: goto label_2b82bc;
            case 0x2B82C0u: goto label_2b82c0;
            case 0x2B82C4u: goto label_2b82c4;
            case 0x2B82C8u: goto label_2b82c8;
            case 0x2B82CCu: goto label_2b82cc;
            case 0x2B82D0u: goto label_2b82d0;
            case 0x2B82D4u: goto label_2b82d4;
            case 0x2B82D8u: goto label_2b82d8;
            case 0x2B82DCu: goto label_2b82dc;
            case 0x2B82E0u: goto label_2b82e0;
            case 0x2B82E4u: goto label_2b82e4;
            case 0x2B82E8u: goto label_2b82e8;
            case 0x2B82ECu: goto label_2b82ec;
            case 0x2B82F0u: goto label_2b82f0;
            case 0x2B82F4u: goto label_2b82f4;
            case 0x2B82F8u: goto label_2b82f8;
            case 0x2B82FCu: goto label_2b82fc;
            case 0x2B8300u: goto label_2b8300;
            case 0x2B8304u: goto label_2b8304;
            case 0x2B8308u: goto label_2b8308;
            case 0x2B830Cu: goto label_2b830c;
            case 0x2B8310u: goto label_2b8310;
            case 0x2B8314u: goto label_2b8314;
            case 0x2B8318u: goto label_2b8318;
            case 0x2B831Cu: goto label_2b831c;
            case 0x2B8320u: goto label_2b8320;
            case 0x2B8324u: goto label_2b8324;
            case 0x2B8328u: goto label_2b8328;
            case 0x2B832Cu: goto label_2b832c;
            case 0x2B8330u: goto label_2b8330;
            case 0x2B8334u: goto label_2b8334;
            case 0x2B8338u: goto label_2b8338;
            case 0x2B833Cu: goto label_2b833c;
            case 0x2B8340u: goto label_2b8340;
            case 0x2B8344u: goto label_2b8344;
            case 0x2B8348u: goto label_2b8348;
            case 0x2B834Cu: goto label_2b834c;
            case 0x2B8350u: goto label_2b8350;
            case 0x2B8354u: goto label_2b8354;
            case 0x2B8358u: goto label_2b8358;
            case 0x2B835Cu: goto label_2b835c;
            case 0x2B8360u: goto label_2b8360;
            case 0x2B8364u: goto label_2b8364;
            case 0x2B8368u: goto label_2b8368;
            case 0x2B836Cu: goto label_2b836c;
            case 0x2B8370u: goto label_2b8370;
            case 0x2B8374u: goto label_2b8374;
            case 0x2B8378u: goto label_2b8378;
            case 0x2B837Cu: goto label_2b837c;
            case 0x2B8380u: goto label_2b8380;
            case 0x2B8384u: goto label_2b8384;
            case 0x2B8388u: goto label_2b8388;
            case 0x2B838Cu: goto label_2b838c;
            case 0x2B8390u: goto label_2b8390;
            case 0x2B8394u: goto label_2b8394;
            case 0x2B8398u: goto label_2b8398;
            case 0x2B839Cu: goto label_2b839c;
            case 0x2B83A0u: goto label_2b83a0;
            case 0x2B83A4u: goto label_2b83a4;
            case 0x2B83A8u: goto label_2b83a8;
            case 0x2B83ACu: goto label_2b83ac;
            case 0x2B83B0u: goto label_2b83b0;
            case 0x2B83B4u: goto label_2b83b4;
            case 0x2B83B8u: goto label_2b83b8;
            case 0x2B83BCu: goto label_2b83bc;
            case 0x2B83C0u: goto label_2b83c0;
            case 0x2B83C4u: goto label_2b83c4;
            case 0x2B83C8u: goto label_2b83c8;
            case 0x2B83CCu: goto label_2b83cc;
            case 0x2B83D0u: goto label_2b83d0;
            case 0x2B83D4u: goto label_2b83d4;
            case 0x2B83D8u: goto label_2b83d8;
            case 0x2B83DCu: goto label_2b83dc;
            case 0x2B83E0u: goto label_2b83e0;
            case 0x2B83E4u: goto label_2b83e4;
            case 0x2B83E8u: goto label_2b83e8;
            case 0x2B83ECu: goto label_2b83ec;
            case 0x2B83F0u: goto label_2b83f0;
            case 0x2B83F4u: goto label_2b83f4;
            case 0x2B83F8u: goto label_2b83f8;
            case 0x2B83FCu: goto label_2b83fc;
            case 0x2B8400u: goto label_2b8400;
            case 0x2B8404u: goto label_2b8404;
            case 0x2B8408u: goto label_2b8408;
            case 0x2B840Cu: goto label_2b840c;
            case 0x2B8410u: goto label_2b8410;
            case 0x2B8414u: goto label_2b8414;
            case 0x2B8418u: goto label_2b8418;
            case 0x2B841Cu: goto label_2b841c;
            case 0x2B8420u: goto label_2b8420;
            case 0x2B8424u: goto label_2b8424;
            case 0x2B8428u: goto label_2b8428;
            case 0x2B842Cu: goto label_2b842c;
            case 0x2B8430u: goto label_2b8430;
            case 0x2B8434u: goto label_2b8434;
            case 0x2B8438u: goto label_2b8438;
            case 0x2B843Cu: goto label_2b843c;
            case 0x2B8440u: goto label_2b8440;
            case 0x2B8444u: goto label_2b8444;
            case 0x2B8448u: goto label_2b8448;
            case 0x2B844Cu: goto label_2b844c;
            case 0x2B8450u: goto label_2b8450;
            case 0x2B8454u: goto label_2b8454;
            case 0x2B8458u: goto label_2b8458;
            case 0x2B845Cu: goto label_2b845c;
            case 0x2B8460u: goto label_2b8460;
            case 0x2B8464u: goto label_2b8464;
            case 0x2B8468u: goto label_2b8468;
            case 0x2B846Cu: goto label_2b846c;
            case 0x2B8470u: goto label_2b8470;
            case 0x2B8474u: goto label_2b8474;
            case 0x2B8478u: goto label_2b8478;
            case 0x2B847Cu: goto label_2b847c;
            case 0x2B8480u: goto label_2b8480;
            case 0x2B8484u: goto label_2b8484;
            case 0x2B8488u: goto label_2b8488;
            case 0x2B848Cu: goto label_2b848c;
            case 0x2B8490u: goto label_2b8490;
            case 0x2B8494u: goto label_2b8494;
            case 0x2B8498u: goto label_2b8498;
            case 0x2B849Cu: goto label_2b849c;
            case 0x2B84A0u: goto label_2b84a0;
            case 0x2B84A4u: goto label_2b84a4;
            case 0x2B84A8u: goto label_2b84a8;
            case 0x2B84ACu: goto label_2b84ac;
            case 0x2B84B0u: goto label_2b84b0;
            case 0x2B84B4u: goto label_2b84b4;
            case 0x2B84B8u: goto label_2b84b8;
            case 0x2B84BCu: goto label_2b84bc;
            case 0x2B84C0u: goto label_2b84c0;
            case 0x2B84C4u: goto label_2b84c4;
            case 0x2B84C8u: goto label_2b84c8;
            case 0x2B84CCu: goto label_2b84cc;
            case 0x2B84D0u: goto label_2b84d0;
            case 0x2B84D4u: goto label_2b84d4;
            case 0x2B84D8u: goto label_2b84d8;
            case 0x2B84DCu: goto label_2b84dc;
            case 0x2B84E0u: goto label_2b84e0;
            case 0x2B84E4u: goto label_2b84e4;
            case 0x2B84E8u: goto label_2b84e8;
            case 0x2B84ECu: goto label_2b84ec;
            case 0x2B84F0u: goto label_2b84f0;
            case 0x2B84F4u: goto label_2b84f4;
            case 0x2B84F8u: goto label_2b84f8;
            case 0x2B84FCu: goto label_2b84fc;
            case 0x2B8500u: goto label_2b8500;
            case 0x2B8504u: goto label_2b8504;
            case 0x2B8508u: goto label_2b8508;
            case 0x2B850Cu: goto label_2b850c;
            case 0x2B8510u: goto label_2b8510;
            case 0x2B8514u: goto label_2b8514;
            case 0x2B8518u: goto label_2b8518;
            case 0x2B851Cu: goto label_2b851c;
            case 0x2B8520u: goto label_2b8520;
            case 0x2B8524u: goto label_2b8524;
            case 0x2B8528u: goto label_2b8528;
            case 0x2B852Cu: goto label_2b852c;
            case 0x2B8530u: goto label_2b8530;
            case 0x2B8534u: goto label_2b8534;
            case 0x2B8538u: goto label_2b8538;
            case 0x2B853Cu: goto label_2b853c;
            case 0x2B8540u: goto label_2b8540;
            case 0x2B8544u: goto label_2b8544;
            case 0x2B8548u: goto label_2b8548;
            case 0x2B854Cu: goto label_2b854c;
            case 0x2B8550u: goto label_2b8550;
            case 0x2B8554u: goto label_2b8554;
            case 0x2B8558u: goto label_2b8558;
            case 0x2B855Cu: goto label_2b855c;
            case 0x2B8560u: goto label_2b8560;
            case 0x2B8564u: goto label_2b8564;
            case 0x2B8568u: goto label_2b8568;
            case 0x2B856Cu: goto label_2b856c;
            case 0x2B8570u: goto label_2b8570;
            case 0x2B8574u: goto label_2b8574;
            case 0x2B8578u: goto label_2b8578;
            case 0x2B857Cu: goto label_2b857c;
            case 0x2B8580u: goto label_2b8580;
            case 0x2B8584u: goto label_2b8584;
            case 0x2B8588u: goto label_2b8588;
            case 0x2B858Cu: goto label_2b858c;
            case 0x2B8590u: goto label_2b8590;
            case 0x2B8594u: goto label_2b8594;
            case 0x2B8598u: goto label_2b8598;
            case 0x2B859Cu: goto label_2b859c;
            case 0x2B85A0u: goto label_2b85a0;
            case 0x2B85A4u: goto label_2b85a4;
            case 0x2B85A8u: goto label_2b85a8;
            case 0x2B85ACu: goto label_2b85ac;
            case 0x2B85B0u: goto label_2b85b0;
            case 0x2B85B4u: goto label_2b85b4;
            case 0x2B85B8u: goto label_2b85b8;
            case 0x2B85BCu: goto label_2b85bc;
            case 0x2B85C0u: goto label_2b85c0;
            case 0x2B85C4u: goto label_2b85c4;
            case 0x2B85C8u: goto label_2b85c8;
            case 0x2B85CCu: goto label_2b85cc;
            case 0x2B85D0u: goto label_2b85d0;
            case 0x2B85D4u: goto label_2b85d4;
            case 0x2B85D8u: goto label_2b85d8;
            case 0x2B85DCu: goto label_2b85dc;
            case 0x2B85E0u: goto label_2b85e0;
            case 0x2B85E4u: goto label_2b85e4;
            case 0x2B85E8u: goto label_2b85e8;
            case 0x2B85ECu: goto label_2b85ec;
            case 0x2B85F0u: goto label_2b85f0;
            case 0x2B85F4u: goto label_2b85f4;
            case 0x2B85F8u: goto label_2b85f8;
            case 0x2B85FCu: goto label_2b85fc;
            case 0x2B8600u: goto label_2b8600;
            case 0x2B8604u: goto label_2b8604;
            case 0x2B8608u: goto label_2b8608;
            case 0x2B860Cu: goto label_2b860c;
            case 0x2B8610u: goto label_2b8610;
            case 0x2B8614u: goto label_2b8614;
            case 0x2B8618u: goto label_2b8618;
            case 0x2B861Cu: goto label_2b861c;
            case 0x2B8620u: goto label_2b8620;
            case 0x2B8624u: goto label_2b8624;
            case 0x2B8628u: goto label_2b8628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B8030u;
label_2b8030:
    // 0x2b8030: 0x26a20002
    ctx->pc = 0x2b8030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 2));
label_2b8034:
    // 0x2b8034: 0x1457015e
label_2b8038:
    if (ctx->pc == 0x2B8038u) {
        ctx->pc = 0x2B8038u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B803Cu;
        goto label_2b803c;
    }
    ctx->pc = 0x2B8034u;
    {
        const bool branch_taken_0x2b8034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        ctx->pc = 0x2B8038u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8034) {
            ctx->pc = 0x2B85B0u;
            goto label_2b85b0;
        }
    }
    ctx->pc = 0x2B803Cu;
label_2b803c:
    // 0x2b803c: 0x82a60001
    ctx->pc = 0x2b803cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_2b8040:
    // 0x2b8040: 0x24020051
    ctx->pc = 0x2b8040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 81));
label_2b8044:
    // 0x2b8044: 0x10c20013
label_2b8048:
    if (ctx->pc == 0x2B8048u) {
        ctx->pc = 0x2B8048u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 82));
        ctx->pc = 0x2B804Cu;
        goto label_2b804c;
    }
    ctx->pc = 0x2B8044u;
    {
        const bool branch_taken_0x2b8044 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8048u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 82));
        if (branch_taken_0x2b8044) {
            ctx->pc = 0x2B8094u;
            goto label_2b8094;
        }
    }
    ctx->pc = 0x2B804Cu;
label_2b804c:
    // 0x2b804c: 0x10400005
label_2b8050:
    if (ctx->pc == 0x2B8050u) {
        ctx->pc = 0x2B8050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x2B8054u;
        goto label_2b8054;
    }
    ctx->pc = 0x2B804Cu;
    {
        const bool branch_taken_0x2b804c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 67));
        if (branch_taken_0x2b804c) {
            ctx->pc = 0x2B8064u;
            goto label_2b8064;
        }
    }
    ctx->pc = 0x2B8054u;
label_2b8054:
    // 0x2b8054: 0x50c2000a
label_2b8058:
    if (ctx->pc == 0x2B8058u) {
        ctx->pc = 0x2B8058u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x2B805Cu;
        goto label_2b805c;
    }
    ctx->pc = 0x2B8054u;
    {
        const bool branch_taken_0x2b8054 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b8054) {
            ctx->pc = 0x2B8058u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
            ctx->pc = 0x2B8080u;
            goto label_2b8080;
        }
    }
    ctx->pc = 0x2B805Cu;
label_2b805c:
    // 0x2b805c: 0x10000155
label_2b8060:
    if (ctx->pc == 0x2B8060u) {
        ctx->pc = 0x2B8060u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B8064u;
        goto label_2b8064;
    }
    ctx->pc = 0x2B805Cu;
    {
        const bool branch_taken_0x2b805c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8060u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b805c) {
            ctx->pc = 0x2B85B4u;
            goto label_2b85b4;
        }
    }
    ctx->pc = 0x2B8064u;
label_2b8064:
    // 0x2b8064: 0x24020057
    ctx->pc = 0x2b8064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 87));
label_2b8068:
    // 0x2b8068: 0x10c2000e
label_2b806c:
    if (ctx->pc == 0x2B806Cu) {
        ctx->pc = 0x2B806Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 91));
        ctx->pc = 0x2B8070u;
        goto label_2b8070;
    }
    ctx->pc = 0x2B8068u;
    {
        const bool branch_taken_0x2b8068 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B806Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 91));
        if (branch_taken_0x2b8068) {
            ctx->pc = 0x2B80A4u;
            goto label_2b80a4;
        }
    }
    ctx->pc = 0x2B8070u;
label_2b8070:
    // 0x2b8070: 0x10c20163
label_2b8074:
    if (ctx->pc == 0x2B8074u) {
        ctx->pc = 0x2B8074u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B8078u;
        goto label_2b8078;
    }
    ctx->pc = 0x2B8070u;
    {
        const bool branch_taken_0x2b8070 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8074u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2b8070) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B8078u;
label_2b8078:
    // 0x2b8078: 0x1000014d
label_2b807c:
    if (ctx->pc == 0x2B807Cu) {
        ctx->pc = 0x2B807Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B8080u;
        goto label_2b8080;
    }
    ctx->pc = 0x2B8078u;
    {
        const bool branch_taken_0x2b8078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B807Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8078) {
            ctx->pc = 0x2B85B0u;
            goto label_2b85b0;
        }
    }
    ctx->pc = 0x2B8080u;
label_2b8080:
    // 0x2b8080: 0x3c031100
    ctx->pc = 0x2b8080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4352 << 16));
label_2b8084:
    // 0x2b8084: 0x3463c000
    ctx->pc = 0x2b8084u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49152));
label_2b8088:
    // 0x2b8088: 0x431021
    ctx->pc = 0x2b8088u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b808c:
    // 0x2b808c: 0x1000015b
label_2b8090:
    if (ctx->pc == 0x2B8090u) {
        ctx->pc = 0x2B8090u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B8094u;
        goto label_2b8094;
    }
    ctx->pc = 0x2B808Cu;
    {
        const bool branch_taken_0x2b808c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8090u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b808c) {
            ctx->pc = 0x2B85FCu;
            goto label_2b85fc;
        }
    }
    ctx->pc = 0x2B8094u;
label_2b8094:
    // 0x2b8094: 0x8fc20010
    ctx->pc = 0x2b8094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_2b8098:
    // 0x2b8098: 0x21102
    ctx->pc = 0x2b8098u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
label_2b809c:
    // 0x2b809c: 0x10000157
label_2b80a0:
    if (ctx->pc == 0x2B80A0u) {
        ctx->pc = 0x2B80A0u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B80A4u;
        goto label_2b80a4;
    }
    ctx->pc = 0x2B809Cu;
    {
        const bool branch_taken_0x2b809c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B80A0u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b809c) {
            ctx->pc = 0x2B85FCu;
            goto label_2b85fc;
        }
    }
    ctx->pc = 0x2B80A4u;
label_2b80a4:
    // 0x2b80a4: 0x8fc20010
    ctx->pc = 0x2b80a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_2b80a8:
    // 0x2b80a8: 0x21082
    ctx->pc = 0x2b80a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
label_2b80ac:
    // 0x2b80ac: 0x10000153
label_2b80b0:
    if (ctx->pc == 0x2B80B0u) {
        ctx->pc = 0x2B80B0u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B80B4u;
        goto label_2b80b4;
    }
    ctx->pc = 0x2B80ACu;
    {
        const bool branch_taken_0x2b80ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B80B0u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b80ac) {
            ctx->pc = 0x2B85FCu;
            goto label_2b85fc;
        }
    }
    ctx->pc = 0x2B80B4u;
label_2b80b4:
    // 0x2b80b4: 0x2414ffff
    ctx->pc = 0x2b80b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b80b8:
    // 0x2b80b8: 0x26f7ffff
    ctx->pc = 0x2b80b8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
label_2b80bc:
    // 0x2b80bc: 0x12f5003d
label_2b80c0:
    if (ctx->pc == 0x2B80C0u) {
        ctx->pc = 0x2B80C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2B80C4u;
        goto label_2b80c4;
    }
    ctx->pc = 0x2B80BCu;
    {
        const bool branch_taken_0x2b80bc = (GPR_U32(ctx, 23) == GPR_U32(ctx, 21));
        ctx->pc = 0x2B80C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2b80bc) {
            ctx->pc = 0x2B81B4u;
            goto label_2b81b4;
        }
    }
    ctx->pc = 0x2B80C4u;
label_2b80c4:
    // 0x2b80c4: 0x82e40000
    ctx->pc = 0x2b80c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_2b80c8:
    // 0x2b80c8: 0x3c02003c
    ctx->pc = 0x2b80c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b80cc:
    // 0x2b80cc: 0x2442a781
    ctx->pc = 0x2b80ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2b80d0:
    // 0x2b80d0: 0x821021
    ctx->pc = 0x2b80d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b80d4:
    // 0x2b80d4: 0x90420000
    ctx->pc = 0x2b80d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b80d8:
    // 0x2b80d8: 0x30420002
    ctx->pc = 0x2b80d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2b80dc:
    // 0x2b80dc: 0x2483ffe0
    ctx->pc = 0x2b80dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
label_2b80e0:
    // 0x2b80e0: 0x62200b
    ctx->pc = 0x2b80e0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_2b80e4:
    // 0x2b80e4: 0x2483ffd0
    ctx->pc = 0x2b80e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967248));
label_2b80e8:
    // 0x2b80e8: 0x2c62002b
    ctx->pc = 0x2b80e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 43));
label_2b80ec:
    // 0x2b80ec: 0x1040002c
label_2b80f0:
    if (ctx->pc == 0x2B80F0u) {
        ctx->pc = 0x2B80F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B80F4u;
        goto label_2b80f4;
    }
    ctx->pc = 0x2B80ECu;
    {
        const bool branch_taken_0x2b80ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B80F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b80ec) {
            ctx->pc = 0x2B81A0u;
            goto label_2b81a0;
        }
    }
    ctx->pc = 0x2B80F4u;
label_2b80f4:
    // 0x2b80f4: 0x244253d0
    ctx->pc = 0x2b80f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21456));
label_2b80f8:
    // 0x2b80f8: 0x31880
    ctx->pc = 0x2b80f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b80fc:
    // 0x2b80fc: 0x621821
    ctx->pc = 0x2b80fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b8100:
    // 0x2b8100: 0x8c620000
    ctx->pc = 0x2b8100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b8104:
    // 0x2b8104: 0x400008
label_2b8108:
    if (ctx->pc == 0x2B8108u) {
        ctx->pc = 0x2B810Cu;
        goto label_2b810c;
    }
    ctx->pc = 0x2B8104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7F30u: goto label_2b7f30;
            case 0x2B7F34u: goto label_2b7f34;
            case 0x2B7F38u: goto label_2b7f38;
            case 0x2B7F3Cu: goto label_2b7f3c;
            case 0x2B7F40u: goto label_2b7f40;
            case 0x2B7F44u: goto label_2b7f44;
            case 0x2B7F48u: goto label_2b7f48;
            case 0x2B7F4Cu: goto label_2b7f4c;
            case 0x2B7F50u: goto label_2b7f50;
            case 0x2B7F54u: goto label_2b7f54;
            case 0x2B7F58u: goto label_2b7f58;
            case 0x2B7F5Cu: goto label_2b7f5c;
            case 0x2B7F60u: goto label_2b7f60;
            case 0x2B7F64u: goto label_2b7f64;
            case 0x2B7F68u: goto label_2b7f68;
            case 0x2B7F6Cu: goto label_2b7f6c;
            case 0x2B7F70u: goto label_2b7f70;
            case 0x2B7F74u: goto label_2b7f74;
            case 0x2B7F78u: goto label_2b7f78;
            case 0x2B7F7Cu: goto label_2b7f7c;
            case 0x2B7F80u: goto label_2b7f80;
            case 0x2B7F84u: goto label_2b7f84;
            case 0x2B7F88u: goto label_2b7f88;
            case 0x2B7F8Cu: goto label_2b7f8c;
            case 0x2B7F90u: goto label_2b7f90;
            case 0x2B7F94u: goto label_2b7f94;
            case 0x2B7F98u: goto label_2b7f98;
            case 0x2B7F9Cu: goto label_2b7f9c;
            case 0x2B7FA0u: goto label_2b7fa0;
            case 0x2B7FA4u: goto label_2b7fa4;
            case 0x2B7FA8u: goto label_2b7fa8;
            case 0x2B7FACu: goto label_2b7fac;
            case 0x2B7FB0u: goto label_2b7fb0;
            case 0x2B7FB4u: goto label_2b7fb4;
            case 0x2B7FB8u: goto label_2b7fb8;
            case 0x2B7FBCu: goto label_2b7fbc;
            case 0x2B7FC0u: goto label_2b7fc0;
            case 0x2B7FC4u: goto label_2b7fc4;
            case 0x2B7FC8u: goto label_2b7fc8;
            case 0x2B7FCCu: goto label_2b7fcc;
            case 0x2B7FD0u: goto label_2b7fd0;
            case 0x2B7FD4u: goto label_2b7fd4;
            case 0x2B7FD8u: goto label_2b7fd8;
            case 0x2B7FDCu: goto label_2b7fdc;
            case 0x2B7FE0u: goto label_2b7fe0;
            case 0x2B7FE4u: goto label_2b7fe4;
            case 0x2B7FE8u: goto label_2b7fe8;
            case 0x2B7FECu: goto label_2b7fec;
            case 0x2B7FF0u: goto label_2b7ff0;
            case 0x2B7FF4u: goto label_2b7ff4;
            case 0x2B7FF8u: goto label_2b7ff8;
            case 0x2B7FFCu: goto label_2b7ffc;
            case 0x2B8000u: goto label_2b8000;
            case 0x2B8004u: goto label_2b8004;
            case 0x2B8008u: goto label_2b8008;
            case 0x2B800Cu: goto label_2b800c;
            case 0x2B8010u: goto label_2b8010;
            case 0x2B8014u: goto label_2b8014;
            case 0x2B8018u: goto label_2b8018;
            case 0x2B801Cu: goto label_2b801c;
            case 0x2B8020u: goto label_2b8020;
            case 0x2B8024u: goto label_2b8024;
            case 0x2B8028u: goto label_2b8028;
            case 0x2B802Cu: goto label_2b802c;
            case 0x2B8030u: goto label_2b8030;
            case 0x2B8034u: goto label_2b8034;
            case 0x2B8038u: goto label_2b8038;
            case 0x2B803Cu: goto label_2b803c;
            case 0x2B8040u: goto label_2b8040;
            case 0x2B8044u: goto label_2b8044;
            case 0x2B8048u: goto label_2b8048;
            case 0x2B804Cu: goto label_2b804c;
            case 0x2B8050u: goto label_2b8050;
            case 0x2B8054u: goto label_2b8054;
            case 0x2B8058u: goto label_2b8058;
            case 0x2B805Cu: goto label_2b805c;
            case 0x2B8060u: goto label_2b8060;
            case 0x2B8064u: goto label_2b8064;
            case 0x2B8068u: goto label_2b8068;
            case 0x2B806Cu: goto label_2b806c;
            case 0x2B8070u: goto label_2b8070;
            case 0x2B8074u: goto label_2b8074;
            case 0x2B8078u: goto label_2b8078;
            case 0x2B807Cu: goto label_2b807c;
            case 0x2B8080u: goto label_2b8080;
            case 0x2B8084u: goto label_2b8084;
            case 0x2B8088u: goto label_2b8088;
            case 0x2B808Cu: goto label_2b808c;
            case 0x2B8090u: goto label_2b8090;
            case 0x2B8094u: goto label_2b8094;
            case 0x2B8098u: goto label_2b8098;
            case 0x2B809Cu: goto label_2b809c;
            case 0x2B80A0u: goto label_2b80a0;
            case 0x2B80A4u: goto label_2b80a4;
            case 0x2B80A8u: goto label_2b80a8;
            case 0x2B80ACu: goto label_2b80ac;
            case 0x2B80B0u: goto label_2b80b0;
            case 0x2B80B4u: goto label_2b80b4;
            case 0x2B80B8u: goto label_2b80b8;
            case 0x2B80BCu: goto label_2b80bc;
            case 0x2B80C0u: goto label_2b80c0;
            case 0x2B80C4u: goto label_2b80c4;
            case 0x2B80C8u: goto label_2b80c8;
            case 0x2B80CCu: goto label_2b80cc;
            case 0x2B80D0u: goto label_2b80d0;
            case 0x2B80D4u: goto label_2b80d4;
            case 0x2B80D8u: goto label_2b80d8;
            case 0x2B80DCu: goto label_2b80dc;
            case 0x2B80E0u: goto label_2b80e0;
            case 0x2B80E4u: goto label_2b80e4;
            case 0x2B80E8u: goto label_2b80e8;
            case 0x2B80ECu: goto label_2b80ec;
            case 0x2B80F0u: goto label_2b80f0;
            case 0x2B80F4u: goto label_2b80f4;
            case 0x2B80F8u: goto label_2b80f8;
            case 0x2B80FCu: goto label_2b80fc;
            case 0x2B8100u: goto label_2b8100;
            case 0x2B8104u: goto label_2b8104;
            case 0x2B8108u: goto label_2b8108;
            case 0x2B810Cu: goto label_2b810c;
            case 0x2B8110u: goto label_2b8110;
            case 0x2B8114u: goto label_2b8114;
            case 0x2B8118u: goto label_2b8118;
            case 0x2B811Cu: goto label_2b811c;
            case 0x2B8120u: goto label_2b8120;
            case 0x2B8124u: goto label_2b8124;
            case 0x2B8128u: goto label_2b8128;
            case 0x2B812Cu: goto label_2b812c;
            case 0x2B8130u: goto label_2b8130;
            case 0x2B8134u: goto label_2b8134;
            case 0x2B8138u: goto label_2b8138;
            case 0x2B813Cu: goto label_2b813c;
            case 0x2B8140u: goto label_2b8140;
            case 0x2B8144u: goto label_2b8144;
            case 0x2B8148u: goto label_2b8148;
            case 0x2B814Cu: goto label_2b814c;
            case 0x2B8150u: goto label_2b8150;
            case 0x2B8154u: goto label_2b8154;
            case 0x2B8158u: goto label_2b8158;
            case 0x2B815Cu: goto label_2b815c;
            case 0x2B8160u: goto label_2b8160;
            case 0x2B8164u: goto label_2b8164;
            case 0x2B8168u: goto label_2b8168;
            case 0x2B816Cu: goto label_2b816c;
            case 0x2B8170u: goto label_2b8170;
            case 0x2B8174u: goto label_2b8174;
            case 0x2B8178u: goto label_2b8178;
            case 0x2B817Cu: goto label_2b817c;
            case 0x2B8180u: goto label_2b8180;
            case 0x2B8184u: goto label_2b8184;
            case 0x2B8188u: goto label_2b8188;
            case 0x2B818Cu: goto label_2b818c;
            case 0x2B8190u: goto label_2b8190;
            case 0x2B8194u: goto label_2b8194;
            case 0x2B8198u: goto label_2b8198;
            case 0x2B819Cu: goto label_2b819c;
            case 0x2B81A0u: goto label_2b81a0;
            case 0x2B81A4u: goto label_2b81a4;
            case 0x2B81A8u: goto label_2b81a8;
            case 0x2B81ACu: goto label_2b81ac;
            case 0x2B81B0u: goto label_2b81b0;
            case 0x2B81B4u: goto label_2b81b4;
            case 0x2B81B8u: goto label_2b81b8;
            case 0x2B81BCu: goto label_2b81bc;
            case 0x2B81C0u: goto label_2b81c0;
            case 0x2B81C4u: goto label_2b81c4;
            case 0x2B81C8u: goto label_2b81c8;
            case 0x2B81CCu: goto label_2b81cc;
            case 0x2B81D0u: goto label_2b81d0;
            case 0x2B81D4u: goto label_2b81d4;
            case 0x2B81D8u: goto label_2b81d8;
            case 0x2B81DCu: goto label_2b81dc;
            case 0x2B81E0u: goto label_2b81e0;
            case 0x2B81E4u: goto label_2b81e4;
            case 0x2B81E8u: goto label_2b81e8;
            case 0x2B81ECu: goto label_2b81ec;
            case 0x2B81F0u: goto label_2b81f0;
            case 0x2B81F4u: goto label_2b81f4;
            case 0x2B81F8u: goto label_2b81f8;
            case 0x2B81FCu: goto label_2b81fc;
            case 0x2B8200u: goto label_2b8200;
            case 0x2B8204u: goto label_2b8204;
            case 0x2B8208u: goto label_2b8208;
            case 0x2B820Cu: goto label_2b820c;
            case 0x2B8210u: goto label_2b8210;
            case 0x2B8214u: goto label_2b8214;
            case 0x2B8218u: goto label_2b8218;
            case 0x2B821Cu: goto label_2b821c;
            case 0x2B8220u: goto label_2b8220;
            case 0x2B8224u: goto label_2b8224;
            case 0x2B8228u: goto label_2b8228;
            case 0x2B822Cu: goto label_2b822c;
            case 0x2B8230u: goto label_2b8230;
            case 0x2B8234u: goto label_2b8234;
            case 0x2B8238u: goto label_2b8238;
            case 0x2B823Cu: goto label_2b823c;
            case 0x2B8240u: goto label_2b8240;
            case 0x2B8244u: goto label_2b8244;
            case 0x2B8248u: goto label_2b8248;
            case 0x2B824Cu: goto label_2b824c;
            case 0x2B8250u: goto label_2b8250;
            case 0x2B8254u: goto label_2b8254;
            case 0x2B8258u: goto label_2b8258;
            case 0x2B825Cu: goto label_2b825c;
            case 0x2B8260u: goto label_2b8260;
            case 0x2B8264u: goto label_2b8264;
            case 0x2B8268u: goto label_2b8268;
            case 0x2B826Cu: goto label_2b826c;
            case 0x2B8270u: goto label_2b8270;
            case 0x2B8274u: goto label_2b8274;
            case 0x2B8278u: goto label_2b8278;
            case 0x2B827Cu: goto label_2b827c;
            case 0x2B8280u: goto label_2b8280;
            case 0x2B8284u: goto label_2b8284;
            case 0x2B8288u: goto label_2b8288;
            case 0x2B828Cu: goto label_2b828c;
            case 0x2B8290u: goto label_2b8290;
            case 0x2B8294u: goto label_2b8294;
            case 0x2B8298u: goto label_2b8298;
            case 0x2B829Cu: goto label_2b829c;
            case 0x2B82A0u: goto label_2b82a0;
            case 0x2B82A4u: goto label_2b82a4;
            case 0x2B82A8u: goto label_2b82a8;
            case 0x2B82ACu: goto label_2b82ac;
            case 0x2B82B0u: goto label_2b82b0;
            case 0x2B82B4u: goto label_2b82b4;
            case 0x2B82B8u: goto label_2b82b8;
            case 0x2B82BCu: goto label_2b82bc;
            case 0x2B82C0u: goto label_2b82c0;
            case 0x2B82C4u: goto label_2b82c4;
            case 0x2B82C8u: goto label_2b82c8;
            case 0x2B82CCu: goto label_2b82cc;
            case 0x2B82D0u: goto label_2b82d0;
            case 0x2B82D4u: goto label_2b82d4;
            case 0x2B82D8u: goto label_2b82d8;
            case 0x2B82DCu: goto label_2b82dc;
            case 0x2B82E0u: goto label_2b82e0;
            case 0x2B82E4u: goto label_2b82e4;
            case 0x2B82E8u: goto label_2b82e8;
            case 0x2B82ECu: goto label_2b82ec;
            case 0x2B82F0u: goto label_2b82f0;
            case 0x2B82F4u: goto label_2b82f4;
            case 0x2B82F8u: goto label_2b82f8;
            case 0x2B82FCu: goto label_2b82fc;
            case 0x2B8300u: goto label_2b8300;
            case 0x2B8304u: goto label_2b8304;
            case 0x2B8308u: goto label_2b8308;
            case 0x2B830Cu: goto label_2b830c;
            case 0x2B8310u: goto label_2b8310;
            case 0x2B8314u: goto label_2b8314;
            case 0x2B8318u: goto label_2b8318;
            case 0x2B831Cu: goto label_2b831c;
            case 0x2B8320u: goto label_2b8320;
            case 0x2B8324u: goto label_2b8324;
            case 0x2B8328u: goto label_2b8328;
            case 0x2B832Cu: goto label_2b832c;
            case 0x2B8330u: goto label_2b8330;
            case 0x2B8334u: goto label_2b8334;
            case 0x2B8338u: goto label_2b8338;
            case 0x2B833Cu: goto label_2b833c;
            case 0x2B8340u: goto label_2b8340;
            case 0x2B8344u: goto label_2b8344;
            case 0x2B8348u: goto label_2b8348;
            case 0x2B834Cu: goto label_2b834c;
            case 0x2B8350u: goto label_2b8350;
            case 0x2B8354u: goto label_2b8354;
            case 0x2B8358u: goto label_2b8358;
            case 0x2B835Cu: goto label_2b835c;
            case 0x2B8360u: goto label_2b8360;
            case 0x2B8364u: goto label_2b8364;
            case 0x2B8368u: goto label_2b8368;
            case 0x2B836Cu: goto label_2b836c;
            case 0x2B8370u: goto label_2b8370;
            case 0x2B8374u: goto label_2b8374;
            case 0x2B8378u: goto label_2b8378;
            case 0x2B837Cu: goto label_2b837c;
            case 0x2B8380u: goto label_2b8380;
            case 0x2B8384u: goto label_2b8384;
            case 0x2B8388u: goto label_2b8388;
            case 0x2B838Cu: goto label_2b838c;
            case 0x2B8390u: goto label_2b8390;
            case 0x2B8394u: goto label_2b8394;
            case 0x2B8398u: goto label_2b8398;
            case 0x2B839Cu: goto label_2b839c;
            case 0x2B83A0u: goto label_2b83a0;
            case 0x2B83A4u: goto label_2b83a4;
            case 0x2B83A8u: goto label_2b83a8;
            case 0x2B83ACu: goto label_2b83ac;
            case 0x2B83B0u: goto label_2b83b0;
            case 0x2B83B4u: goto label_2b83b4;
            case 0x2B83B8u: goto label_2b83b8;
            case 0x2B83BCu: goto label_2b83bc;
            case 0x2B83C0u: goto label_2b83c0;
            case 0x2B83C4u: goto label_2b83c4;
            case 0x2B83C8u: goto label_2b83c8;
            case 0x2B83CCu: goto label_2b83cc;
            case 0x2B83D0u: goto label_2b83d0;
            case 0x2B83D4u: goto label_2b83d4;
            case 0x2B83D8u: goto label_2b83d8;
            case 0x2B83DCu: goto label_2b83dc;
            case 0x2B83E0u: goto label_2b83e0;
            case 0x2B83E4u: goto label_2b83e4;
            case 0x2B83E8u: goto label_2b83e8;
            case 0x2B83ECu: goto label_2b83ec;
            case 0x2B83F0u: goto label_2b83f0;
            case 0x2B83F4u: goto label_2b83f4;
            case 0x2B83F8u: goto label_2b83f8;
            case 0x2B83FCu: goto label_2b83fc;
            case 0x2B8400u: goto label_2b8400;
            case 0x2B8404u: goto label_2b8404;
            case 0x2B8408u: goto label_2b8408;
            case 0x2B840Cu: goto label_2b840c;
            case 0x2B8410u: goto label_2b8410;
            case 0x2B8414u: goto label_2b8414;
            case 0x2B8418u: goto label_2b8418;
            case 0x2B841Cu: goto label_2b841c;
            case 0x2B8420u: goto label_2b8420;
            case 0x2B8424u: goto label_2b8424;
            case 0x2B8428u: goto label_2b8428;
            case 0x2B842Cu: goto label_2b842c;
            case 0x2B8430u: goto label_2b8430;
            case 0x2B8434u: goto label_2b8434;
            case 0x2B8438u: goto label_2b8438;
            case 0x2B843Cu: goto label_2b843c;
            case 0x2B8440u: goto label_2b8440;
            case 0x2B8444u: goto label_2b8444;
            case 0x2B8448u: goto label_2b8448;
            case 0x2B844Cu: goto label_2b844c;
            case 0x2B8450u: goto label_2b8450;
            case 0x2B8454u: goto label_2b8454;
            case 0x2B8458u: goto label_2b8458;
            case 0x2B845Cu: goto label_2b845c;
            case 0x2B8460u: goto label_2b8460;
            case 0x2B8464u: goto label_2b8464;
            case 0x2B8468u: goto label_2b8468;
            case 0x2B846Cu: goto label_2b846c;
            case 0x2B8470u: goto label_2b8470;
            case 0x2B8474u: goto label_2b8474;
            case 0x2B8478u: goto label_2b8478;
            case 0x2B847Cu: goto label_2b847c;
            case 0x2B8480u: goto label_2b8480;
            case 0x2B8484u: goto label_2b8484;
            case 0x2B8488u: goto label_2b8488;
            case 0x2B848Cu: goto label_2b848c;
            case 0x2B8490u: goto label_2b8490;
            case 0x2B8494u: goto label_2b8494;
            case 0x2B8498u: goto label_2b8498;
            case 0x2B849Cu: goto label_2b849c;
            case 0x2B84A0u: goto label_2b84a0;
            case 0x2B84A4u: goto label_2b84a4;
            case 0x2B84A8u: goto label_2b84a8;
            case 0x2B84ACu: goto label_2b84ac;
            case 0x2B84B0u: goto label_2b84b0;
            case 0x2B84B4u: goto label_2b84b4;
            case 0x2B84B8u: goto label_2b84b8;
            case 0x2B84BCu: goto label_2b84bc;
            case 0x2B84C0u: goto label_2b84c0;
            case 0x2B84C4u: goto label_2b84c4;
            case 0x2B84C8u: goto label_2b84c8;
            case 0x2B84CCu: goto label_2b84cc;
            case 0x2B84D0u: goto label_2b84d0;
            case 0x2B84D4u: goto label_2b84d4;
            case 0x2B84D8u: goto label_2b84d8;
            case 0x2B84DCu: goto label_2b84dc;
            case 0x2B84E0u: goto label_2b84e0;
            case 0x2B84E4u: goto label_2b84e4;
            case 0x2B84E8u: goto label_2b84e8;
            case 0x2B84ECu: goto label_2b84ec;
            case 0x2B84F0u: goto label_2b84f0;
            case 0x2B84F4u: goto label_2b84f4;
            case 0x2B84F8u: goto label_2b84f8;
            case 0x2B84FCu: goto label_2b84fc;
            case 0x2B8500u: goto label_2b8500;
            case 0x2B8504u: goto label_2b8504;
            case 0x2B8508u: goto label_2b8508;
            case 0x2B850Cu: goto label_2b850c;
            case 0x2B8510u: goto label_2b8510;
            case 0x2B8514u: goto label_2b8514;
            case 0x2B8518u: goto label_2b8518;
            case 0x2B851Cu: goto label_2b851c;
            case 0x2B8520u: goto label_2b8520;
            case 0x2B8524u: goto label_2b8524;
            case 0x2B8528u: goto label_2b8528;
            case 0x2B852Cu: goto label_2b852c;
            case 0x2B8530u: goto label_2b8530;
            case 0x2B8534u: goto label_2b8534;
            case 0x2B8538u: goto label_2b8538;
            case 0x2B853Cu: goto label_2b853c;
            case 0x2B8540u: goto label_2b8540;
            case 0x2B8544u: goto label_2b8544;
            case 0x2B8548u: goto label_2b8548;
            case 0x2B854Cu: goto label_2b854c;
            case 0x2B8550u: goto label_2b8550;
            case 0x2B8554u: goto label_2b8554;
            case 0x2B8558u: goto label_2b8558;
            case 0x2B855Cu: goto label_2b855c;
            case 0x2B8560u: goto label_2b8560;
            case 0x2B8564u: goto label_2b8564;
            case 0x2B8568u: goto label_2b8568;
            case 0x2B856Cu: goto label_2b856c;
            case 0x2B8570u: goto label_2b8570;
            case 0x2B8574u: goto label_2b8574;
            case 0x2B8578u: goto label_2b8578;
            case 0x2B857Cu: goto label_2b857c;
            case 0x2B8580u: goto label_2b8580;
            case 0x2B8584u: goto label_2b8584;
            case 0x2B8588u: goto label_2b8588;
            case 0x2B858Cu: goto label_2b858c;
            case 0x2B8590u: goto label_2b8590;
            case 0x2B8594u: goto label_2b8594;
            case 0x2B8598u: goto label_2b8598;
            case 0x2B859Cu: goto label_2b859c;
            case 0x2B85A0u: goto label_2b85a0;
            case 0x2B85A4u: goto label_2b85a4;
            case 0x2B85A8u: goto label_2b85a8;
            case 0x2B85ACu: goto label_2b85ac;
            case 0x2B85B0u: goto label_2b85b0;
            case 0x2B85B4u: goto label_2b85b4;
            case 0x2B85B8u: goto label_2b85b8;
            case 0x2B85BCu: goto label_2b85bc;
            case 0x2B85C0u: goto label_2b85c0;
            case 0x2B85C4u: goto label_2b85c4;
            case 0x2B85C8u: goto label_2b85c8;
            case 0x2B85CCu: goto label_2b85cc;
            case 0x2B85D0u: goto label_2b85d0;
            case 0x2B85D4u: goto label_2b85d4;
            case 0x2B85D8u: goto label_2b85d8;
            case 0x2B85DCu: goto label_2b85dc;
            case 0x2B85E0u: goto label_2b85e0;
            case 0x2B85E4u: goto label_2b85e4;
            case 0x2B85E8u: goto label_2b85e8;
            case 0x2B85ECu: goto label_2b85ec;
            case 0x2B85F0u: goto label_2b85f0;
            case 0x2B85F4u: goto label_2b85f4;
            case 0x2B85F8u: goto label_2b85f8;
            case 0x2B85FCu: goto label_2b85fc;
            case 0x2B8600u: goto label_2b8600;
            case 0x2B8604u: goto label_2b8604;
            case 0x2B8608u: goto label_2b8608;
            case 0x2B860Cu: goto label_2b860c;
            case 0x2B8610u: goto label_2b8610;
            case 0x2B8614u: goto label_2b8614;
            case 0x2B8618u: goto label_2b8618;
            case 0x2B861Cu: goto label_2b861c;
            case 0x2B8620u: goto label_2b8620;
            case 0x2B8624u: goto label_2b8624;
            case 0x2B8628u: goto label_2b8628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B810Cu;
label_2b810c:
    // 0x2b810c: 0x2403fffd
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8110:
    // 0x2b8110: 0x161027
    ctx->pc = 0x2b8110u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_2b8114:
    // 0x2b8114: 0x60b02d
    ctx->pc = 0x2b8114u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8118:
    // 0x2b8118: 0x10000022
label_2b811c:
    if (ctx->pc == 0x2B811Cu) {
        ctx->pc = 0x2B811Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 0));
        ctx->pc = 0x2B8120u;
        goto label_2b8120;
    }
    ctx->pc = 0x2B8118u;
    {
        const bool branch_taken_0x2b8118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B811Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 0));
        if (branch_taken_0x2b8118) {
            ctx->pc = 0x2B81A4u;
            goto label_2b81a4;
        }
    }
    ctx->pc = 0x2B8120u;
label_2b8120:
    // 0x2b8120: 0x2404fffd
    ctx->pc = 0x2b8120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8124:
    // 0x2b8124: 0x10000009
label_2b8128:
    if (ctx->pc == 0x2B8128u) {
        ctx->pc = 0x2B8128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B812Cu;
        goto label_2b812c;
    }
    ctx->pc = 0x2B8124u;
    {
        const bool branch_taken_0x2b8124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2b8124) {
            ctx->pc = 0x2B814Cu;
            goto label_2b814c;
        }
    }
    ctx->pc = 0x2B812Cu;
label_2b812c:
    // 0x2b812c: 0x2404fffd
    ctx->pc = 0x2b812cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8130:
    // 0x2b8130: 0x10000006
label_2b8134:
    if (ctx->pc == 0x2B8134u) {
        ctx->pc = 0x2B8134u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2B8138u;
        goto label_2b8138;
    }
    ctx->pc = 0x2B8130u;
    {
        const bool branch_taken_0x2b8130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8134u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2b8130) {
            ctx->pc = 0x2B814Cu;
            goto label_2b814c;
        }
    }
    ctx->pc = 0x2B8138u;
label_2b8138:
    // 0x2b8138: 0x2404fffd
    ctx->pc = 0x2b8138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b813c:
    // 0x2b813c: 0x10000003
label_2b8140:
    if (ctx->pc == 0x2B8140u) {
        ctx->pc = 0x2B8140u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2B8144u;
        goto label_2b8144;
    }
    ctx->pc = 0x2B813Cu;
    {
        const bool branch_taken_0x2b813c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8140u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2b813c) {
            ctx->pc = 0x2B814Cu;
            goto label_2b814c;
        }
    }
    ctx->pc = 0x2B8144u;
label_2b8144:
    // 0x2b8144: 0x2404fffd
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8148:
    // 0x2b8148: 0x2403000f
    ctx->pc = 0x2b8148u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
label_2b814c:
    // 0x2b814c: 0x161027
    ctx->pc = 0x2b814cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_2b8150:
    // 0x2b8150: 0x60b02d
    ctx->pc = 0x2b8150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8154:
    // 0x2b8154: 0x10000013
label_2b8158:
    if (ctx->pc == 0x2B8158u) {
        ctx->pc = 0x2B8158u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 4));
        ctx->pc = 0x2B815Cu;
        goto label_2b815c;
    }
    ctx->pc = 0x2B8154u;
    {
        const bool branch_taken_0x2b8154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8158u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 4));
        if (branch_taken_0x2b8154) {
            ctx->pc = 0x2B81A4u;
            goto label_2b81a4;
        }
    }
    ctx->pc = 0x2B815Cu;
label_2b815c:
    // 0x2b815c: 0x2403fffd
    ctx->pc = 0x2b815cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8160:
    // 0x2b8160: 0x141027
    ctx->pc = 0x2b8160u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_2b8164:
    // 0x2b8164: 0x60a02d
    ctx->pc = 0x2b8164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8168:
    // 0x2b8168: 0x1000000e
label_2b816c:
    if (ctx->pc == 0x2B816Cu) {
        ctx->pc = 0x2B816Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
        ctx->pc = 0x2B8170u;
        goto label_2b8170;
    }
    ctx->pc = 0x2B8168u;
    {
        const bool branch_taken_0x2b8168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B816Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
        if (branch_taken_0x2b8168) {
            ctx->pc = 0x2B81A4u;
            goto label_2b81a4;
        }
    }
    ctx->pc = 0x2B8170u;
label_2b8170:
    // 0x2b8170: 0x2404fffd
    ctx->pc = 0x2b8170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8174:
    // 0x2b8174: 0x10000006
label_2b8178:
    if (ctx->pc == 0x2B8178u) {
        ctx->pc = 0x2B8178u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B817Cu;
        goto label_2b817c;
    }
    ctx->pc = 0x2B8174u;
    {
        const bool branch_taken_0x2b8174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8178u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8174) {
            ctx->pc = 0x2B8190u;
            goto label_2b8190;
        }
    }
    ctx->pc = 0x2B817Cu;
label_2b817c:
    // 0x2b817c: 0x2404fffd
    ctx->pc = 0x2b817cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8180:
    // 0x2b8180: 0x10000003
label_2b8184:
    if (ctx->pc == 0x2B8184u) {
        ctx->pc = 0x2B8184u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B8188u;
        goto label_2b8188;
    }
    ctx->pc = 0x2B8180u;
    {
        const bool branch_taken_0x2b8180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8184u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b8180) {
            ctx->pc = 0x2B8190u;
            goto label_2b8190;
        }
    }
    ctx->pc = 0x2B8188u;
label_2b8188:
    // 0x2b8188: 0x2404fffd
    ctx->pc = 0x2b8188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b818c:
    // 0x2b818c: 0x24030003
    ctx->pc = 0x2b818cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_2b8190:
    // 0x2b8190: 0x141027
    ctx->pc = 0x2b8190u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_2b8194:
    // 0x2b8194: 0x60a02d
    ctx->pc = 0x2b8194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8198:
    // 0x2b8198: 0x10000002
label_2b819c:
    if (ctx->pc == 0x2B819Cu) {
        ctx->pc = 0x2B819Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 4));
        ctx->pc = 0x2B81A0u;
        goto label_2b81a0;
    }
    ctx->pc = 0x2B8198u;
    {
        const bool branch_taken_0x2b8198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B819Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 4));
        if (branch_taken_0x2b8198) {
            ctx->pc = 0x2B81A4u;
            goto label_2b81a4;
        }
    }
    ctx->pc = 0x2B81A0u;
label_2b81a0:
    // 0x2b81a0: 0x2414fffd
    ctx->pc = 0x2b81a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b81a4:
    // 0x2b81a4: 0x26b5ffff
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_2b81a8:
    // 0x2b81a8: 0x56f5ffc7
label_2b81ac:
    if (ctx->pc == 0x2B81ACu) {
        ctx->pc = 0x2B81ACu;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x2B81B0u;
        goto label_2b81b0;
    }
    ctx->pc = 0x2B81A8u;
    {
        const bool branch_taken_0x2b81a8 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 21));
        if (branch_taken_0x2b81a8) {
            ctx->pc = 0x2B81ACu;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->pc = 0x2B80C8u;
            goto label_2b80c8;
        }
    }
    ctx->pc = 0x2B81B0u;
label_2b81b0:
    // 0x2b81b0: 0x2402fffd
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b81b4:
    // 0x2b81b4: 0x128200fe
label_2b81b8:
    if (ctx->pc == 0x2B81B8u) {
        ctx->pc = 0x2B81B8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B81BCu;
        goto label_2b81bc;
    }
    ctx->pc = 0x2B81B4u;
    {
        const bool branch_taken_0x2b81b4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B81B8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b81b4) {
            ctx->pc = 0x2B85B0u;
            goto label_2b85b0;
        }
    }
    ctx->pc = 0x2B81BCu;
label_2b81bc:
    // 0x2b81bc: 0x12c200fc
label_2b81c0:
    if (ctx->pc == 0x2B81C0u) {
        ctx->pc = 0x2B81C0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 16384));
        ctx->pc = 0x2B81C4u;
        goto label_2b81c4;
    }
    ctx->pc = 0x2B81BCu;
    {
        const bool branch_taken_0x2b81bc = (GPR_U32(ctx, 22) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B81C0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 16384));
        if (branch_taken_0x2b81bc) {
            ctx->pc = 0x2B85B0u;
            goto label_2b85b0;
        }
    }
    ctx->pc = 0x2B81C4u;
label_2b81c4:
    // 0x2b81c4: 0x104000c3
label_2b81c8:
    if (ctx->pc == 0x2B81C8u) {
        ctx->pc = 0x2B81C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2B81CCu;
        goto label_2b81cc;
    }
    ctx->pc = 0x2B81C4u;
    {
        const bool branch_taken_0x2b81c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B81C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2b81c4) {
            ctx->pc = 0x2B84D4u;
            goto label_2b84d4;
        }
    }
    ctx->pc = 0x2B81CCu;
label_2b81cc:
    // 0x2b81cc: 0x12820006
label_2b81d0:
    if (ctx->pc == 0x2B81D0u) {
        ctx->pc = 0x2B81D4u;
        goto label_2b81d4;
    }
    ctx->pc = 0x2B81CCu;
    {
        const bool branch_taken_0x2b81cc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b81cc) {
            ctx->pc = 0x2B81E8u;
            goto label_2b81e8;
        }
    }
    ctx->pc = 0x2B81D4u;
label_2b81d4:
    // 0x2b81d4: 0x2402ffff
    ctx->pc = 0x2b81d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b81d8:
    // 0x2b81d8: 0x12820006
label_2b81dc:
    if (ctx->pc == 0x2B81DCu) {
        ctx->pc = 0x2B81E0u;
        goto label_2b81e0;
    }
    ctx->pc = 0x2B81D8u;
    {
        const bool branch_taken_0x2b81d8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b81d8) {
            ctx->pc = 0x2B81F4u;
            goto label_2b81f4;
        }
    }
    ctx->pc = 0x2B81E0u;
label_2b81e0:
    // 0x2b81e0: 0x10000009
label_2b81e4:
    if (ctx->pc == 0x2B81E4u) {
        ctx->pc = 0x2B81E8u;
        goto label_2b81e8;
    }
    ctx->pc = 0x2B81E0u;
    {
        const bool branch_taken_0x2b81e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b81e0) {
            ctx->pc = 0x2B8208u;
            goto label_2b8208;
        }
    }
    ctx->pc = 0x2B81E8u;
label_2b81e8:
    // 0x2b81e8: 0x3c02ffff
    ctx->pc = 0x2b81e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b81ec:
    // 0x2b81ec: 0x10000003
label_2b81f0:
    if (ctx->pc == 0x2B81F0u) {
        ctx->pc = 0x2B81F0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
        ctx->pc = 0x2B81F4u;
        goto label_2b81f4;
    }
    ctx->pc = 0x2B81ECu;
    {
        const bool branch_taken_0x2b81ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B81F0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
        if (branch_taken_0x2b81ec) {
            ctx->pc = 0x2B81FCu;
            goto label_2b81fc;
        }
    }
    ctx->pc = 0x2B81F4u;
label_2b81f4:
    // 0x2b81f4: 0x3c02ffff
    ctx->pc = 0x2b81f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b81f8:
    // 0x2b81f8: 0x3442fffc
    ctx->pc = 0x2b81f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
label_2b81fc:
    // 0x2b81fc: 0x2629824
    ctx->pc = 0x2b81fcu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b8200:
    // 0x2b8200: 0x10000004
label_2b8204:
    if (ctx->pc == 0x2B8204u) {
        ctx->pc = 0x2B8204u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8208u;
        goto label_2b8208;
    }
    ctx->pc = 0x2B8200u;
    {
        const bool branch_taken_0x2b8200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8204u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8200) {
            ctx->pc = 0x2B8214u;
            goto label_2b8214;
        }
    }
    ctx->pc = 0x2B8208u;
label_2b8208:
    // 0x2b8208: 0x3c02ffff
    ctx->pc = 0x2b8208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b820c:
    // 0x2b820c: 0x3442fffc
    ctx->pc = 0x2b820cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
label_2b8210:
    // 0x2b8210: 0x2629824
    ctx->pc = 0x2b8210u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b8214:
    // 0x2b8214: 0x2402ffff
    ctx->pc = 0x2b8214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b8218:
    // 0x2b8218: 0x16c2003f
label_2b821c:
    if (ctx->pc == 0x2B821Cu) {
        ctx->pc = 0x2B821Cu;
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2B8220u;
        goto label_2b8220;
    }
    ctx->pc = 0x2B8218u;
    {
        const bool branch_taken_0x2b8218 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B821Cu;
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x2b8218) {
            ctx->pc = 0x2B8318u;
            goto label_2b8318;
        }
    }
    ctx->pc = 0x2B8220u;
label_2b8220:
    // 0x2b8220: 0x3c02003c
    ctx->pc = 0x2b8220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b8224:
    // 0x2b8224: 0x2442a781
    ctx->pc = 0x2b8224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2b8228:
    // 0x2b8228: 0xc21021
    ctx->pc = 0x2b8228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b822c:
    // 0x2b822c: 0x90420000
    ctx->pc = 0x2b822cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8230:
    // 0x2b8230: 0x30420002
    ctx->pc = 0x2b8230u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2b8234:
    // 0x2b8234: 0x24c3ffe0
    ctx->pc = 0x2b8234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967264));
label_2b8238:
    // 0x2b8238: 0x62300b
    ctx->pc = 0x2b8238u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_2b823c:
    // 0x2b823c: 0x2402004d
    ctx->pc = 0x2b823cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 77));
label_2b8240:
    // 0x2b8240: 0x10c20020
label_2b8244:
    if (ctx->pc == 0x2B8244u) {
        ctx->pc = 0x2B8244u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 78));
        ctx->pc = 0x2B8248u;
        goto label_2b8248;
    }
    ctx->pc = 0x2B8240u;
    {
        const bool branch_taken_0x2b8240 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8244u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 78));
        if (branch_taken_0x2b8240) {
            ctx->pc = 0x2B82C4u;
            goto label_2b82c4;
        }
    }
    ctx->pc = 0x2B8248u;
label_2b8248:
    // 0x2b8248: 0x10400005
label_2b824c:
    if (ctx->pc == 0x2B824Cu) {
        ctx->pc = 0x2B824Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x2B8250u;
        goto label_2b8250;
    }
    ctx->pc = 0x2B8248u;
    {
        const bool branch_taken_0x2b8248 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B824Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
        if (branch_taken_0x2b8248) {
            ctx->pc = 0x2B8260u;
            goto label_2b8260;
        }
    }
    ctx->pc = 0x2B8250u;
label_2b8250:
    // 0x2b8250: 0x10c20008
label_2b8254:
    if (ctx->pc == 0x2B8254u) {
        ctx->pc = 0x2B8254u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B8258u;
        goto label_2b8258;
    }
    ctx->pc = 0x2B8250u;
    {
        const bool branch_taken_0x2b8250 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8254u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8250) {
            ctx->pc = 0x2B8274u;
            goto label_2b8274;
        }
    }
    ctx->pc = 0x2B8258u;
label_2b8258:
    // 0x2b8258: 0x100000d6
label_2b825c:
    if (ctx->pc == 0x2B825Cu) {
        ctx->pc = 0x2B825Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B8260u;
        goto label_2b8260;
    }
    ctx->pc = 0x2B8258u;
    {
        const bool branch_taken_0x2b8258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B825Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b8258) {
            ctx->pc = 0x2B85B4u;
            goto label_2b85b4;
        }
    }
    ctx->pc = 0x2B8260u;
label_2b8260:
    // 0x2b8260: 0x24020056
    ctx->pc = 0x2b8260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 86));
label_2b8264:
    // 0x2b8264: 0x10c20008
label_2b8268:
    if (ctx->pc == 0x2B8268u) {
        ctx->pc = 0x2B8268u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B826Cu;
        goto label_2b826c;
    }
    ctx->pc = 0x2B8264u;
    {
        const bool branch_taken_0x2b8264 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8268u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8264) {
            ctx->pc = 0x2B8288u;
            goto label_2b8288;
        }
    }
    ctx->pc = 0x2B826Cu;
label_2b826c:
    // 0x2b826c: 0x100000d1
label_2b8270:
    if (ctx->pc == 0x2B8270u) {
        ctx->pc = 0x2B8270u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B8274u;
        goto label_2b8274;
    }
    ctx->pc = 0x2B826Cu;
    {
        const bool branch_taken_0x2b826c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8270u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b826c) {
            ctx->pc = 0x2B85B4u;
            goto label_2b85b4;
        }
    }
    ctx->pc = 0x2B8274u;
label_2b8274:
    // 0x2b8274: 0x260202d
    ctx->pc = 0x2b8274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8278:
    // 0x2b8278: 0xc0accd2
label_2b827c:
    if (ctx->pc == 0x2B827Cu) {
        ctx->pc = 0x2B827Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8280u;
        goto label_2b8280;
    }
    ctx->pc = 0x2B8278u;
    SET_GPR_U32(ctx, 31, 0x2B8280u);
    ctx->pc = 0x2B827Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3348u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemF_0x2b3348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8280u; }
    }
    if (ctx->pc != 0x2B8280u) { return; }
    ctx->pc = 0x2B8280u;
label_2b8280:
    // 0x2b8280: 0x10000041
label_2b8284:
    if (ctx->pc == 0x2B8284u) {
        ctx->pc = 0x2B8284u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16), bits); }
        ctx->pc = 0x2B8288u;
        goto label_2b8288;
    }
    ctx->pc = 0x2B8280u;
    {
        const bool branch_taken_0x2b8280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8284u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16), bits); }
        if (branch_taken_0x2b8280) {
            ctx->pc = 0x2B8388u;
            goto label_2b8388;
        }
    }
    ctx->pc = 0x2B8288u;
label_2b8288:
    // 0x2b8288: 0x902d
    ctx->pc = 0x2b8288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b828c:
    // 0x2b828c: 0x27d00010
    ctx->pc = 0x2b828cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 16));
label_2b8290:
    // 0x2b8290: 0x260202d
    ctx->pc = 0x2b8290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8294:
    // 0x2b8294: 0x0
    ctx->pc = 0x2b8294u;
    // NOP
label_2b8298:
    // 0x2b8298: 0xc0accd2
label_2b829c:
    if (ctx->pc == 0x2B829Cu) {
        ctx->pc = 0x2B829Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B82A0u;
        goto label_2b82a0;
    }
    ctx->pc = 0x2B8298u;
    SET_GPR_U32(ctx, 31, 0x2B82A0u);
    ctx->pc = 0x2B829Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3348u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemF_0x2b3348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B82A0u; }
    }
    if (ctx->pc != 0x2B82A0u) { return; }
    ctx->pc = 0x2B82A0u;
label_2b82a0:
    // 0x2b82a0: 0x121080
    ctx->pc = 0x2b82a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2b82a4:
    // 0x2b82a4: 0x2021021
    ctx->pc = 0x2b82a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b82a8:
    // 0x2b82a8: 0xe4400000
    ctx->pc = 0x2b82a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b82ac:
    // 0x2b82ac: 0x26520001
    ctx->pc = 0x2b82acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2b82b0:
    // 0x2b82b0: 0x2a420004
    ctx->pc = 0x2b82b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_2b82b4:
    // 0x2b82b4: 0x1440fff8
label_2b82b8:
    if (ctx->pc == 0x2B82B8u) {
        ctx->pc = 0x2B82B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B82BCu;
        goto label_2b82bc;
    }
    ctx->pc = 0x2B82B4u;
    {
        const bool branch_taken_0x2b82b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B82B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b82b4) {
            ctx->pc = 0x2B8298u;
            goto label_2b8298;
        }
    }
    ctx->pc = 0x2B82BCu;
label_2b82bc:
    // 0x2b82bc: 0x100000ce
label_2b82c0:
    if (ctx->pc == 0x2B82C0u) {
        ctx->pc = 0x2B82C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B82C4u;
        goto label_2b82c4;
    }
    ctx->pc = 0x2B82BCu;
    {
        const bool branch_taken_0x2b82bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B82C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b82bc) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B82C4u;
label_2b82c4:
    // 0x2b82c4: 0x902d
    ctx->pc = 0x2b82c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b82c8:
    // 0x2b82c8: 0x27d40010
    ctx->pc = 0x2b82c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 30), 16));
label_2b82cc:
    // 0x2b82cc: 0x802d
    ctx->pc = 0x2b82ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b82d0:
    // 0x2b82d0: 0x128900
    ctx->pc = 0x2b82d0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 4));
label_2b82d4:
    // 0x2b82d4: 0x2712021
    ctx->pc = 0x2b82d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_2b82d8:
    // 0x2b82d8: 0xc0accd2
label_2b82dc:
    if (ctx->pc == 0x2B82DCu) {
        ctx->pc = 0x2B82DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B82E0u;
        goto label_2b82e0;
    }
    ctx->pc = 0x2B82D8u;
    SET_GPR_U32(ctx, 31, 0x2B82E0u);
    ctx->pc = 0x2B82DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3348u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemF_0x2b3348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B82E0u; }
    }
    if (ctx->pc != 0x2B82E0u) { return; }
    ctx->pc = 0x2B82E0u;
label_2b82e0:
    // 0x2b82e0: 0x101080
    ctx->pc = 0x2b82e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_2b82e4:
    // 0x2b82e4: 0x511021
    ctx->pc = 0x2b82e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b82e8:
    // 0x2b82e8: 0x2821021
    ctx->pc = 0x2b82e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2b82ec:
    // 0x2b82ec: 0xe4400000
    ctx->pc = 0x2b82ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b82f0:
    // 0x2b82f0: 0x26100001
    ctx->pc = 0x2b82f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2b82f4:
    // 0x2b82f4: 0x2a020004
    ctx->pc = 0x2b82f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_2b82f8:
    // 0x2b82f8: 0x1440fff7
label_2b82fc:
    if (ctx->pc == 0x2B82FCu) {
        ctx->pc = 0x2B82FCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B8300u;
        goto label_2b8300;
    }
    ctx->pc = 0x2B82F8u;
    {
        const bool branch_taken_0x2b82f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B82FCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        if (branch_taken_0x2b82f8) {
            ctx->pc = 0x2B82D8u;
            goto label_2b82d8;
        }
    }
    ctx->pc = 0x2B8300u;
label_2b8300:
    // 0x2b8300: 0x26520001
    ctx->pc = 0x2b8300u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2b8304:
    // 0x2b8304: 0x2a420004
    ctx->pc = 0x2b8304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_2b8308:
    // 0x2b8308: 0x1440fff1
label_2b830c:
    if (ctx->pc == 0x2B830Cu) {
        ctx->pc = 0x2B830Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8310u;
        goto label_2b8310;
    }
    ctx->pc = 0x2B8308u;
    {
        const bool branch_taken_0x2b8308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B830Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8308) {
            ctx->pc = 0x2B82D0u;
            goto label_2b82d0;
        }
    }
    ctx->pc = 0x2B8310u;
label_2b8310:
    // 0x2b8310: 0x100000b9
label_2b8314:
    if (ctx->pc == 0x2B8314u) {
        ctx->pc = 0x2B8314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B8318u;
        goto label_2b8318;
    }
    ctx->pc = 0x2B8310u;
    {
        const bool branch_taken_0x2b8310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2b8310) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B8318u;
label_2b8318:
    // 0x2b8318: 0x3c02003c
    ctx->pc = 0x2b8318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b831c:
    // 0x2b831c: 0x2442a781
    ctx->pc = 0x2b831cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2b8320:
    // 0x2b8320: 0xc21021
    ctx->pc = 0x2b8320u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b8324:
    // 0x2b8324: 0x90420000
    ctx->pc = 0x2b8324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8328:
    // 0x2b8328: 0x30420002
    ctx->pc = 0x2b8328u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2b832c:
    // 0x2b832c: 0x24c3ffe0
    ctx->pc = 0x2b832cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967264));
label_2b8330:
    // 0x2b8330: 0x62300b
    ctx->pc = 0x2b8330u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_2b8334:
    // 0x2b8334: 0x2402004d
    ctx->pc = 0x2b8334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 77));
label_2b8338:
    // 0x2b8338: 0x10c20027
label_2b833c:
    if (ctx->pc == 0x2B833Cu) {
        ctx->pc = 0x2B833Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 78));
        ctx->pc = 0x2B8340u;
        goto label_2b8340;
    }
    ctx->pc = 0x2B8338u;
    {
        const bool branch_taken_0x2b8338 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B833Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 78));
        if (branch_taken_0x2b8338) {
            ctx->pc = 0x2B83D8u;
            goto label_2b83d8;
        }
    }
    ctx->pc = 0x2B8340u;
label_2b8340:
    // 0x2b8340: 0x10400005
label_2b8344:
    if (ctx->pc == 0x2B8344u) {
        ctx->pc = 0x2B8344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x2B8348u;
        goto label_2b8348;
    }
    ctx->pc = 0x2B8340u;
    {
        const bool branch_taken_0x2b8340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
        if (branch_taken_0x2b8340) {
            ctx->pc = 0x2B8358u;
            goto label_2b8358;
        }
    }
    ctx->pc = 0x2B8348u;
label_2b8348:
    // 0x2b8348: 0x10c20008
label_2b834c:
    if (ctx->pc == 0x2B834Cu) {
        ctx->pc = 0x2B834Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B8350u;
        goto label_2b8350;
    }
    ctx->pc = 0x2B8348u;
    {
        const bool branch_taken_0x2b8348 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B834Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8348) {
            ctx->pc = 0x2B836Cu;
            goto label_2b836c;
        }
    }
    ctx->pc = 0x2B8350u;
label_2b8350:
    // 0x2b8350: 0x10000098
label_2b8354:
    if (ctx->pc == 0x2B8354u) {
        ctx->pc = 0x2B8354u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B8358u;
        goto label_2b8358;
    }
    ctx->pc = 0x2B8350u;
    {
        const bool branch_taken_0x2b8350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8354u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b8350) {
            ctx->pc = 0x2B85B4u;
            goto label_2b85b4;
        }
    }
    ctx->pc = 0x2B8358u;
label_2b8358:
    // 0x2b8358: 0x24020056
    ctx->pc = 0x2b8358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 86));
label_2b835c:
    // 0x2b835c: 0x10c2000c
label_2b8360:
    if (ctx->pc == 0x2B8360u) {
        ctx->pc = 0x2B8360u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B8364u;
        goto label_2b8364;
    }
    ctx->pc = 0x2B835Cu;
    {
        const bool branch_taken_0x2b835c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8360u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b835c) {
            ctx->pc = 0x2B8390u;
            goto label_2b8390;
        }
    }
    ctx->pc = 0x2B8364u;
label_2b8364:
    // 0x2b8364: 0x10000093
label_2b8368:
    if (ctx->pc == 0x2B8368u) {
        ctx->pc = 0x2B8368u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B836Cu;
        goto label_2b836c;
    }
    ctx->pc = 0x2B8364u;
    {
        const bool branch_taken_0x2b8364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8368u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b8364) {
            ctx->pc = 0x2B85B4u;
            goto label_2b85b4;
        }
    }
    ctx->pc = 0x2B836Cu;
label_2b836c:
    // 0x2b836c: 0x260202d
    ctx->pc = 0x2b836cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8370:
    // 0x2b8370: 0xc0accca
label_2b8374:
    if (ctx->pc == 0x2B8374u) {
        ctx->pc = 0x2B8374u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8378u;
        goto label_2b8378;
    }
    ctx->pc = 0x2B8370u;
    SET_GPR_U32(ctx, 31, 0x2B8378u);
    ctx->pc = 0x2B8374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3328u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemI_0x2b3328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8378u; }
    }
    if (ctx->pc != 0x2B8378u) { return; }
    ctx->pc = 0x2B8378u;
label_2b8378:
    // 0x2b8378: 0x40202d
    ctx->pc = 0x2b8378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b837c:
    // 0x2b837c: 0xc0ad224
label_2b8380:
    if (ctx->pc == 0x2B8380u) {
        ctx->pc = 0x2B8380u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8384u;
        goto label_2b8384;
    }
    ctx->pc = 0x2B837Cu;
    SET_GPR_U32(ctx, 31, 0x2B8384u);
    ctx->pc = 0x2B8380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFix_0x2b4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8384u; }
    }
    if (ctx->pc != 0x2B8384u) { return; }
    ctx->pc = 0x2B8384u;
label_2b8384:
    // 0x2b8384: 0xe7c00010
    ctx->pc = 0x2b8384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16), bits); }
label_2b8388:
    // 0x2b8388: 0x1000009c
label_2b838c:
    if (ctx->pc == 0x2B838Cu) {
        ctx->pc = 0x2B838Cu;
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2B8390u;
        goto label_2b8390;
    }
    ctx->pc = 0x2B8388u;
    {
        const bool branch_taken_0x2b8388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B838Cu;
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2b8388) {
            ctx->pc = 0x2B85FCu;
            goto label_2b85fc;
        }
    }
    ctx->pc = 0x2B8390u;
label_2b8390:
    // 0x2b8390: 0x902d
    ctx->pc = 0x2b8390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8394:
    // 0x2b8394: 0x27d00010
    ctx->pc = 0x2b8394u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 16));
label_2b8398:
    // 0x2b8398: 0x260202d
    ctx->pc = 0x2b8398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b839c:
    // 0x2b839c: 0x0
    ctx->pc = 0x2b839cu;
    // NOP
label_2b83a0:
    // 0x2b83a0: 0xc0accca
label_2b83a4:
    if (ctx->pc == 0x2B83A4u) {
        ctx->pc = 0x2B83A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B83A8u;
        goto label_2b83a8;
    }
    ctx->pc = 0x2B83A0u;
    SET_GPR_U32(ctx, 31, 0x2B83A8u);
    ctx->pc = 0x2B83A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3328u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemI_0x2b3328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83A8u; }
    }
    if (ctx->pc != 0x2B83A8u) { return; }
    ctx->pc = 0x2B83A8u;
label_2b83a8:
    // 0x2b83a8: 0x40202d
    ctx->pc = 0x2b83a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b83ac:
    // 0x2b83ac: 0xc0ad224
label_2b83b0:
    if (ctx->pc == 0x2B83B0u) {
        ctx->pc = 0x2B83B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B83B4u;
        goto label_2b83b4;
    }
    ctx->pc = 0x2B83ACu;
    SET_GPR_U32(ctx, 31, 0x2B83B4u);
    ctx->pc = 0x2B83B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFix_0x2b4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83B4u; }
    }
    if (ctx->pc != 0x2B83B4u) { return; }
    ctx->pc = 0x2B83B4u;
label_2b83b4:
    // 0x2b83b4: 0x121080
    ctx->pc = 0x2b83b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2b83b8:
    // 0x2b83b8: 0x2021021
    ctx->pc = 0x2b83b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b83bc:
    // 0x2b83bc: 0xe4400000
    ctx->pc = 0x2b83bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b83c0:
    // 0x2b83c0: 0x26520001
    ctx->pc = 0x2b83c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2b83c4:
    // 0x2b83c4: 0x2a420004
    ctx->pc = 0x2b83c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_2b83c8:
    // 0x2b83c8: 0x1440fff5
label_2b83cc:
    if (ctx->pc == 0x2B83CCu) {
        ctx->pc = 0x2B83CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B83D0u;
        goto label_2b83d0;
    }
    ctx->pc = 0x2B83C8u;
    {
        const bool branch_taken_0x2b83c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B83CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b83c8) {
            ctx->pc = 0x2B83A0u;
            goto label_2b83a0;
        }
    }
    ctx->pc = 0x2B83D0u;
label_2b83d0:
    // 0x2b83d0: 0x10000089
label_2b83d4:
    if (ctx->pc == 0x2B83D4u) {
        ctx->pc = 0x2B83D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B83D8u;
        goto label_2b83d8;
    }
    ctx->pc = 0x2B83D0u;
    {
        const bool branch_taken_0x2b83d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B83D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b83d0) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B83D8u;
label_2b83d8:
    // 0x2b83d8: 0x902d
    ctx->pc = 0x2b83d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b83dc:
    // 0x2b83dc: 0x27d40010
    ctx->pc = 0x2b83dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 30), 16));
label_2b83e0:
    // 0x2b83e0: 0x802d
    ctx->pc = 0x2b83e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b83e4:
    // 0x2b83e4: 0x0
    ctx->pc = 0x2b83e4u;
    // NOP
label_2b83e8:
    // 0x2b83e8: 0x128900
    ctx->pc = 0x2b83e8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 4));
label_2b83ec:
    // 0x2b83ec: 0x2712021
    ctx->pc = 0x2b83ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_2b83f0:
    // 0x2b83f0: 0xc0accca
label_2b83f4:
    if (ctx->pc == 0x2B83F4u) {
        ctx->pc = 0x2B83F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B83F8u;
        goto label_2b83f8;
    }
    ctx->pc = 0x2B83F0u;
    SET_GPR_U32(ctx, 31, 0x2B83F8u);
    ctx->pc = 0x2B83F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3328u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemI_0x2b3328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83F8u; }
    }
    if (ctx->pc != 0x2B83F8u) { return; }
    ctx->pc = 0x2B83F8u;
label_2b83f8:
    // 0x2b83f8: 0x40202d
    ctx->pc = 0x2b83f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b83fc:
    // 0x2b83fc: 0xc0ad224
label_2b8400:
    if (ctx->pc == 0x2B8400u) {
        ctx->pc = 0x2B8400u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8404u;
        goto label_2b8404;
    }
    ctx->pc = 0x2B83FCu;
    SET_GPR_U32(ctx, 31, 0x2B8404u);
    ctx->pc = 0x2B8400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFix_0x2b4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8404u; }
    }
    if (ctx->pc != 0x2B8404u) { return; }
    ctx->pc = 0x2B8404u;
label_2b8404:
    // 0x2b8404: 0x101080
    ctx->pc = 0x2b8404u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_2b8408:
    // 0x2b8408: 0x511021
    ctx->pc = 0x2b8408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b840c:
    // 0x2b840c: 0x2821021
    ctx->pc = 0x2b840cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2b8410:
    // 0x2b8410: 0xe4400000
    ctx->pc = 0x2b8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b8414:
    // 0x2b8414: 0x26100001
    ctx->pc = 0x2b8414u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2b8418:
    // 0x2b8418: 0x2a020004
    ctx->pc = 0x2b8418u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_2b841c:
    // 0x2b841c: 0x1440fff4
label_2b8420:
    if (ctx->pc == 0x2B8420u) {
        ctx->pc = 0x2B8420u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B8424u;
        goto label_2b8424;
    }
    ctx->pc = 0x2B841Cu;
    {
        const bool branch_taken_0x2b841c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8420u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        if (branch_taken_0x2b841c) {
            ctx->pc = 0x2B83F0u;
            goto label_2b83f0;
        }
    }
    ctx->pc = 0x2B8424u;
label_2b8424:
    // 0x2b8424: 0x26520001
    ctx->pc = 0x2b8424u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2b8428:
    // 0x2b8428: 0x2a420004
    ctx->pc = 0x2b8428u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_2b842c:
    // 0x2b842c: 0x1440ffee
label_2b8430:
    if (ctx->pc == 0x2B8430u) {
        ctx->pc = 0x2B8430u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8434u;
        goto label_2b8434;
    }
    ctx->pc = 0x2B842Cu;
    {
        const bool branch_taken_0x2b842c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8430u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b842c) {
            ctx->pc = 0x2B83E8u;
            goto label_2b83e8;
        }
    }
    ctx->pc = 0x2B8434u;
label_2b8434:
    // 0x2b8434: 0x10000070
label_2b8438:
    if (ctx->pc == 0x2B8438u) {
        ctx->pc = 0x2B8438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B843Cu;
        goto label_2b843c;
    }
    ctx->pc = 0x2B8434u;
    {
        const bool branch_taken_0x2b8434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2b8434) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B843Cu;
label_2b843c:
    // 0x2b843c: 0x3c02ffff
    ctx->pc = 0x2b843cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b8440:
    // 0x2b8440: 0x3442fffc
    ctx->pc = 0x2b8440u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
label_2b8444:
    // 0x2b8444: 0x2629824
    ctx->pc = 0x2b8444u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b8448:
    // 0x2b8448: 0x26a20001
    ctx->pc = 0x2b8448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
label_2b844c:
    // 0x2b844c: 0x14570003
label_2b8450:
    if (ctx->pc == 0x2B8450u) {
        ctx->pc = 0x2B8450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x2B8454u;
        goto label_2b8454;
    }
    ctx->pc = 0x2B844Cu;
    {
        const bool branch_taken_0x2b844c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        ctx->pc = 0x2B8450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x2b844c) {
            ctx->pc = 0x2B845Cu;
            goto label_2b845c;
        }
    }
    ctx->pc = 0x2B8454u;
label_2b8454:
    // 0x2b8454: 0x1000001a
label_2b8458:
    if (ctx->pc == 0x2B8458u) {
        ctx->pc = 0x2B8458u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B845Cu;
        goto label_2b845c;
    }
    ctx->pc = 0x2B8454u;
    {
        const bool branch_taken_0x2b8454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8458u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8454) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B845Cu;
label_2b845c:
    // 0x2b845c: 0x14570054
label_2b8460:
    if (ctx->pc == 0x2B8460u) {
        ctx->pc = 0x2B8460u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B8464u;
        goto label_2b8464;
    }
    ctx->pc = 0x2B845Cu;
    {
        const bool branch_taken_0x2b845c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        ctx->pc = 0x2B8460u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b845c) {
            ctx->pc = 0x2B85B0u;
            goto label_2b85b0;
        }
    }
    ctx->pc = 0x2B8464u;
label_2b8464:
    // 0x2b8464: 0x82a30001
    ctx->pc = 0x2b8464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_2b8468:
    // 0x2b8468: 0x24020058
    ctx->pc = 0x2b8468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
label_2b846c:
    // 0x2b846c: 0x1062000e
label_2b8470:
    if (ctx->pc == 0x2B8470u) {
        ctx->pc = 0x2B8470u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 89));
        ctx->pc = 0x2B8474u;
        goto label_2b8474;
    }
    ctx->pc = 0x2B846Cu;
    {
        const bool branch_taken_0x2b846c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8470u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 89));
        if (branch_taken_0x2b846c) {
            ctx->pc = 0x2B84A8u;
            goto label_2b84a8;
        }
    }
    ctx->pc = 0x2B8474u;
label_2b8474:
    // 0x2b8474: 0x10400005
label_2b8478:
    if (ctx->pc == 0x2B8478u) {
        ctx->pc = 0x2B8478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 87));
        ctx->pc = 0x2B847Cu;
        goto label_2b847c;
    }
    ctx->pc = 0x2B8474u;
    {
        const bool branch_taken_0x2b8474 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 87));
        if (branch_taken_0x2b8474) {
            ctx->pc = 0x2B848Cu;
            goto label_2b848c;
        }
    }
    ctx->pc = 0x2B847Cu;
label_2b847c:
    // 0x2b847c: 0x5062000d
label_2b8480:
    if (ctx->pc == 0x2B8480u) {
        ctx->pc = 0x2B8480u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B8484u;
        goto label_2b8484;
    }
    ctx->pc = 0x2B847Cu;
    {
        const bool branch_taken_0x2b847c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b847c) {
            ctx->pc = 0x2B8480u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x2B84B4u;
            goto label_2b84b4;
        }
    }
    ctx->pc = 0x2B8484u;
label_2b8484:
    // 0x2b8484: 0x1000000e
label_2b8488:
    if (ctx->pc == 0x2B8488u) {
        ctx->pc = 0x2B848Cu;
        goto label_2b848c;
    }
    ctx->pc = 0x2B8484u;
    {
        const bool branch_taken_0x2b8484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b8484) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B848Cu;
label_2b848c:
    // 0x2b848c: 0x24020059
    ctx->pc = 0x2b848cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 89));
label_2b8490:
    // 0x2b8490: 0x10620007
label_2b8494:
    if (ctx->pc == 0x2B8494u) {
        ctx->pc = 0x2B8494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x2B8498u;
        goto label_2b8498;
    }
    ctx->pc = 0x2B8490u;
    {
        const bool branch_taken_0x2b8490 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
        if (branch_taken_0x2b8490) {
            ctx->pc = 0x2B84B0u;
            goto label_2b84b0;
        }
    }
    ctx->pc = 0x2B8498u;
label_2b8498:
    // 0x2b8498: 0x50620006
label_2b849c:
    if (ctx->pc == 0x2B849Cu) {
        ctx->pc = 0x2B849Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B84A0u;
        goto label_2b84a0;
    }
    ctx->pc = 0x2B8498u;
    {
        const bool branch_taken_0x2b8498 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b8498) {
            ctx->pc = 0x2B849Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x2B84B4u;
            goto label_2b84b4;
        }
    }
    ctx->pc = 0x2B84A0u;
label_2b84a0:
    // 0x2b84a0: 0x10000007
label_2b84a4:
    if (ctx->pc == 0x2B84A4u) {
        ctx->pc = 0x2B84A8u;
        goto label_2b84a8;
    }
    ctx->pc = 0x2B84A0u;
    {
        const bool branch_taken_0x2b84a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b84a0) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B84A8u;
label_2b84a8:
    // 0x2b84a8: 0x10000002
label_2b84ac:
    if (ctx->pc == 0x2B84ACu) {
        ctx->pc = 0x2B84ACu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B84B0u;
        goto label_2b84b0;
    }
    ctx->pc = 0x2B84A8u;
    {
        const bool branch_taken_0x2b84a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B84ACu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b84a8) {
            ctx->pc = 0x2B84B4u;
            goto label_2b84b4;
        }
    }
    ctx->pc = 0x2B84B0u;
label_2b84b0:
    // 0x2b84b0: 0x24140001
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_2b84b4:
    // 0x2b84b4: 0x3c02ffff
    ctx->pc = 0x2b84b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b84b8:
    // 0x2b84b8: 0x3442fff0
    ctx->pc = 0x2b84b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
label_2b84bc:
    // 0x2b84bc: 0x2629824
    ctx->pc = 0x2b84bcu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b84c0:
    // 0x2b84c0: 0x680003a
label_2b84c4:
    if (ctx->pc == 0x2B84C4u) {
        ctx->pc = 0x2B84C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 16384));
        ctx->pc = 0x2B84C8u;
        goto label_2b84c8;
    }
    ctx->pc = 0x2B84C0u;
    {
        const bool branch_taken_0x2b84c0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2B84C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 16384));
        if (branch_taken_0x2b84c0) {
            ctx->pc = 0x2B85ACu;
            goto label_2b85ac;
        }
    }
    ctx->pc = 0x2B84C8u;
label_2b84c8:
    // 0x2b84c8: 0x54400015
label_2b84cc:
    if (ctx->pc == 0x2B84CCu) {
        ctx->pc = 0x2B84CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B84D0u;
        goto label_2b84d0;
    }
    ctx->pc = 0x2B84C8u;
    {
        const bool branch_taken_0x2b84c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b84c8) {
            ctx->pc = 0x2B84CCu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2B8520u;
            goto label_2b8520;
        }
    }
    ctx->pc = 0x2B84D0u;
label_2b84d0:
    // 0x2b84d0: 0x3c04003b
    ctx->pc = 0x2b84d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b84d4:
    // 0x2b84d4: 0x24844650
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b84d8:
    // 0x2b84d8: 0x24050020
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b84dc:
    // 0x2b84dc: 0x3c06003b
    ctx->pc = 0x2b84dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b84e0:
    // 0x2b84e0: 0x24c60d80
    ctx->pc = 0x2b84e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b84e4:
    // 0x2b84e4: 0xc0ad0d6
label_2b84e8:
    if (ctx->pc == 0x2B84E8u) {
        ctx->pc = 0x2B84E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B84ECu;
        goto label_2b84ec;
    }
    ctx->pc = 0x2B84E4u;
    SET_GPR_U32(ctx, 31, 0x2B84ECu);
    ctx->pc = 0x2B84E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B84ECu; }
    }
    if (ctx->pc != 0x2B84ECu) { return; }
    ctx->pc = 0x2B84ECu;
label_2b84ec:
    // 0x2b84ec: 0x3c04003b
    ctx->pc = 0x2b84ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b84f0:
    // 0x2b84f0: 0x24845318
    ctx->pc = 0x2b84f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21272));
label_2b84f4:
    // 0x2b84f4: 0xc0b4a34
label_2b84f8:
    if (ctx->pc == 0x2B84F8u) {
        ctx->pc = 0x2B84F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B84FCu;
        goto label_2b84fc;
    }
    ctx->pc = 0x2B84F4u;
    SET_GPR_U32(ctx, 31, 0x2B84FCu);
    ctx->pc = 0x2B84F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B84FCu; }
    }
    if (ctx->pc != 0x2B84FCu) { return; }
    ctx->pc = 0x2B84FCu;
label_2b84fc:
    // 0x2b84fc: 0x3c04003b
    ctx->pc = 0x2b84fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b8500:
    // 0x2b8500: 0xc0b4a34
label_2b8504:
    if (ctx->pc == 0x2B8504u) {
        ctx->pc = 0x2B8504u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B8508u;
        goto label_2b8508;
    }
    ctx->pc = 0x2B8500u;
    SET_GPR_U32(ctx, 31, 0x2B8508u);
    ctx->pc = 0x2B8504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8508u; }
    }
    if (ctx->pc != 0x2B8508u) { return; }
    ctx->pc = 0x2B8508u;
label_2b8508:
    // 0x2b8508: 0x3c020037
    ctx->pc = 0x2b8508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b850c:
    // 0x2b850c: 0x8c4320ac
    ctx->pc = 0x2b850cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b8510:
    // 0x2b8510: 0x8c620048
    ctx->pc = 0x2b8510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b8514:
    // 0x2b8514: 0x34420001
    ctx->pc = 0x2b8514u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b8518:
    // 0x2b8518: 0x10000024
label_2b851c:
    if (ctx->pc == 0x2B851Cu) {
        ctx->pc = 0x2B851Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x2B8520u;
        goto label_2b8520;
    }
    ctx->pc = 0x2B8518u;
    {
        const bool branch_taken_0x2b8518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B851Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2b8518) {
            ctx->pc = 0x2B85ACu;
            goto label_2b85ac;
        }
    }
    ctx->pc = 0x2B8520u;
label_2b8520:
    // 0x2b8520: 0xc0accca
label_2b8524:
    if (ctx->pc == 0x2B8524u) {
        ctx->pc = 0x2B8524u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8528u;
        goto label_2b8528;
    }
    ctx->pc = 0x2B8520u;
    SET_GPR_U32(ctx, 31, 0x2B8528u);
    ctx->pc = 0x2B8524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3328u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemI_0x2b3328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8528u; }
    }
    if (ctx->pc != 0x2B8528u) { return; }
    ctx->pc = 0x2B8528u;
label_2b8528:
    // 0x2b8528: 0x40282d
    ctx->pc = 0x2b8528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b852c:
    // 0x2b852c: 0x82a40000
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2b8530:
    // 0x2b8530: 0x3c02003c
    ctx->pc = 0x2b8530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b8534:
    // 0x2b8534: 0x2442a781
    ctx->pc = 0x2b8534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2b8538:
    // 0x2b8538: 0x821021
    ctx->pc = 0x2b8538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b853c:
    // 0x2b853c: 0x90420000
    ctx->pc = 0x2b853cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8540:
    // 0x2b8540: 0x30420002
    ctx->pc = 0x2b8540u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2b8544:
    // 0x2b8544: 0x2483ffe0
    ctx->pc = 0x2b8544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
label_2b8548:
    // 0x2b8548: 0x62200b
    ctx->pc = 0x2b8548u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_2b854c:
    // 0x2b854c: 0x2483ffbe
    ctx->pc = 0x2b854cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967230));
label_2b8550:
    // 0x2b8550: 0x2c620016
    ctx->pc = 0x2b8550u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 22));
label_2b8554:
    // 0x2b8554: 0x10400013
label_2b8558:
    if (ctx->pc == 0x2B8558u) {
        ctx->pc = 0x2B8558u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B855Cu;
        goto label_2b855c;
    }
    ctx->pc = 0x2B8554u;
    {
        const bool branch_taken_0x2b8554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8558u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8554) {
            ctx->pc = 0x2B85A4u;
            goto label_2b85a4;
        }
    }
    ctx->pc = 0x2B855Cu;
label_2b855c:
    // 0x2b855c: 0x24425480
    ctx->pc = 0x2b855cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21632));
label_2b8560:
    // 0x2b8560: 0x31880
    ctx->pc = 0x2b8560u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b8564:
    // 0x2b8564: 0x621821
    ctx->pc = 0x2b8564u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b8568:
    // 0x2b8568: 0x8c620000
    ctx->pc = 0x2b8568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b856c:
    // 0x2b856c: 0x400008
label_2b8570:
    if (ctx->pc == 0x2B8570u) {
        ctx->pc = 0x2B8574u;
        goto label_2b8574;
    }
    ctx->pc = 0x2B856Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7F30u: goto label_2b7f30;
            case 0x2B7F34u: goto label_2b7f34;
            case 0x2B7F38u: goto label_2b7f38;
            case 0x2B7F3Cu: goto label_2b7f3c;
            case 0x2B7F40u: goto label_2b7f40;
            case 0x2B7F44u: goto label_2b7f44;
            case 0x2B7F48u: goto label_2b7f48;
            case 0x2B7F4Cu: goto label_2b7f4c;
            case 0x2B7F50u: goto label_2b7f50;
            case 0x2B7F54u: goto label_2b7f54;
            case 0x2B7F58u: goto label_2b7f58;
            case 0x2B7F5Cu: goto label_2b7f5c;
            case 0x2B7F60u: goto label_2b7f60;
            case 0x2B7F64u: goto label_2b7f64;
            case 0x2B7F68u: goto label_2b7f68;
            case 0x2B7F6Cu: goto label_2b7f6c;
            case 0x2B7F70u: goto label_2b7f70;
            case 0x2B7F74u: goto label_2b7f74;
            case 0x2B7F78u: goto label_2b7f78;
            case 0x2B7F7Cu: goto label_2b7f7c;
            case 0x2B7F80u: goto label_2b7f80;
            case 0x2B7F84u: goto label_2b7f84;
            case 0x2B7F88u: goto label_2b7f88;
            case 0x2B7F8Cu: goto label_2b7f8c;
            case 0x2B7F90u: goto label_2b7f90;
            case 0x2B7F94u: goto label_2b7f94;
            case 0x2B7F98u: goto label_2b7f98;
            case 0x2B7F9Cu: goto label_2b7f9c;
            case 0x2B7FA0u: goto label_2b7fa0;
            case 0x2B7FA4u: goto label_2b7fa4;
            case 0x2B7FA8u: goto label_2b7fa8;
            case 0x2B7FACu: goto label_2b7fac;
            case 0x2B7FB0u: goto label_2b7fb0;
            case 0x2B7FB4u: goto label_2b7fb4;
            case 0x2B7FB8u: goto label_2b7fb8;
            case 0x2B7FBCu: goto label_2b7fbc;
            case 0x2B7FC0u: goto label_2b7fc0;
            case 0x2B7FC4u: goto label_2b7fc4;
            case 0x2B7FC8u: goto label_2b7fc8;
            case 0x2B7FCCu: goto label_2b7fcc;
            case 0x2B7FD0u: goto label_2b7fd0;
            case 0x2B7FD4u: goto label_2b7fd4;
            case 0x2B7FD8u: goto label_2b7fd8;
            case 0x2B7FDCu: goto label_2b7fdc;
            case 0x2B7FE0u: goto label_2b7fe0;
            case 0x2B7FE4u: goto label_2b7fe4;
            case 0x2B7FE8u: goto label_2b7fe8;
            case 0x2B7FECu: goto label_2b7fec;
            case 0x2B7FF0u: goto label_2b7ff0;
            case 0x2B7FF4u: goto label_2b7ff4;
            case 0x2B7FF8u: goto label_2b7ff8;
            case 0x2B7FFCu: goto label_2b7ffc;
            case 0x2B8000u: goto label_2b8000;
            case 0x2B8004u: goto label_2b8004;
            case 0x2B8008u: goto label_2b8008;
            case 0x2B800Cu: goto label_2b800c;
            case 0x2B8010u: goto label_2b8010;
            case 0x2B8014u: goto label_2b8014;
            case 0x2B8018u: goto label_2b8018;
            case 0x2B801Cu: goto label_2b801c;
            case 0x2B8020u: goto label_2b8020;
            case 0x2B8024u: goto label_2b8024;
            case 0x2B8028u: goto label_2b8028;
            case 0x2B802Cu: goto label_2b802c;
            case 0x2B8030u: goto label_2b8030;
            case 0x2B8034u: goto label_2b8034;
            case 0x2B8038u: goto label_2b8038;
            case 0x2B803Cu: goto label_2b803c;
            case 0x2B8040u: goto label_2b8040;
            case 0x2B8044u: goto label_2b8044;
            case 0x2B8048u: goto label_2b8048;
            case 0x2B804Cu: goto label_2b804c;
            case 0x2B8050u: goto label_2b8050;
            case 0x2B8054u: goto label_2b8054;
            case 0x2B8058u: goto label_2b8058;
            case 0x2B805Cu: goto label_2b805c;
            case 0x2B8060u: goto label_2b8060;
            case 0x2B8064u: goto label_2b8064;
            case 0x2B8068u: goto label_2b8068;
            case 0x2B806Cu: goto label_2b806c;
            case 0x2B8070u: goto label_2b8070;
            case 0x2B8074u: goto label_2b8074;
            case 0x2B8078u: goto label_2b8078;
            case 0x2B807Cu: goto label_2b807c;
            case 0x2B8080u: goto label_2b8080;
            case 0x2B8084u: goto label_2b8084;
            case 0x2B8088u: goto label_2b8088;
            case 0x2B808Cu: goto label_2b808c;
            case 0x2B8090u: goto label_2b8090;
            case 0x2B8094u: goto label_2b8094;
            case 0x2B8098u: goto label_2b8098;
            case 0x2B809Cu: goto label_2b809c;
            case 0x2B80A0u: goto label_2b80a0;
            case 0x2B80A4u: goto label_2b80a4;
            case 0x2B80A8u: goto label_2b80a8;
            case 0x2B80ACu: goto label_2b80ac;
            case 0x2B80B0u: goto label_2b80b0;
            case 0x2B80B4u: goto label_2b80b4;
            case 0x2B80B8u: goto label_2b80b8;
            case 0x2B80BCu: goto label_2b80bc;
            case 0x2B80C0u: goto label_2b80c0;
            case 0x2B80C4u: goto label_2b80c4;
            case 0x2B80C8u: goto label_2b80c8;
            case 0x2B80CCu: goto label_2b80cc;
            case 0x2B80D0u: goto label_2b80d0;
            case 0x2B80D4u: goto label_2b80d4;
            case 0x2B80D8u: goto label_2b80d8;
            case 0x2B80DCu: goto label_2b80dc;
            case 0x2B80E0u: goto label_2b80e0;
            case 0x2B80E4u: goto label_2b80e4;
            case 0x2B80E8u: goto label_2b80e8;
            case 0x2B80ECu: goto label_2b80ec;
            case 0x2B80F0u: goto label_2b80f0;
            case 0x2B80F4u: goto label_2b80f4;
            case 0x2B80F8u: goto label_2b80f8;
            case 0x2B80FCu: goto label_2b80fc;
            case 0x2B8100u: goto label_2b8100;
            case 0x2B8104u: goto label_2b8104;
            case 0x2B8108u: goto label_2b8108;
            case 0x2B810Cu: goto label_2b810c;
            case 0x2B8110u: goto label_2b8110;
            case 0x2B8114u: goto label_2b8114;
            case 0x2B8118u: goto label_2b8118;
            case 0x2B811Cu: goto label_2b811c;
            case 0x2B8120u: goto label_2b8120;
            case 0x2B8124u: goto label_2b8124;
            case 0x2B8128u: goto label_2b8128;
            case 0x2B812Cu: goto label_2b812c;
            case 0x2B8130u: goto label_2b8130;
            case 0x2B8134u: goto label_2b8134;
            case 0x2B8138u: goto label_2b8138;
            case 0x2B813Cu: goto label_2b813c;
            case 0x2B8140u: goto label_2b8140;
            case 0x2B8144u: goto label_2b8144;
            case 0x2B8148u: goto label_2b8148;
            case 0x2B814Cu: goto label_2b814c;
            case 0x2B8150u: goto label_2b8150;
            case 0x2B8154u: goto label_2b8154;
            case 0x2B8158u: goto label_2b8158;
            case 0x2B815Cu: goto label_2b815c;
            case 0x2B8160u: goto label_2b8160;
            case 0x2B8164u: goto label_2b8164;
            case 0x2B8168u: goto label_2b8168;
            case 0x2B816Cu: goto label_2b816c;
            case 0x2B8170u: goto label_2b8170;
            case 0x2B8174u: goto label_2b8174;
            case 0x2B8178u: goto label_2b8178;
            case 0x2B817Cu: goto label_2b817c;
            case 0x2B8180u: goto label_2b8180;
            case 0x2B8184u: goto label_2b8184;
            case 0x2B8188u: goto label_2b8188;
            case 0x2B818Cu: goto label_2b818c;
            case 0x2B8190u: goto label_2b8190;
            case 0x2B8194u: goto label_2b8194;
            case 0x2B8198u: goto label_2b8198;
            case 0x2B819Cu: goto label_2b819c;
            case 0x2B81A0u: goto label_2b81a0;
            case 0x2B81A4u: goto label_2b81a4;
            case 0x2B81A8u: goto label_2b81a8;
            case 0x2B81ACu: goto label_2b81ac;
            case 0x2B81B0u: goto label_2b81b0;
            case 0x2B81B4u: goto label_2b81b4;
            case 0x2B81B8u: goto label_2b81b8;
            case 0x2B81BCu: goto label_2b81bc;
            case 0x2B81C0u: goto label_2b81c0;
            case 0x2B81C4u: goto label_2b81c4;
            case 0x2B81C8u: goto label_2b81c8;
            case 0x2B81CCu: goto label_2b81cc;
            case 0x2B81D0u: goto label_2b81d0;
            case 0x2B81D4u: goto label_2b81d4;
            case 0x2B81D8u: goto label_2b81d8;
            case 0x2B81DCu: goto label_2b81dc;
            case 0x2B81E0u: goto label_2b81e0;
            case 0x2B81E4u: goto label_2b81e4;
            case 0x2B81E8u: goto label_2b81e8;
            case 0x2B81ECu: goto label_2b81ec;
            case 0x2B81F0u: goto label_2b81f0;
            case 0x2B81F4u: goto label_2b81f4;
            case 0x2B81F8u: goto label_2b81f8;
            case 0x2B81FCu: goto label_2b81fc;
            case 0x2B8200u: goto label_2b8200;
            case 0x2B8204u: goto label_2b8204;
            case 0x2B8208u: goto label_2b8208;
            case 0x2B820Cu: goto label_2b820c;
            case 0x2B8210u: goto label_2b8210;
            case 0x2B8214u: goto label_2b8214;
            case 0x2B8218u: goto label_2b8218;
            case 0x2B821Cu: goto label_2b821c;
            case 0x2B8220u: goto label_2b8220;
            case 0x2B8224u: goto label_2b8224;
            case 0x2B8228u: goto label_2b8228;
            case 0x2B822Cu: goto label_2b822c;
            case 0x2B8230u: goto label_2b8230;
            case 0x2B8234u: goto label_2b8234;
            case 0x2B8238u: goto label_2b8238;
            case 0x2B823Cu: goto label_2b823c;
            case 0x2B8240u: goto label_2b8240;
            case 0x2B8244u: goto label_2b8244;
            case 0x2B8248u: goto label_2b8248;
            case 0x2B824Cu: goto label_2b824c;
            case 0x2B8250u: goto label_2b8250;
            case 0x2B8254u: goto label_2b8254;
            case 0x2B8258u: goto label_2b8258;
            case 0x2B825Cu: goto label_2b825c;
            case 0x2B8260u: goto label_2b8260;
            case 0x2B8264u: goto label_2b8264;
            case 0x2B8268u: goto label_2b8268;
            case 0x2B826Cu: goto label_2b826c;
            case 0x2B8270u: goto label_2b8270;
            case 0x2B8274u: goto label_2b8274;
            case 0x2B8278u: goto label_2b8278;
            case 0x2B827Cu: goto label_2b827c;
            case 0x2B8280u: goto label_2b8280;
            case 0x2B8284u: goto label_2b8284;
            case 0x2B8288u: goto label_2b8288;
            case 0x2B828Cu: goto label_2b828c;
            case 0x2B8290u: goto label_2b8290;
            case 0x2B8294u: goto label_2b8294;
            case 0x2B8298u: goto label_2b8298;
            case 0x2B829Cu: goto label_2b829c;
            case 0x2B82A0u: goto label_2b82a0;
            case 0x2B82A4u: goto label_2b82a4;
            case 0x2B82A8u: goto label_2b82a8;
            case 0x2B82ACu: goto label_2b82ac;
            case 0x2B82B0u: goto label_2b82b0;
            case 0x2B82B4u: goto label_2b82b4;
            case 0x2B82B8u: goto label_2b82b8;
            case 0x2B82BCu: goto label_2b82bc;
            case 0x2B82C0u: goto label_2b82c0;
            case 0x2B82C4u: goto label_2b82c4;
            case 0x2B82C8u: goto label_2b82c8;
            case 0x2B82CCu: goto label_2b82cc;
            case 0x2B82D0u: goto label_2b82d0;
            case 0x2B82D4u: goto label_2b82d4;
            case 0x2B82D8u: goto label_2b82d8;
            case 0x2B82DCu: goto label_2b82dc;
            case 0x2B82E0u: goto label_2b82e0;
            case 0x2B82E4u: goto label_2b82e4;
            case 0x2B82E8u: goto label_2b82e8;
            case 0x2B82ECu: goto label_2b82ec;
            case 0x2B82F0u: goto label_2b82f0;
            case 0x2B82F4u: goto label_2b82f4;
            case 0x2B82F8u: goto label_2b82f8;
            case 0x2B82FCu: goto label_2b82fc;
            case 0x2B8300u: goto label_2b8300;
            case 0x2B8304u: goto label_2b8304;
            case 0x2B8308u: goto label_2b8308;
            case 0x2B830Cu: goto label_2b830c;
            case 0x2B8310u: goto label_2b8310;
            case 0x2B8314u: goto label_2b8314;
            case 0x2B8318u: goto label_2b8318;
            case 0x2B831Cu: goto label_2b831c;
            case 0x2B8320u: goto label_2b8320;
            case 0x2B8324u: goto label_2b8324;
            case 0x2B8328u: goto label_2b8328;
            case 0x2B832Cu: goto label_2b832c;
            case 0x2B8330u: goto label_2b8330;
            case 0x2B8334u: goto label_2b8334;
            case 0x2B8338u: goto label_2b8338;
            case 0x2B833Cu: goto label_2b833c;
            case 0x2B8340u: goto label_2b8340;
            case 0x2B8344u: goto label_2b8344;
            case 0x2B8348u: goto label_2b8348;
            case 0x2B834Cu: goto label_2b834c;
            case 0x2B8350u: goto label_2b8350;
            case 0x2B8354u: goto label_2b8354;
            case 0x2B8358u: goto label_2b8358;
            case 0x2B835Cu: goto label_2b835c;
            case 0x2B8360u: goto label_2b8360;
            case 0x2B8364u: goto label_2b8364;
            case 0x2B8368u: goto label_2b8368;
            case 0x2B836Cu: goto label_2b836c;
            case 0x2B8370u: goto label_2b8370;
            case 0x2B8374u: goto label_2b8374;
            case 0x2B8378u: goto label_2b8378;
            case 0x2B837Cu: goto label_2b837c;
            case 0x2B8380u: goto label_2b8380;
            case 0x2B8384u: goto label_2b8384;
            case 0x2B8388u: goto label_2b8388;
            case 0x2B838Cu: goto label_2b838c;
            case 0x2B8390u: goto label_2b8390;
            case 0x2B8394u: goto label_2b8394;
            case 0x2B8398u: goto label_2b8398;
            case 0x2B839Cu: goto label_2b839c;
            case 0x2B83A0u: goto label_2b83a0;
            case 0x2B83A4u: goto label_2b83a4;
            case 0x2B83A8u: goto label_2b83a8;
            case 0x2B83ACu: goto label_2b83ac;
            case 0x2B83B0u: goto label_2b83b0;
            case 0x2B83B4u: goto label_2b83b4;
            case 0x2B83B8u: goto label_2b83b8;
            case 0x2B83BCu: goto label_2b83bc;
            case 0x2B83C0u: goto label_2b83c0;
            case 0x2B83C4u: goto label_2b83c4;
            case 0x2B83C8u: goto label_2b83c8;
            case 0x2B83CCu: goto label_2b83cc;
            case 0x2B83D0u: goto label_2b83d0;
            case 0x2B83D4u: goto label_2b83d4;
            case 0x2B83D8u: goto label_2b83d8;
            case 0x2B83DCu: goto label_2b83dc;
            case 0x2B83E0u: goto label_2b83e0;
            case 0x2B83E4u: goto label_2b83e4;
            case 0x2B83E8u: goto label_2b83e8;
            case 0x2B83ECu: goto label_2b83ec;
            case 0x2B83F0u: goto label_2b83f0;
            case 0x2B83F4u: goto label_2b83f4;
            case 0x2B83F8u: goto label_2b83f8;
            case 0x2B83FCu: goto label_2b83fc;
            case 0x2B8400u: goto label_2b8400;
            case 0x2B8404u: goto label_2b8404;
            case 0x2B8408u: goto label_2b8408;
            case 0x2B840Cu: goto label_2b840c;
            case 0x2B8410u: goto label_2b8410;
            case 0x2B8414u: goto label_2b8414;
            case 0x2B8418u: goto label_2b8418;
            case 0x2B841Cu: goto label_2b841c;
            case 0x2B8420u: goto label_2b8420;
            case 0x2B8424u: goto label_2b8424;
            case 0x2B8428u: goto label_2b8428;
            case 0x2B842Cu: goto label_2b842c;
            case 0x2B8430u: goto label_2b8430;
            case 0x2B8434u: goto label_2b8434;
            case 0x2B8438u: goto label_2b8438;
            case 0x2B843Cu: goto label_2b843c;
            case 0x2B8440u: goto label_2b8440;
            case 0x2B8444u: goto label_2b8444;
            case 0x2B8448u: goto label_2b8448;
            case 0x2B844Cu: goto label_2b844c;
            case 0x2B8450u: goto label_2b8450;
            case 0x2B8454u: goto label_2b8454;
            case 0x2B8458u: goto label_2b8458;
            case 0x2B845Cu: goto label_2b845c;
            case 0x2B8460u: goto label_2b8460;
            case 0x2B8464u: goto label_2b8464;
            case 0x2B8468u: goto label_2b8468;
            case 0x2B846Cu: goto label_2b846c;
            case 0x2B8470u: goto label_2b8470;
            case 0x2B8474u: goto label_2b8474;
            case 0x2B8478u: goto label_2b8478;
            case 0x2B847Cu: goto label_2b847c;
            case 0x2B8480u: goto label_2b8480;
            case 0x2B8484u: goto label_2b8484;
            case 0x2B8488u: goto label_2b8488;
            case 0x2B848Cu: goto label_2b848c;
            case 0x2B8490u: goto label_2b8490;
            case 0x2B8494u: goto label_2b8494;
            case 0x2B8498u: goto label_2b8498;
            case 0x2B849Cu: goto label_2b849c;
            case 0x2B84A0u: goto label_2b84a0;
            case 0x2B84A4u: goto label_2b84a4;
            case 0x2B84A8u: goto label_2b84a8;
            case 0x2B84ACu: goto label_2b84ac;
            case 0x2B84B0u: goto label_2b84b0;
            case 0x2B84B4u: goto label_2b84b4;
            case 0x2B84B8u: goto label_2b84b8;
            case 0x2B84BCu: goto label_2b84bc;
            case 0x2B84C0u: goto label_2b84c0;
            case 0x2B84C4u: goto label_2b84c4;
            case 0x2B84C8u: goto label_2b84c8;
            case 0x2B84CCu: goto label_2b84cc;
            case 0x2B84D0u: goto label_2b84d0;
            case 0x2B84D4u: goto label_2b84d4;
            case 0x2B84D8u: goto label_2b84d8;
            case 0x2B84DCu: goto label_2b84dc;
            case 0x2B84E0u: goto label_2b84e0;
            case 0x2B84E4u: goto label_2b84e4;
            case 0x2B84E8u: goto label_2b84e8;
            case 0x2B84ECu: goto label_2b84ec;
            case 0x2B84F0u: goto label_2b84f0;
            case 0x2B84F4u: goto label_2b84f4;
            case 0x2B84F8u: goto label_2b84f8;
            case 0x2B84FCu: goto label_2b84fc;
            case 0x2B8500u: goto label_2b8500;
            case 0x2B8504u: goto label_2b8504;
            case 0x2B8508u: goto label_2b8508;
            case 0x2B850Cu: goto label_2b850c;
            case 0x2B8510u: goto label_2b8510;
            case 0x2B8514u: goto label_2b8514;
            case 0x2B8518u: goto label_2b8518;
            case 0x2B851Cu: goto label_2b851c;
            case 0x2B8520u: goto label_2b8520;
            case 0x2B8524u: goto label_2b8524;
            case 0x2B8528u: goto label_2b8528;
            case 0x2B852Cu: goto label_2b852c;
            case 0x2B8530u: goto label_2b8530;
            case 0x2B8534u: goto label_2b8534;
            case 0x2B8538u: goto label_2b8538;
            case 0x2B853Cu: goto label_2b853c;
            case 0x2B8540u: goto label_2b8540;
            case 0x2B8544u: goto label_2b8544;
            case 0x2B8548u: goto label_2b8548;
            case 0x2B854Cu: goto label_2b854c;
            case 0x2B8550u: goto label_2b8550;
            case 0x2B8554u: goto label_2b8554;
            case 0x2B8558u: goto label_2b8558;
            case 0x2B855Cu: goto label_2b855c;
            case 0x2B8560u: goto label_2b8560;
            case 0x2B8564u: goto label_2b8564;
            case 0x2B8568u: goto label_2b8568;
            case 0x2B856Cu: goto label_2b856c;
            case 0x2B8570u: goto label_2b8570;
            case 0x2B8574u: goto label_2b8574;
            case 0x2B8578u: goto label_2b8578;
            case 0x2B857Cu: goto label_2b857c;
            case 0x2B8580u: goto label_2b8580;
            case 0x2B8584u: goto label_2b8584;
            case 0x2B8588u: goto label_2b8588;
            case 0x2B858Cu: goto label_2b858c;
            case 0x2B8590u: goto label_2b8590;
            case 0x2B8594u: goto label_2b8594;
            case 0x2B8598u: goto label_2b8598;
            case 0x2B859Cu: goto label_2b859c;
            case 0x2B85A0u: goto label_2b85a0;
            case 0x2B85A4u: goto label_2b85a4;
            case 0x2B85A8u: goto label_2b85a8;
            case 0x2B85ACu: goto label_2b85ac;
            case 0x2B85B0u: goto label_2b85b0;
            case 0x2B85B4u: goto label_2b85b4;
            case 0x2B85B8u: goto label_2b85b8;
            case 0x2B85BCu: goto label_2b85bc;
            case 0x2B85C0u: goto label_2b85c0;
            case 0x2B85C4u: goto label_2b85c4;
            case 0x2B85C8u: goto label_2b85c8;
            case 0x2B85CCu: goto label_2b85cc;
            case 0x2B85D0u: goto label_2b85d0;
            case 0x2B85D4u: goto label_2b85d4;
            case 0x2B85D8u: goto label_2b85d8;
            case 0x2B85DCu: goto label_2b85dc;
            case 0x2B85E0u: goto label_2b85e0;
            case 0x2B85E4u: goto label_2b85e4;
            case 0x2B85E8u: goto label_2b85e8;
            case 0x2B85ECu: goto label_2b85ec;
            case 0x2B85F0u: goto label_2b85f0;
            case 0x2B85F4u: goto label_2b85f4;
            case 0x2B85F8u: goto label_2b85f8;
            case 0x2B85FCu: goto label_2b85fc;
            case 0x2B8600u: goto label_2b8600;
            case 0x2B8604u: goto label_2b8604;
            case 0x2B8608u: goto label_2b8608;
            case 0x2B860Cu: goto label_2b860c;
            case 0x2B8610u: goto label_2b8610;
            case 0x2B8614u: goto label_2b8614;
            case 0x2B8618u: goto label_2b8618;
            case 0x2B861Cu: goto label_2b861c;
            case 0x2B8620u: goto label_2b8620;
            case 0x2B8624u: goto label_2b8624;
            case 0x2B8628u: goto label_2b8628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B8574u;
label_2b8574:
    // 0x2b8574: 0x1000000a
label_2b8578:
    if (ctx->pc == 0x2B8578u) {
        ctx->pc = 0x2B8578u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
        ctx->pc = 0x2B857Cu;
        goto label_2b857c;
    }
    ctx->pc = 0x2B8574u;
    {
        const bool branch_taken_0x2b8574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8578u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x2b8574) {
            ctx->pc = 0x2B85A0u;
            goto label_2b85a0;
        }
    }
    ctx->pc = 0x2B857Cu;
label_2b857c:
    // 0x2b857c: 0x10000008
label_2b8580:
    if (ctx->pc == 0x2B8580u) {
        ctx->pc = 0x2B8580u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
        ctx->pc = 0x2B8584u;
        goto label_2b8584;
    }
    ctx->pc = 0x2B857Cu;
    {
        const bool branch_taken_0x2b857c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8580u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x2b857c) {
            ctx->pc = 0x2B85A0u;
            goto label_2b85a0;
        }
    }
    ctx->pc = 0x2B8584u;
label_2b8584:
    // 0x2b8584: 0x10000007
label_2b8588:
    if (ctx->pc == 0x2B8588u) {
        ctx->pc = 0x2B8588u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 5));
        ctx->pc = 0x2B858Cu;
        goto label_2b858c;
    }
    ctx->pc = 0x2B8584u;
    {
        const bool branch_taken_0x2b8584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8588u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 5));
        if (branch_taken_0x2b8584) {
            ctx->pc = 0x2B85A4u;
            goto label_2b85a4;
        }
    }
    ctx->pc = 0x2B858Cu;
label_2b858c:
    // 0x2b858c: 0x51400
    ctx->pc = 0x2b858cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
label_2b8590:
    // 0x2b8590: 0x10000003
label_2b8594:
    if (ctx->pc == 0x2B8594u) {
        ctx->pc = 0x2B8594u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->pc = 0x2B8598u;
        goto label_2b8598;
    }
    ctx->pc = 0x2B8590u;
    {
        const bool branch_taken_0x2b8590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8594u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        if (branch_taken_0x2b8590) {
            ctx->pc = 0x2B85A0u;
            goto label_2b85a0;
        }
    }
    ctx->pc = 0x2B8598u;
label_2b8598:
    // 0x2b8598: 0x51600
    ctx->pc = 0x2b8598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
label_2b859c:
    // 0x2b859c: 0x21603
    ctx->pc = 0x2b859cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2b85a0:
    // 0x2b85a0: 0xafc20010
    ctx->pc = 0x2b85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_2b85a4:
    // 0x2b85a4: 0x10000014
label_2b85a8:
    if (ctx->pc == 0x2B85A8u) {
        ctx->pc = 0x2B85A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B85ACu;
        goto label_2b85ac;
    }
    ctx->pc = 0x2B85A4u;
    {
        const bool branch_taken_0x2b85a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B85A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b85a4) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B85ACu;
label_2b85ac:
    // 0x2b85ac: 0x3c04003b
    ctx->pc = 0x2b85acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b85b0:
    // 0x2b85b0: 0x24844650
    ctx->pc = 0x2b85b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b85b4:
    // 0x2b85b4: 0x24050020
    ctx->pc = 0x2b85b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b85b8:
    // 0x2b85b8: 0x3c06003b
    ctx->pc = 0x2b85b8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b85bc:
    // 0x2b85bc: 0x24c60d80
    ctx->pc = 0x2b85bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b85c0:
    // 0x2b85c0: 0xc0ad0d6
label_2b85c4:
    if (ctx->pc == 0x2B85C4u) {
        ctx->pc = 0x2B85C4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B85C8u;
        goto label_2b85c8;
    }
    ctx->pc = 0x2B85C0u;
    SET_GPR_U32(ctx, 31, 0x2B85C8u);
    ctx->pc = 0x2B85C4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85C8u; }
    }
    if (ctx->pc != 0x2B85C8u) { return; }
    ctx->pc = 0x2B85C8u;
label_2b85c8:
    // 0x2b85c8: 0x3c04003b
    ctx->pc = 0x2b85c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b85cc:
    // 0x2b85cc: 0xc0b4a34
label_2b85d0:
    if (ctx->pc == 0x2B85D0u) {
        ctx->pc = 0x2B85D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21304));
        ctx->pc = 0x2B85D4u;
        goto label_2b85d4;
    }
    ctx->pc = 0x2B85CCu;
    SET_GPR_U32(ctx, 31, 0x2B85D4u);
    ctx->pc = 0x2B85D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21304));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85D4u; }
    }
    if (ctx->pc != 0x2B85D4u) { return; }
    ctx->pc = 0x2B85D4u;
label_2b85d4:
    // 0x2b85d4: 0x3c04003b
    ctx->pc = 0x2b85d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b85d8:
    // 0x2b85d8: 0xc0b4a34
label_2b85dc:
    if (ctx->pc == 0x2B85DCu) {
        ctx->pc = 0x2B85DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B85E0u;
        goto label_2b85e0;
    }
    ctx->pc = 0x2B85D8u;
    SET_GPR_U32(ctx, 31, 0x2B85E0u);
    ctx->pc = 0x2B85DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85E0u; }
    }
    if (ctx->pc != 0x2B85E0u) { return; }
    ctx->pc = 0x2B85E0u;
label_2b85e0:
    // 0x2b85e0: 0x3c020037
    ctx->pc = 0x2b85e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b85e4:
    // 0x2b85e4: 0x8c4320ac
    ctx->pc = 0x2b85e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b85e8:
    // 0x2b85e8: 0x8c620048
    ctx->pc = 0x2b85e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b85ec:
    // 0x2b85ec: 0x34420001
    ctx->pc = 0x2b85ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b85f0:
    // 0x2b85f0: 0xac620048
    ctx->pc = 0x2b85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b85f4:
    // 0x2b85f4: 0x24020020
    ctx->pc = 0x2b85f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b85f8:
    // 0x2b85f8: 0xafc20000
    ctx->pc = 0x2b85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2b85fc:
    // 0x2b85fc: 0xdfbf0090
    ctx->pc = 0x2b85fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b8600:
    // 0x2b8600: 0xdfbe0080
    ctx->pc = 0x2b8600u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b8604:
    // 0x2b8604: 0xdfb70070
    ctx->pc = 0x2b8604u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b8608:
    // 0x2b8608: 0xdfb60060
    ctx->pc = 0x2b8608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b860c:
    // 0x2b860c: 0xdfb50050
    ctx->pc = 0x2b860cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8610:
    // 0x2b8610: 0xdfb40040
    ctx->pc = 0x2b8610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8614:
    // 0x2b8614: 0xdfb30030
    ctx->pc = 0x2b8614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b8618:
    // 0x2b8618: 0xdfb20020
    ctx->pc = 0x2b8618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b861c:
    // 0x2b861c: 0xdfb10010
    ctx->pc = 0x2b861cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8620:
    // 0x2b8620: 0xdfb00000
    ctx->pc = 0x2b8620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8624:
    // 0x2b8624: 0x3e00008
label_2b8628:
    if (ctx->pc == 0x2B8628u) {
        ctx->pc = 0x2B8628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2B862Cu;
        goto label_fallthrough_0x2b8624;
    }
    ctx->pc = 0x2B8624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7F30u: goto label_2b7f30;
            case 0x2B7F34u: goto label_2b7f34;
            case 0x2B7F38u: goto label_2b7f38;
            case 0x2B7F3Cu: goto label_2b7f3c;
            case 0x2B7F40u: goto label_2b7f40;
            case 0x2B7F44u: goto label_2b7f44;
            case 0x2B7F48u: goto label_2b7f48;
            case 0x2B7F4Cu: goto label_2b7f4c;
            case 0x2B7F50u: goto label_2b7f50;
            case 0x2B7F54u: goto label_2b7f54;
            case 0x2B7F58u: goto label_2b7f58;
            case 0x2B7F5Cu: goto label_2b7f5c;
            case 0x2B7F60u: goto label_2b7f60;
            case 0x2B7F64u: goto label_2b7f64;
            case 0x2B7F68u: goto label_2b7f68;
            case 0x2B7F6Cu: goto label_2b7f6c;
            case 0x2B7F70u: goto label_2b7f70;
            case 0x2B7F74u: goto label_2b7f74;
            case 0x2B7F78u: goto label_2b7f78;
            case 0x2B7F7Cu: goto label_2b7f7c;
            case 0x2B7F80u: goto label_2b7f80;
            case 0x2B7F84u: goto label_2b7f84;
            case 0x2B7F88u: goto label_2b7f88;
            case 0x2B7F8Cu: goto label_2b7f8c;
            case 0x2B7F90u: goto label_2b7f90;
            case 0x2B7F94u: goto label_2b7f94;
            case 0x2B7F98u: goto label_2b7f98;
            case 0x2B7F9Cu: goto label_2b7f9c;
            case 0x2B7FA0u: goto label_2b7fa0;
            case 0x2B7FA4u: goto label_2b7fa4;
            case 0x2B7FA8u: goto label_2b7fa8;
            case 0x2B7FACu: goto label_2b7fac;
            case 0x2B7FB0u: goto label_2b7fb0;
            case 0x2B7FB4u: goto label_2b7fb4;
            case 0x2B7FB8u: goto label_2b7fb8;
            case 0x2B7FBCu: goto label_2b7fbc;
            case 0x2B7FC0u: goto label_2b7fc0;
            case 0x2B7FC4u: goto label_2b7fc4;
            case 0x2B7FC8u: goto label_2b7fc8;
            case 0x2B7FCCu: goto label_2b7fcc;
            case 0x2B7FD0u: goto label_2b7fd0;
            case 0x2B7FD4u: goto label_2b7fd4;
            case 0x2B7FD8u: goto label_2b7fd8;
            case 0x2B7FDCu: goto label_2b7fdc;
            case 0x2B7FE0u: goto label_2b7fe0;
            case 0x2B7FE4u: goto label_2b7fe4;
            case 0x2B7FE8u: goto label_2b7fe8;
            case 0x2B7FECu: goto label_2b7fec;
            case 0x2B7FF0u: goto label_2b7ff0;
            case 0x2B7FF4u: goto label_2b7ff4;
            case 0x2B7FF8u: goto label_2b7ff8;
            case 0x2B7FFCu: goto label_2b7ffc;
            case 0x2B8000u: goto label_2b8000;
            case 0x2B8004u: goto label_2b8004;
            case 0x2B8008u: goto label_2b8008;
            case 0x2B800Cu: goto label_2b800c;
            case 0x2B8010u: goto label_2b8010;
            case 0x2B8014u: goto label_2b8014;
            case 0x2B8018u: goto label_2b8018;
            case 0x2B801Cu: goto label_2b801c;
            case 0x2B8020u: goto label_2b8020;
            case 0x2B8024u: goto label_2b8024;
            case 0x2B8028u: goto label_2b8028;
            case 0x2B802Cu: goto label_2b802c;
            case 0x2B8030u: goto label_2b8030;
            case 0x2B8034u: goto label_2b8034;
            case 0x2B8038u: goto label_2b8038;
            case 0x2B803Cu: goto label_2b803c;
            case 0x2B8040u: goto label_2b8040;
            case 0x2B8044u: goto label_2b8044;
            case 0x2B8048u: goto label_2b8048;
            case 0x2B804Cu: goto label_2b804c;
            case 0x2B8050u: goto label_2b8050;
            case 0x2B8054u: goto label_2b8054;
            case 0x2B8058u: goto label_2b8058;
            case 0x2B805Cu: goto label_2b805c;
            case 0x2B8060u: goto label_2b8060;
            case 0x2B8064u: goto label_2b8064;
            case 0x2B8068u: goto label_2b8068;
            case 0x2B806Cu: goto label_2b806c;
            case 0x2B8070u: goto label_2b8070;
            case 0x2B8074u: goto label_2b8074;
            case 0x2B8078u: goto label_2b8078;
            case 0x2B807Cu: goto label_2b807c;
            case 0x2B8080u: goto label_2b8080;
            case 0x2B8084u: goto label_2b8084;
            case 0x2B8088u: goto label_2b8088;
            case 0x2B808Cu: goto label_2b808c;
            case 0x2B8090u: goto label_2b8090;
            case 0x2B8094u: goto label_2b8094;
            case 0x2B8098u: goto label_2b8098;
            case 0x2B809Cu: goto label_2b809c;
            case 0x2B80A0u: goto label_2b80a0;
            case 0x2B80A4u: goto label_2b80a4;
            case 0x2B80A8u: goto label_2b80a8;
            case 0x2B80ACu: goto label_2b80ac;
            case 0x2B80B0u: goto label_2b80b0;
            case 0x2B80B4u: goto label_2b80b4;
            case 0x2B80B8u: goto label_2b80b8;
            case 0x2B80BCu: goto label_2b80bc;
            case 0x2B80C0u: goto label_2b80c0;
            case 0x2B80C4u: goto label_2b80c4;
            case 0x2B80C8u: goto label_2b80c8;
            case 0x2B80CCu: goto label_2b80cc;
            case 0x2B80D0u: goto label_2b80d0;
            case 0x2B80D4u: goto label_2b80d4;
            case 0x2B80D8u: goto label_2b80d8;
            case 0x2B80DCu: goto label_2b80dc;
            case 0x2B80E0u: goto label_2b80e0;
            case 0x2B80E4u: goto label_2b80e4;
            case 0x2B80E8u: goto label_2b80e8;
            case 0x2B80ECu: goto label_2b80ec;
            case 0x2B80F0u: goto label_2b80f0;
            case 0x2B80F4u: goto label_2b80f4;
            case 0x2B80F8u: goto label_2b80f8;
            case 0x2B80FCu: goto label_2b80fc;
            case 0x2B8100u: goto label_2b8100;
            case 0x2B8104u: goto label_2b8104;
            case 0x2B8108u: goto label_2b8108;
            case 0x2B810Cu: goto label_2b810c;
            case 0x2B8110u: goto label_2b8110;
            case 0x2B8114u: goto label_2b8114;
            case 0x2B8118u: goto label_2b8118;
            case 0x2B811Cu: goto label_2b811c;
            case 0x2B8120u: goto label_2b8120;
            case 0x2B8124u: goto label_2b8124;
            case 0x2B8128u: goto label_2b8128;
            case 0x2B812Cu: goto label_2b812c;
            case 0x2B8130u: goto label_2b8130;
            case 0x2B8134u: goto label_2b8134;
            case 0x2B8138u: goto label_2b8138;
            case 0x2B813Cu: goto label_2b813c;
            case 0x2B8140u: goto label_2b8140;
            case 0x2B8144u: goto label_2b8144;
            case 0x2B8148u: goto label_2b8148;
            case 0x2B814Cu: goto label_2b814c;
            case 0x2B8150u: goto label_2b8150;
            case 0x2B8154u: goto label_2b8154;
            case 0x2B8158u: goto label_2b8158;
            case 0x2B815Cu: goto label_2b815c;
            case 0x2B8160u: goto label_2b8160;
            case 0x2B8164u: goto label_2b8164;
            case 0x2B8168u: goto label_2b8168;
            case 0x2B816Cu: goto label_2b816c;
            case 0x2B8170u: goto label_2b8170;
            case 0x2B8174u: goto label_2b8174;
            case 0x2B8178u: goto label_2b8178;
            case 0x2B817Cu: goto label_2b817c;
            case 0x2B8180u: goto label_2b8180;
            case 0x2B8184u: goto label_2b8184;
            case 0x2B8188u: goto label_2b8188;
            case 0x2B818Cu: goto label_2b818c;
            case 0x2B8190u: goto label_2b8190;
            case 0x2B8194u: goto label_2b8194;
            case 0x2B8198u: goto label_2b8198;
            case 0x2B819Cu: goto label_2b819c;
            case 0x2B81A0u: goto label_2b81a0;
            case 0x2B81A4u: goto label_2b81a4;
            case 0x2B81A8u: goto label_2b81a8;
            case 0x2B81ACu: goto label_2b81ac;
            case 0x2B81B0u: goto label_2b81b0;
            case 0x2B81B4u: goto label_2b81b4;
            case 0x2B81B8u: goto label_2b81b8;
            case 0x2B81BCu: goto label_2b81bc;
            case 0x2B81C0u: goto label_2b81c0;
            case 0x2B81C4u: goto label_2b81c4;
            case 0x2B81C8u: goto label_2b81c8;
            case 0x2B81CCu: goto label_2b81cc;
            case 0x2B81D0u: goto label_2b81d0;
            case 0x2B81D4u: goto label_2b81d4;
            case 0x2B81D8u: goto label_2b81d8;
            case 0x2B81DCu: goto label_2b81dc;
            case 0x2B81E0u: goto label_2b81e0;
            case 0x2B81E4u: goto label_2b81e4;
            case 0x2B81E8u: goto label_2b81e8;
            case 0x2B81ECu: goto label_2b81ec;
            case 0x2B81F0u: goto label_2b81f0;
            case 0x2B81F4u: goto label_2b81f4;
            case 0x2B81F8u: goto label_2b81f8;
            case 0x2B81FCu: goto label_2b81fc;
            case 0x2B8200u: goto label_2b8200;
            case 0x2B8204u: goto label_2b8204;
            case 0x2B8208u: goto label_2b8208;
            case 0x2B820Cu: goto label_2b820c;
            case 0x2B8210u: goto label_2b8210;
            case 0x2B8214u: goto label_2b8214;
            case 0x2B8218u: goto label_2b8218;
            case 0x2B821Cu: goto label_2b821c;
            case 0x2B8220u: goto label_2b8220;
            case 0x2B8224u: goto label_2b8224;
            case 0x2B8228u: goto label_2b8228;
            case 0x2B822Cu: goto label_2b822c;
            case 0x2B8230u: goto label_2b8230;
            case 0x2B8234u: goto label_2b8234;
            case 0x2B8238u: goto label_2b8238;
            case 0x2B823Cu: goto label_2b823c;
            case 0x2B8240u: goto label_2b8240;
            case 0x2B8244u: goto label_2b8244;
            case 0x2B8248u: goto label_2b8248;
            case 0x2B824Cu: goto label_2b824c;
            case 0x2B8250u: goto label_2b8250;
            case 0x2B8254u: goto label_2b8254;
            case 0x2B8258u: goto label_2b8258;
            case 0x2B825Cu: goto label_2b825c;
            case 0x2B8260u: goto label_2b8260;
            case 0x2B8264u: goto label_2b8264;
            case 0x2B8268u: goto label_2b8268;
            case 0x2B826Cu: goto label_2b826c;
            case 0x2B8270u: goto label_2b8270;
            case 0x2B8274u: goto label_2b8274;
            case 0x2B8278u: goto label_2b8278;
            case 0x2B827Cu: goto label_2b827c;
            case 0x2B8280u: goto label_2b8280;
            case 0x2B8284u: goto label_2b8284;
            case 0x2B8288u: goto label_2b8288;
            case 0x2B828Cu: goto label_2b828c;
            case 0x2B8290u: goto label_2b8290;
            case 0x2B8294u: goto label_2b8294;
            case 0x2B8298u: goto label_2b8298;
            case 0x2B829Cu: goto label_2b829c;
            case 0x2B82A0u: goto label_2b82a0;
            case 0x2B82A4u: goto label_2b82a4;
            case 0x2B82A8u: goto label_2b82a8;
            case 0x2B82ACu: goto label_2b82ac;
            case 0x2B82B0u: goto label_2b82b0;
            case 0x2B82B4u: goto label_2b82b4;
            case 0x2B82B8u: goto label_2b82b8;
            case 0x2B82BCu: goto label_2b82bc;
            case 0x2B82C0u: goto label_2b82c0;
            case 0x2B82C4u: goto label_2b82c4;
            case 0x2B82C8u: goto label_2b82c8;
            case 0x2B82CCu: goto label_2b82cc;
            case 0x2B82D0u: goto label_2b82d0;
            case 0x2B82D4u: goto label_2b82d4;
            case 0x2B82D8u: goto label_2b82d8;
            case 0x2B82DCu: goto label_2b82dc;
            case 0x2B82E0u: goto label_2b82e0;
            case 0x2B82E4u: goto label_2b82e4;
            case 0x2B82E8u: goto label_2b82e8;
            case 0x2B82ECu: goto label_2b82ec;
            case 0x2B82F0u: goto label_2b82f0;
            case 0x2B82F4u: goto label_2b82f4;
            case 0x2B82F8u: goto label_2b82f8;
            case 0x2B82FCu: goto label_2b82fc;
            case 0x2B8300u: goto label_2b8300;
            case 0x2B8304u: goto label_2b8304;
            case 0x2B8308u: goto label_2b8308;
            case 0x2B830Cu: goto label_2b830c;
            case 0x2B8310u: goto label_2b8310;
            case 0x2B8314u: goto label_2b8314;
            case 0x2B8318u: goto label_2b8318;
            case 0x2B831Cu: goto label_2b831c;
            case 0x2B8320u: goto label_2b8320;
            case 0x2B8324u: goto label_2b8324;
            case 0x2B8328u: goto label_2b8328;
            case 0x2B832Cu: goto label_2b832c;
            case 0x2B8330u: goto label_2b8330;
            case 0x2B8334u: goto label_2b8334;
            case 0x2B8338u: goto label_2b8338;
            case 0x2B833Cu: goto label_2b833c;
            case 0x2B8340u: goto label_2b8340;
            case 0x2B8344u: goto label_2b8344;
            case 0x2B8348u: goto label_2b8348;
            case 0x2B834Cu: goto label_2b834c;
            case 0x2B8350u: goto label_2b8350;
            case 0x2B8354u: goto label_2b8354;
            case 0x2B8358u: goto label_2b8358;
            case 0x2B835Cu: goto label_2b835c;
            case 0x2B8360u: goto label_2b8360;
            case 0x2B8364u: goto label_2b8364;
            case 0x2B8368u: goto label_2b8368;
            case 0x2B836Cu: goto label_2b836c;
            case 0x2B8370u: goto label_2b8370;
            case 0x2B8374u: goto label_2b8374;
            case 0x2B8378u: goto label_2b8378;
            case 0x2B837Cu: goto label_2b837c;
            case 0x2B8380u: goto label_2b8380;
            case 0x2B8384u: goto label_2b8384;
            case 0x2B8388u: goto label_2b8388;
            case 0x2B838Cu: goto label_2b838c;
            case 0x2B8390u: goto label_2b8390;
            case 0x2B8394u: goto label_2b8394;
            case 0x2B8398u: goto label_2b8398;
            case 0x2B839Cu: goto label_2b839c;
            case 0x2B83A0u: goto label_2b83a0;
            case 0x2B83A4u: goto label_2b83a4;
            case 0x2B83A8u: goto label_2b83a8;
            case 0x2B83ACu: goto label_2b83ac;
            case 0x2B83B0u: goto label_2b83b0;
            case 0x2B83B4u: goto label_2b83b4;
            case 0x2B83B8u: goto label_2b83b8;
            case 0x2B83BCu: goto label_2b83bc;
            case 0x2B83C0u: goto label_2b83c0;
            case 0x2B83C4u: goto label_2b83c4;
            case 0x2B83C8u: goto label_2b83c8;
            case 0x2B83CCu: goto label_2b83cc;
            case 0x2B83D0u: goto label_2b83d0;
            case 0x2B83D4u: goto label_2b83d4;
            case 0x2B83D8u: goto label_2b83d8;
            case 0x2B83DCu: goto label_2b83dc;
            case 0x2B83E0u: goto label_2b83e0;
            case 0x2B83E4u: goto label_2b83e4;
            case 0x2B83E8u: goto label_2b83e8;
            case 0x2B83ECu: goto label_2b83ec;
            case 0x2B83F0u: goto label_2b83f0;
            case 0x2B83F4u: goto label_2b83f4;
            case 0x2B83F8u: goto label_2b83f8;
            case 0x2B83FCu: goto label_2b83fc;
            case 0x2B8400u: goto label_2b8400;
            case 0x2B8404u: goto label_2b8404;
            case 0x2B8408u: goto label_2b8408;
            case 0x2B840Cu: goto label_2b840c;
            case 0x2B8410u: goto label_2b8410;
            case 0x2B8414u: goto label_2b8414;
            case 0x2B8418u: goto label_2b8418;
            case 0x2B841Cu: goto label_2b841c;
            case 0x2B8420u: goto label_2b8420;
            case 0x2B8424u: goto label_2b8424;
            case 0x2B8428u: goto label_2b8428;
            case 0x2B842Cu: goto label_2b842c;
            case 0x2B8430u: goto label_2b8430;
            case 0x2B8434u: goto label_2b8434;
            case 0x2B8438u: goto label_2b8438;
            case 0x2B843Cu: goto label_2b843c;
            case 0x2B8440u: goto label_2b8440;
            case 0x2B8444u: goto label_2b8444;
            case 0x2B8448u: goto label_2b8448;
            case 0x2B844Cu: goto label_2b844c;
            case 0x2B8450u: goto label_2b8450;
            case 0x2B8454u: goto label_2b8454;
            case 0x2B8458u: goto label_2b8458;
            case 0x2B845Cu: goto label_2b845c;
            case 0x2B8460u: goto label_2b8460;
            case 0x2B8464u: goto label_2b8464;
            case 0x2B8468u: goto label_2b8468;
            case 0x2B846Cu: goto label_2b846c;
            case 0x2B8470u: goto label_2b8470;
            case 0x2B8474u: goto label_2b8474;
            case 0x2B8478u: goto label_2b8478;
            case 0x2B847Cu: goto label_2b847c;
            case 0x2B8480u: goto label_2b8480;
            case 0x2B8484u: goto label_2b8484;
            case 0x2B8488u: goto label_2b8488;
            case 0x2B848Cu: goto label_2b848c;
            case 0x2B8490u: goto label_2b8490;
            case 0x2B8494u: goto label_2b8494;
            case 0x2B8498u: goto label_2b8498;
            case 0x2B849Cu: goto label_2b849c;
            case 0x2B84A0u: goto label_2b84a0;
            case 0x2B84A4u: goto label_2b84a4;
            case 0x2B84A8u: goto label_2b84a8;
            case 0x2B84ACu: goto label_2b84ac;
            case 0x2B84B0u: goto label_2b84b0;
            case 0x2B84B4u: goto label_2b84b4;
            case 0x2B84B8u: goto label_2b84b8;
            case 0x2B84BCu: goto label_2b84bc;
            case 0x2B84C0u: goto label_2b84c0;
            case 0x2B84C4u: goto label_2b84c4;
            case 0x2B84C8u: goto label_2b84c8;
            case 0x2B84CCu: goto label_2b84cc;
            case 0x2B84D0u: goto label_2b84d0;
            case 0x2B84D4u: goto label_2b84d4;
            case 0x2B84D8u: goto label_2b84d8;
            case 0x2B84DCu: goto label_2b84dc;
            case 0x2B84E0u: goto label_2b84e0;
            case 0x2B84E4u: goto label_2b84e4;
            case 0x2B84E8u: goto label_2b84e8;
            case 0x2B84ECu: goto label_2b84ec;
            case 0x2B84F0u: goto label_2b84f0;
            case 0x2B84F4u: goto label_2b84f4;
            case 0x2B84F8u: goto label_2b84f8;
            case 0x2B84FCu: goto label_2b84fc;
            case 0x2B8500u: goto label_2b8500;
            case 0x2B8504u: goto label_2b8504;
            case 0x2B8508u: goto label_2b8508;
            case 0x2B850Cu: goto label_2b850c;
            case 0x2B8510u: goto label_2b8510;
            case 0x2B8514u: goto label_2b8514;
            case 0x2B8518u: goto label_2b8518;
            case 0x2B851Cu: goto label_2b851c;
            case 0x2B8520u: goto label_2b8520;
            case 0x2B8524u: goto label_2b8524;
            case 0x2B8528u: goto label_2b8528;
            case 0x2B852Cu: goto label_2b852c;
            case 0x2B8530u: goto label_2b8530;
            case 0x2B8534u: goto label_2b8534;
            case 0x2B8538u: goto label_2b8538;
            case 0x2B853Cu: goto label_2b853c;
            case 0x2B8540u: goto label_2b8540;
            case 0x2B8544u: goto label_2b8544;
            case 0x2B8548u: goto label_2b8548;
            case 0x2B854Cu: goto label_2b854c;
            case 0x2B8550u: goto label_2b8550;
            case 0x2B8554u: goto label_2b8554;
            case 0x2B8558u: goto label_2b8558;
            case 0x2B855Cu: goto label_2b855c;
            case 0x2B8560u: goto label_2b8560;
            case 0x2B8564u: goto label_2b8564;
            case 0x2B8568u: goto label_2b8568;
            case 0x2B856Cu: goto label_2b856c;
            case 0x2B8570u: goto label_2b8570;
            case 0x2B8574u: goto label_2b8574;
            case 0x2B8578u: goto label_2b8578;
            case 0x2B857Cu: goto label_2b857c;
            case 0x2B8580u: goto label_2b8580;
            case 0x2B8584u: goto label_2b8584;
            case 0x2B8588u: goto label_2b8588;
            case 0x2B858Cu: goto label_2b858c;
            case 0x2B8590u: goto label_2b8590;
            case 0x2B8594u: goto label_2b8594;
            case 0x2B8598u: goto label_2b8598;
            case 0x2B859Cu: goto label_2b859c;
            case 0x2B85A0u: goto label_2b85a0;
            case 0x2B85A4u: goto label_2b85a4;
            case 0x2B85A8u: goto label_2b85a8;
            case 0x2B85ACu: goto label_2b85ac;
            case 0x2B85B0u: goto label_2b85b0;
            case 0x2B85B4u: goto label_2b85b4;
            case 0x2B85B8u: goto label_2b85b8;
            case 0x2B85BCu: goto label_2b85bc;
            case 0x2B85C0u: goto label_2b85c0;
            case 0x2B85C4u: goto label_2b85c4;
            case 0x2B85C8u: goto label_2b85c8;
            case 0x2B85CCu: goto label_2b85cc;
            case 0x2B85D0u: goto label_2b85d0;
            case 0x2B85D4u: goto label_2b85d4;
            case 0x2B85D8u: goto label_2b85d8;
            case 0x2B85DCu: goto label_2b85dc;
            case 0x2B85E0u: goto label_2b85e0;
            case 0x2B85E4u: goto label_2b85e4;
            case 0x2B85E8u: goto label_2b85e8;
            case 0x2B85ECu: goto label_2b85ec;
            case 0x2B85F0u: goto label_2b85f0;
            case 0x2B85F4u: goto label_2b85f4;
            case 0x2B85F8u: goto label_2b85f8;
            case 0x2B85FCu: goto label_2b85fc;
            case 0x2B8600u: goto label_2b8600;
            case 0x2B8604u: goto label_2b8604;
            case 0x2B8608u: goto label_2b8608;
            case 0x2B860Cu: goto label_2b860c;
            case 0x2B8610u: goto label_2b8610;
            case 0x2B8614u: goto label_2b8614;
            case 0x2B8618u: goto label_2b8618;
            case 0x2B861Cu: goto label_2b861c;
            case 0x2B8620u: goto label_2b8620;
            case 0x2B8624u: goto label_2b8624;
            case 0x2B8628u: goto label_2b8628;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b8624:
    ctx->pc = 0x2B862Cu;
}
