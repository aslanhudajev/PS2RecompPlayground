#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: adjust_stuff
// Address: 0x280e78 - 0x2810ac
void adjust_stuff_0x280e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280e78u;

label_280e78:
    // 0x280e78: 0x27bdffb0
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_280e7c:
    // 0x280e7c: 0xffbf0040
    ctx->pc = 0x280e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_280e80:
    // 0x280e80: 0xffb30030
    ctx->pc = 0x280e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_280e84:
    // 0x280e84: 0xffb20020
    ctx->pc = 0x280e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_280e88:
    // 0x280e88: 0xffb10010
    ctx->pc = 0x280e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_280e8c:
    // 0x280e8c: 0xffb00000
    ctx->pc = 0x280e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_280e90:
    // 0x280e90: 0x80982d
    ctx->pc = 0x280e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280e94:
    // 0x280e94: 0xa0802d
    ctx->pc = 0x280e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_280e98:
    // 0x280e98: 0xc0a02c4
label_280e9c:
    if (ctx->pc == 0x280E9Cu) {
        ctx->pc = 0x280E9Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280EA0u;
        goto label_280ea0;
    }
    ctx->pc = 0x280E98u;
    SET_GPR_U32(ctx, 31, 0x280EA0u);
    ctx->pc = 0x280E9Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EA0u; }
    }
    if (ctx->pc != 0x280EA0u) { return; }
    ctx->pc = 0x280EA0u;
label_280ea0:
    // 0x280ea0: 0x1600007c
label_280ea4:
    if (ctx->pc == 0x280EA4u) {
        ctx->pc = 0x280EA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x280EA8u;
        goto label_280ea8;
    }
    ctx->pc = 0x280EA0u;
    {
        const bool branch_taken_0x280ea0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x280EA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x280ea0) {
            ctx->pc = 0x281094u;
            goto label_281094;
        }
    }
    ctx->pc = 0x280EA8u;
label_280ea8:
    // 0x280ea8: 0x1220007a
label_280eac:
    if (ctx->pc == 0x280EACu) {
        ctx->pc = 0x280EACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280EB0u;
        goto label_280eb0;
    }
    ctx->pc = 0x280EA8u;
    {
        const bool branch_taken_0x280ea8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x280EACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x280ea8) {
            ctx->pc = 0x281094u;
            goto label_281094;
        }
    }
    ctx->pc = 0x280EB0u;
label_280eb0:
    // 0x280eb0: 0x24032b00
    ctx->pc = 0x280eb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_280eb4:
    // 0x280eb4: 0x0
    ctx->pc = 0x280eb4u;
    // NOP
label_280eb8:
    // 0x280eb8: 0x2431818
    ctx->pc = 0x280eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_280ebc:
    // 0x280ebc: 0x3c020032
    ctx->pc = 0x280ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_280ec0:
    // 0x280ec0: 0x24421bc0
    ctx->pc = 0x280ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_280ec4:
    // 0x280ec4: 0x628021
    ctx->pc = 0x280ec4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_280ec8:
    // 0x280ec8: 0x8e0300fc
    ctx->pc = 0x280ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_280ecc:
    // 0x280ecc: 0x24020001
    ctx->pc = 0x280eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_280ed0:
    // 0x280ed0: 0x5462006c
label_280ed4:
    if (ctx->pc == 0x280ED4u) {
        ctx->pc = 0x280ED4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x280ED8u;
        goto label_280ed8;
    }
    ctx->pc = 0x280ED0u;
    {
        const bool branch_taken_0x280ed0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x280ed0) {
            ctx->pc = 0x280ED4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x281084u;
            goto label_281084;
        }
    }
    ctx->pc = 0x280ED8u;
label_280ed8:
    // 0x280ed8: 0x3c030031
    ctx->pc = 0x280ed8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_280edc:
    // 0x280edc: 0x24631b50
    ctx->pc = 0x280edcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6992));
label_280ee0:
    // 0x280ee0: 0x121080
    ctx->pc = 0x280ee0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_280ee4:
    // 0x280ee4: 0x431021
    ctx->pc = 0x280ee4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280ee8:
    // 0x280ee8: 0x8c420000
    ctx->pc = 0x280ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280eec:
    // 0x280eec: 0x3c030c00
    ctx->pc = 0x280eecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3072 << 16));
label_280ef0:
    // 0x280ef0: 0x431024
    ctx->pc = 0x280ef0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280ef4:
    // 0x280ef4: 0x10400003
label_280ef8:
    if (ctx->pc == 0x280EF8u) {
        ctx->pc = 0x280EF8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280EFCu;
        goto label_280efc;
    }
    ctx->pc = 0x280EF4u;
    {
        const bool branch_taken_0x280ef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280EF8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x280ef4) {
            ctx->pc = 0x280F04u;
            goto label_280f04;
        }
    }
    ctx->pc = 0x280EFCu;
label_280efc:
    // 0x280efc: 0x1000000a
label_280f00:
    if (ctx->pc == 0x280F00u) {
        ctx->pc = 0x280F00u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x280F04u;
        goto label_280f04;
    }
    ctx->pc = 0x280EFCu;
    {
        const bool branch_taken_0x280efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280F00u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x280efc) {
            ctx->pc = 0x280F28u;
            goto label_280f28;
        }
    }
    ctx->pc = 0x280F04u;
label_280f04:
    // 0x280f04: 0x3c030031
    ctx->pc = 0x280f04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_280f08:
    // 0x280f08: 0x24631b50
    ctx->pc = 0x280f08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6992));
label_280f0c:
    // 0x280f0c: 0x121080
    ctx->pc = 0x280f0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_280f10:
    // 0x280f10: 0x431021
    ctx->pc = 0x280f10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280f14:
    // 0x280f14: 0x8c430000
    ctx->pc = 0x280f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280f18:
    // 0x280f18: 0x3c020300
    ctx->pc = 0x280f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)768 << 16));
label_280f1c:
    // 0x280f1c: 0x621824
    ctx->pc = 0x280f1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_280f20:
    // 0x280f20: 0x2402ffff
    ctx->pc = 0x280f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_280f24:
    // 0x280f24: 0x43880b
    ctx->pc = 0x280f24u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
label_280f28:
    // 0x280f28: 0x52200056
label_280f2c:
    if (ctx->pc == 0x280F2Cu) {
        ctx->pc = 0x280F2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x280F30u;
        goto label_280f30;
    }
    ctx->pc = 0x280F28u;
    {
        const bool branch_taken_0x280f28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x280f28) {
            ctx->pc = 0x280F2Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x281084u;
            goto label_281084;
        }
    }
    ctx->pc = 0x280F30u;
label_280f30:
    // 0x280f30: 0x8e630000
    ctx->pc = 0x280f30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280f34:
    // 0x280f34: 0x2c620006
    ctx->pc = 0x280f34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_280f38:
    // 0x280f38: 0x10400051
label_280f3c:
    if (ctx->pc == 0x280F3Cu) {
        ctx->pc = 0x280F3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x280F40u;
        goto label_280f40;
    }
    ctx->pc = 0x280F38u;
    {
        const bool branch_taken_0x280f38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280F3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x280f38) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x280F40u;
label_280f40:
    // 0x280f40: 0x2442bf70
    ctx->pc = 0x280f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950768));
label_280f44:
    // 0x280f44: 0x31880
    ctx->pc = 0x280f44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_280f48:
    // 0x280f48: 0x621821
    ctx->pc = 0x280f48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_280f4c:
    // 0x280f4c: 0x8c620000
    ctx->pc = 0x280f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_280f50:
    // 0x280f50: 0x400008
label_280f54:
    if (ctx->pc == 0x280F54u) {
        ctx->pc = 0x280F58u;
        goto label_280f58;
    }
    ctx->pc = 0x280F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280E78u: goto label_280e78;
            case 0x280E7Cu: goto label_280e7c;
            case 0x280E80u: goto label_280e80;
            case 0x280E84u: goto label_280e84;
            case 0x280E88u: goto label_280e88;
            case 0x280E8Cu: goto label_280e8c;
            case 0x280E90u: goto label_280e90;
            case 0x280E94u: goto label_280e94;
            case 0x280E98u: goto label_280e98;
            case 0x280E9Cu: goto label_280e9c;
            case 0x280EA0u: goto label_280ea0;
            case 0x280EA4u: goto label_280ea4;
            case 0x280EA8u: goto label_280ea8;
            case 0x280EACu: goto label_280eac;
            case 0x280EB0u: goto label_280eb0;
            case 0x280EB4u: goto label_280eb4;
            case 0x280EB8u: goto label_280eb8;
            case 0x280EBCu: goto label_280ebc;
            case 0x280EC0u: goto label_280ec0;
            case 0x280EC4u: goto label_280ec4;
            case 0x280EC8u: goto label_280ec8;
            case 0x280ECCu: goto label_280ecc;
            case 0x280ED0u: goto label_280ed0;
            case 0x280ED4u: goto label_280ed4;
            case 0x280ED8u: goto label_280ed8;
            case 0x280EDCu: goto label_280edc;
            case 0x280EE0u: goto label_280ee0;
            case 0x280EE4u: goto label_280ee4;
            case 0x280EE8u: goto label_280ee8;
            case 0x280EECu: goto label_280eec;
            case 0x280EF0u: goto label_280ef0;
            case 0x280EF4u: goto label_280ef4;
            case 0x280EF8u: goto label_280ef8;
            case 0x280EFCu: goto label_280efc;
            case 0x280F00u: goto label_280f00;
            case 0x280F04u: goto label_280f04;
            case 0x280F08u: goto label_280f08;
            case 0x280F0Cu: goto label_280f0c;
            case 0x280F10u: goto label_280f10;
            case 0x280F14u: goto label_280f14;
            case 0x280F18u: goto label_280f18;
            case 0x280F1Cu: goto label_280f1c;
            case 0x280F20u: goto label_280f20;
            case 0x280F24u: goto label_280f24;
            case 0x280F28u: goto label_280f28;
            case 0x280F2Cu: goto label_280f2c;
            case 0x280F30u: goto label_280f30;
            case 0x280F34u: goto label_280f34;
            case 0x280F38u: goto label_280f38;
            case 0x280F3Cu: goto label_280f3c;
            case 0x280F40u: goto label_280f40;
            case 0x280F44u: goto label_280f44;
            case 0x280F48u: goto label_280f48;
            case 0x280F4Cu: goto label_280f4c;
            case 0x280F50u: goto label_280f50;
            case 0x280F54u: goto label_280f54;
            case 0x280F58u: goto label_280f58;
            case 0x280F5Cu: goto label_280f5c;
            case 0x280F60u: goto label_280f60;
            case 0x280F64u: goto label_280f64;
            case 0x280F68u: goto label_280f68;
            case 0x280F6Cu: goto label_280f6c;
            case 0x280F70u: goto label_280f70;
            case 0x280F74u: goto label_280f74;
            case 0x280F78u: goto label_280f78;
            case 0x280F7Cu: goto label_280f7c;
            case 0x280F80u: goto label_280f80;
            case 0x280F84u: goto label_280f84;
            case 0x280F88u: goto label_280f88;
            case 0x280F8Cu: goto label_280f8c;
            case 0x280F90u: goto label_280f90;
            case 0x280F94u: goto label_280f94;
            case 0x280F98u: goto label_280f98;
            case 0x280F9Cu: goto label_280f9c;
            case 0x280FA0u: goto label_280fa0;
            case 0x280FA4u: goto label_280fa4;
            case 0x280FA8u: goto label_280fa8;
            case 0x280FACu: goto label_280fac;
            case 0x280FB0u: goto label_280fb0;
            case 0x280FB4u: goto label_280fb4;
            case 0x280FB8u: goto label_280fb8;
            case 0x280FBCu: goto label_280fbc;
            case 0x280FC0u: goto label_280fc0;
            case 0x280FC4u: goto label_280fc4;
            case 0x280FC8u: goto label_280fc8;
            case 0x280FCCu: goto label_280fcc;
            case 0x280FD0u: goto label_280fd0;
            case 0x280FD4u: goto label_280fd4;
            case 0x280FD8u: goto label_280fd8;
            case 0x280FDCu: goto label_280fdc;
            case 0x280FE0u: goto label_280fe0;
            case 0x280FE4u: goto label_280fe4;
            case 0x280FE8u: goto label_280fe8;
            case 0x280FECu: goto label_280fec;
            case 0x280FF0u: goto label_280ff0;
            case 0x280FF4u: goto label_280ff4;
            case 0x280FF8u: goto label_280ff8;
            case 0x280FFCu: goto label_280ffc;
            case 0x281000u: goto label_281000;
            case 0x281004u: goto label_281004;
            case 0x281008u: goto label_281008;
            case 0x28100Cu: goto label_28100c;
            case 0x281010u: goto label_281010;
            case 0x281014u: goto label_281014;
            case 0x281018u: goto label_281018;
            case 0x28101Cu: goto label_28101c;
            case 0x281020u: goto label_281020;
            case 0x281024u: goto label_281024;
            case 0x281028u: goto label_281028;
            case 0x28102Cu: goto label_28102c;
            case 0x281030u: goto label_281030;
            case 0x281034u: goto label_281034;
            case 0x281038u: goto label_281038;
            case 0x28103Cu: goto label_28103c;
            case 0x281040u: goto label_281040;
            case 0x281044u: goto label_281044;
            case 0x281048u: goto label_281048;
            case 0x28104Cu: goto label_28104c;
            case 0x281050u: goto label_281050;
            case 0x281054u: goto label_281054;
            case 0x281058u: goto label_281058;
            case 0x28105Cu: goto label_28105c;
            case 0x281060u: goto label_281060;
            case 0x281064u: goto label_281064;
            case 0x281068u: goto label_281068;
            case 0x28106Cu: goto label_28106c;
            case 0x281070u: goto label_281070;
            case 0x281074u: goto label_281074;
            case 0x281078u: goto label_281078;
            case 0x28107Cu: goto label_28107c;
            case 0x281080u: goto label_281080;
            case 0x281084u: goto label_281084;
            case 0x281088u: goto label_281088;
            case 0x28108Cu: goto label_28108c;
            case 0x281090u: goto label_281090;
            case 0x281094u: goto label_281094;
            case 0x281098u: goto label_281098;
            case 0x28109Cu: goto label_28109c;
            case 0x2810A0u: goto label_2810a0;
            case 0x2810A4u: goto label_2810a4;
            case 0x2810A8u: goto label_2810a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280F58u;
label_280f58:
    // 0x280f58: 0xc6001a10
    ctx->pc = 0x280f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280f5c:
    // 0x280f5c: 0x46000064
    ctx->pc = 0x280f5cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_280f60:
    // 0x280f60: 0x44040800
    ctx->pc = 0x280f60u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
label_280f64:
    // 0x280f64: 0xc0a029e
label_280f68:
    if (ctx->pc == 0x280F68u) {
        ctx->pc = 0x280F6Cu;
        goto label_280f6c;
    }
    ctx->pc = 0x280F64u;
    SET_GPR_U32(ctx, 31, 0x280F6Cu);
    ctx->pc = 0x280A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_adjust_value_0x280a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F6Cu; }
    }
    if (ctx->pc != 0x280F6Cu) { return; }
    ctx->pc = 0x280F6Cu;
label_280f6c:
    // 0x280f6c: 0x511018
    ctx->pc = 0x280f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_280f70:
    // 0x280f70: 0x44820800
    ctx->pc = 0x280f70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_280f74:
    // 0x280f74: 0x46800860
    ctx->pc = 0x280f74u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_280f78:
    // 0x280f78: 0xc6001a10
    ctx->pc = 0x280f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280f7c:
    // 0x280f7c: 0x46000840
    ctx->pc = 0x280f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_280f80:
    // 0x280f80: 0x44800000
    ctx->pc = 0x280f80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_280f84:
    // 0x280f84: 0x46000836
    ctx->pc = 0x280f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280f88:
    // 0x280f88: 0x0
    ctx->pc = 0x280f88u;
    // NOP
label_280f8c:
    // 0x280f8c: 0x4500003c
label_280f90:
    if (ctx->pc == 0x280F90u) {
        ctx->pc = 0x280F90u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
        ctx->pc = 0x280F94u;
        goto label_280f94;
    }
    ctx->pc = 0x280F8Cu;
    {
        const bool branch_taken_0x280f8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280F90u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
        if (branch_taken_0x280f8c) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x280F94u;
label_280f94:
    // 0x280f94: 0x3c013f80
    ctx->pc = 0x280f94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_280f98:
    // 0x280f98: 0x44810000
    ctx->pc = 0x280f98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_280f9c:
    // 0x280f9c: 0x10000038
label_280fa0:
    if (ctx->pc == 0x280FA0u) {
        ctx->pc = 0x280FA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
        ctx->pc = 0x280FA4u;
        goto label_280fa4;
    }
    ctx->pc = 0x280F9Cu;
    {
        const bool branch_taken_0x280f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280FA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
        if (branch_taken_0x280f9c) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x280FA4u;
label_280fa4:
    // 0x280fa4: 0x240202d
    ctx->pc = 0x280fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_280fa8:
    // 0x280fa8: 0xc08d2fa
label_280fac:
    if (ctx->pc == 0x280FACu) {
        ctx->pc = 0x280FACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280FB0u;
        goto label_280fb0;
    }
    ctx->pc = 0x280FA8u;
    SET_GPR_U32(ctx, 31, 0x280FB0u);
    ctx->pc = 0x280FACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        IncLevel_0x234be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FB0u; }
    }
    if (ctx->pc != 0x280FB0u) { return; }
    ctx->pc = 0x280FB0u;
label_280fb0:
    // 0x280fb0: 0x10000034
label_280fb4:
    if (ctx->pc == 0x280FB4u) {
        ctx->pc = 0x280FB4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x280FB8u;
        goto label_280fb8;
    }
    ctx->pc = 0x280FB0u;
    {
        const bool branch_taken_0x280fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280FB4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x280fb0) {
            ctx->pc = 0x281084u;
            goto label_281084;
        }
    }
    ctx->pc = 0x280FB8u;
label_280fb8:
    // 0x280fb8: 0xc0a029e
label_280fbc:
    if (ctx->pc == 0x280FBCu) {
        ctx->pc = 0x280FBCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
        ctx->pc = 0x280FC0u;
        goto label_280fc0;
    }
    ctx->pc = 0x280FB8u;
    SET_GPR_U32(ctx, 31, 0x280FC0u);
    ctx->pc = 0x280FBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
    ctx->pc = 0x280A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_adjust_value_0x280a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FC0u; }
    }
    if (ctx->pc != 0x280FC0u) { return; }
    ctx->pc = 0x280FC0u;
label_280fc0:
    // 0x280fc0: 0x511018
    ctx->pc = 0x280fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_280fc4:
    // 0x280fc4: 0x8e031a20
    ctx->pc = 0x280fc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_280fc8:
    // 0x280fc8: 0x431021
    ctx->pc = 0x280fc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280fcc:
    // 0x280fcc: 0x441002c
label_280fd0:
    if (ctx->pc == 0x280FD0u) {
        ctx->pc = 0x280FD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 2));
        ctx->pc = 0x280FD4u;
        goto label_280fd4;
    }
    ctx->pc = 0x280FCCu;
    {
        const bool branch_taken_0x280fcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x280FD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 2));
        if (branch_taken_0x280fcc) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x280FD4u;
label_280fd4:
    // 0x280fd4: 0x1000002a
label_280fd8:
    if (ctx->pc == 0x280FD8u) {
        ctx->pc = 0x280FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 0));
        ctx->pc = 0x280FDCu;
        goto label_280fdc;
    }
    ctx->pc = 0x280FD4u;
    {
        const bool branch_taken_0x280fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 0));
        if (branch_taken_0x280fd4) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x280FDCu;
label_280fdc:
    // 0x280fdc: 0x8e021a14
    ctx->pc = 0x280fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6676)));
label_280fe0:
    // 0x280fe0: 0x2221821
    ctx->pc = 0x280fe0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_280fe4:
    // 0x280fe4: 0x4600006
label_280fe8:
    if (ctx->pc == 0x280FE8u) {
        ctx->pc = 0x280FE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 3));
        ctx->pc = 0x280FECu;
        goto label_280fec;
    }
    ctx->pc = 0x280FE4u;
    {
        const bool branch_taken_0x280fe4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x280FE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 3));
        if (branch_taken_0x280fe4) {
            ctx->pc = 0x281000u;
            goto label_281000;
        }
    }
    ctx->pc = 0x280FECu;
label_280fec:
    // 0x280fec: 0x60282d
    ctx->pc = 0x280fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_280ff0:
    // 0x280ff0: 0x28a3000a
    ctx->pc = 0x280ff0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
label_280ff4:
    // 0x280ff4: 0x24020009
    ctx->pc = 0x280ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_280ff8:
    // 0x280ff8: 0x10000002
label_280ffc:
    if (ctx->pc == 0x280FFCu) {
        ctx->pc = 0x280FFCu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x281000u;
        goto label_281000;
    }
    ctx->pc = 0x280FF8u;
    {
        const bool branch_taken_0x280ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280FFCu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x280ff8) {
            ctx->pc = 0x281004u;
            goto label_281004;
        }
    }
    ctx->pc = 0x281000u;
label_281000:
    // 0x281000: 0x282d
    ctx->pc = 0x281000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281004:
    // 0x281004: 0x1000001e
label_281008:
    if (ctx->pc == 0x281008u) {
        ctx->pc = 0x281008u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 5));
        ctx->pc = 0x28100Cu;
        goto label_28100c;
    }
    ctx->pc = 0x281004u;
    {
        const bool branch_taken_0x281004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281008u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 5));
        if (branch_taken_0x281004) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x28100Cu;
label_28100c:
    // 0x28100c: 0x8e021a18
    ctx->pc = 0x28100cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6680)));
label_281010:
    // 0x281010: 0x2221821
    ctx->pc = 0x281010u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_281014:
    // 0x281014: 0x4600006
label_281018:
    if (ctx->pc == 0x281018u) {
        ctx->pc = 0x281018u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 3));
        ctx->pc = 0x28101Cu;
        goto label_28101c;
    }
    ctx->pc = 0x281014u;
    {
        const bool branch_taken_0x281014 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x281018u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 3));
        if (branch_taken_0x281014) {
            ctx->pc = 0x281030u;
            goto label_281030;
        }
    }
    ctx->pc = 0x28101Cu;
label_28101c:
    // 0x28101c: 0x60282d
    ctx->pc = 0x28101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_281020:
    // 0x281020: 0x28a3000a
    ctx->pc = 0x281020u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
label_281024:
    // 0x281024: 0x24020009
    ctx->pc = 0x281024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_281028:
    // 0x281028: 0x10000002
label_28102c:
    if (ctx->pc == 0x28102Cu) {
        ctx->pc = 0x28102Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x281030u;
        goto label_281030;
    }
    ctx->pc = 0x281028u;
    {
        const bool branch_taken_0x281028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28102Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x281028) {
            ctx->pc = 0x281034u;
            goto label_281034;
        }
    }
    ctx->pc = 0x281030u;
label_281030:
    // 0x281030: 0x282d
    ctx->pc = 0x281030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281034:
    // 0x281034: 0x10000012
label_281038:
    if (ctx->pc == 0x281038u) {
        ctx->pc = 0x281038u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 5));
        ctx->pc = 0x28103Cu;
        goto label_28103c;
    }
    ctx->pc = 0x281034u;
    {
        const bool branch_taken_0x281034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281038u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 5));
        if (branch_taken_0x281034) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x28103Cu;
label_28103c:
    // 0x28103c: 0x44910800
    ctx->pc = 0x28103cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 17);
label_281040:
    // 0x281040: 0x46800860
    ctx->pc = 0x281040u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_281044:
    // 0x281044: 0xc6000800
    ctx->pc = 0x281044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281048:
    // 0x281048: 0x46000840
    ctx->pc = 0x281048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28104c:
    // 0x28104c: 0x44800000
    ctx->pc = 0x28104cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_281050:
    // 0x281050: 0x46000834
    ctx->pc = 0x281050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281054:
    // 0x281054: 0x0
    ctx->pc = 0x281054u;
    // NOP
label_281058:
    // 0x281058: 0x45010008
label_28105c:
    if (ctx->pc == 0x28105Cu) {
        ctx->pc = 0x28105Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
        ctx->pc = 0x281060u;
        goto label_281060;
    }
    ctx->pc = 0x281058u;
    {
        const bool branch_taken_0x281058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28105Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
        if (branch_taken_0x281058) {
            ctx->pc = 0x28107Cu;
            goto label_28107c;
        }
    }
    ctx->pc = 0x281060u;
label_281060:
    // 0x281060: 0xc6010800
    ctx->pc = 0x281060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281064:
    // 0x281064: 0x3c0142c8
    ctx->pc = 0x281064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
label_281068:
    // 0x281068: 0x44810000
    ctx->pc = 0x281068u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_28106c:
    // 0x28106c: 0x46010034
    ctx->pc = 0x28106cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281070:
    // 0x281070: 0x0
    ctx->pc = 0x281070u;
    // NOP
label_281074:
    // 0x281074: 0x45020001
label_281078:
    if (ctx->pc == 0x281078u) {
        ctx->pc = 0x281078u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x28107Cu;
        goto label_28107c;
    }
    ctx->pc = 0x281074u;
    {
        const bool branch_taken_0x281074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281074) {
            ctx->pc = 0x281078u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x28107Cu;
            goto label_28107c;
        }
    }
    ctx->pc = 0x28107Cu;
label_28107c:
    // 0x28107c: 0xe6000800
    ctx->pc = 0x28107cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
label_281080:
    // 0x281080: 0x26520001
    ctx->pc = 0x281080u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_281084:
    // 0x281084: 0x2a420004
    ctx->pc = 0x281084u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_281088:
    // 0x281088: 0x1440ff8b
label_28108c:
    if (ctx->pc == 0x28108Cu) {
        ctx->pc = 0x28108Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        ctx->pc = 0x281090u;
        goto label_281090;
    }
    ctx->pc = 0x281088u;
    {
        const bool branch_taken_0x281088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28108Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x281088) {
            ctx->pc = 0x280EB8u;
            goto label_280eb8;
        }
    }
    ctx->pc = 0x281090u;
label_281090:
    // 0x281090: 0xdfbf0040
    ctx->pc = 0x281090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_281094:
    // 0x281094: 0xdfb30030
    ctx->pc = 0x281094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_281098:
    // 0x281098: 0xdfb20020
    ctx->pc = 0x281098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28109c:
    // 0x28109c: 0xdfb10010
    ctx->pc = 0x28109cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2810a0:
    // 0x2810a0: 0xdfb00000
    ctx->pc = 0x2810a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2810a4:
    // 0x2810a4: 0x3e00008
label_2810a8:
    if (ctx->pc == 0x2810A8u) {
        ctx->pc = 0x2810A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2810ACu;
        goto label_fallthrough_0x2810a4;
    }
    ctx->pc = 0x2810A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2810A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280E78u: goto label_280e78;
            case 0x280E7Cu: goto label_280e7c;
            case 0x280E80u: goto label_280e80;
            case 0x280E84u: goto label_280e84;
            case 0x280E88u: goto label_280e88;
            case 0x280E8Cu: goto label_280e8c;
            case 0x280E90u: goto label_280e90;
            case 0x280E94u: goto label_280e94;
            case 0x280E98u: goto label_280e98;
            case 0x280E9Cu: goto label_280e9c;
            case 0x280EA0u: goto label_280ea0;
            case 0x280EA4u: goto label_280ea4;
            case 0x280EA8u: goto label_280ea8;
            case 0x280EACu: goto label_280eac;
            case 0x280EB0u: goto label_280eb0;
            case 0x280EB4u: goto label_280eb4;
            case 0x280EB8u: goto label_280eb8;
            case 0x280EBCu: goto label_280ebc;
            case 0x280EC0u: goto label_280ec0;
            case 0x280EC4u: goto label_280ec4;
            case 0x280EC8u: goto label_280ec8;
            case 0x280ECCu: goto label_280ecc;
            case 0x280ED0u: goto label_280ed0;
            case 0x280ED4u: goto label_280ed4;
            case 0x280ED8u: goto label_280ed8;
            case 0x280EDCu: goto label_280edc;
            case 0x280EE0u: goto label_280ee0;
            case 0x280EE4u: goto label_280ee4;
            case 0x280EE8u: goto label_280ee8;
            case 0x280EECu: goto label_280eec;
            case 0x280EF0u: goto label_280ef0;
            case 0x280EF4u: goto label_280ef4;
            case 0x280EF8u: goto label_280ef8;
            case 0x280EFCu: goto label_280efc;
            case 0x280F00u: goto label_280f00;
            case 0x280F04u: goto label_280f04;
            case 0x280F08u: goto label_280f08;
            case 0x280F0Cu: goto label_280f0c;
            case 0x280F10u: goto label_280f10;
            case 0x280F14u: goto label_280f14;
            case 0x280F18u: goto label_280f18;
            case 0x280F1Cu: goto label_280f1c;
            case 0x280F20u: goto label_280f20;
            case 0x280F24u: goto label_280f24;
            case 0x280F28u: goto label_280f28;
            case 0x280F2Cu: goto label_280f2c;
            case 0x280F30u: goto label_280f30;
            case 0x280F34u: goto label_280f34;
            case 0x280F38u: goto label_280f38;
            case 0x280F3Cu: goto label_280f3c;
            case 0x280F40u: goto label_280f40;
            case 0x280F44u: goto label_280f44;
            case 0x280F48u: goto label_280f48;
            case 0x280F4Cu: goto label_280f4c;
            case 0x280F50u: goto label_280f50;
            case 0x280F54u: goto label_280f54;
            case 0x280F58u: goto label_280f58;
            case 0x280F5Cu: goto label_280f5c;
            case 0x280F60u: goto label_280f60;
            case 0x280F64u: goto label_280f64;
            case 0x280F68u: goto label_280f68;
            case 0x280F6Cu: goto label_280f6c;
            case 0x280F70u: goto label_280f70;
            case 0x280F74u: goto label_280f74;
            case 0x280F78u: goto label_280f78;
            case 0x280F7Cu: goto label_280f7c;
            case 0x280F80u: goto label_280f80;
            case 0x280F84u: goto label_280f84;
            case 0x280F88u: goto label_280f88;
            case 0x280F8Cu: goto label_280f8c;
            case 0x280F90u: goto label_280f90;
            case 0x280F94u: goto label_280f94;
            case 0x280F98u: goto label_280f98;
            case 0x280F9Cu: goto label_280f9c;
            case 0x280FA0u: goto label_280fa0;
            case 0x280FA4u: goto label_280fa4;
            case 0x280FA8u: goto label_280fa8;
            case 0x280FACu: goto label_280fac;
            case 0x280FB0u: goto label_280fb0;
            case 0x280FB4u: goto label_280fb4;
            case 0x280FB8u: goto label_280fb8;
            case 0x280FBCu: goto label_280fbc;
            case 0x280FC0u: goto label_280fc0;
            case 0x280FC4u: goto label_280fc4;
            case 0x280FC8u: goto label_280fc8;
            case 0x280FCCu: goto label_280fcc;
            case 0x280FD0u: goto label_280fd0;
            case 0x280FD4u: goto label_280fd4;
            case 0x280FD8u: goto label_280fd8;
            case 0x280FDCu: goto label_280fdc;
            case 0x280FE0u: goto label_280fe0;
            case 0x280FE4u: goto label_280fe4;
            case 0x280FE8u: goto label_280fe8;
            case 0x280FECu: goto label_280fec;
            case 0x280FF0u: goto label_280ff0;
            case 0x280FF4u: goto label_280ff4;
            case 0x280FF8u: goto label_280ff8;
            case 0x280FFCu: goto label_280ffc;
            case 0x281000u: goto label_281000;
            case 0x281004u: goto label_281004;
            case 0x281008u: goto label_281008;
            case 0x28100Cu: goto label_28100c;
            case 0x281010u: goto label_281010;
            case 0x281014u: goto label_281014;
            case 0x281018u: goto label_281018;
            case 0x28101Cu: goto label_28101c;
            case 0x281020u: goto label_281020;
            case 0x281024u: goto label_281024;
            case 0x281028u: goto label_281028;
            case 0x28102Cu: goto label_28102c;
            case 0x281030u: goto label_281030;
            case 0x281034u: goto label_281034;
            case 0x281038u: goto label_281038;
            case 0x28103Cu: goto label_28103c;
            case 0x281040u: goto label_281040;
            case 0x281044u: goto label_281044;
            case 0x281048u: goto label_281048;
            case 0x28104Cu: goto label_28104c;
            case 0x281050u: goto label_281050;
            case 0x281054u: goto label_281054;
            case 0x281058u: goto label_281058;
            case 0x28105Cu: goto label_28105c;
            case 0x281060u: goto label_281060;
            case 0x281064u: goto label_281064;
            case 0x281068u: goto label_281068;
            case 0x28106Cu: goto label_28106c;
            case 0x281070u: goto label_281070;
            case 0x281074u: goto label_281074;
            case 0x281078u: goto label_281078;
            case 0x28107Cu: goto label_28107c;
            case 0x281080u: goto label_281080;
            case 0x281084u: goto label_281084;
            case 0x281088u: goto label_281088;
            case 0x28108Cu: goto label_28108c;
            case 0x281090u: goto label_281090;
            case 0x281094u: goto label_281094;
            case 0x281098u: goto label_281098;
            case 0x28109Cu: goto label_28109c;
            case 0x2810A0u: goto label_2810a0;
            case 0x2810A4u: goto label_2810a4;
            case 0x2810A8u: goto label_2810a8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2810a4:
    ctx->pc = 0x2810ACu;
}
