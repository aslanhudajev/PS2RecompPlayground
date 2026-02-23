#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WalkNoisily__10PeopleTaskFv
// Address: 0x208fa0 - 0x209138
void WalkNoisily__10PeopleTaskFv_0x208fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WalkNoisily__10PeopleTaskFv");


    ctx->pc = 0x208fa0u;

    // 0x208fa0: 0x27bdffd0
    ctx->pc = 0x208fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208fa4: 0x7fbf0020
    ctx->pc = 0x208fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x208fa8: 0x7fb10010
    ctx->pc = 0x208fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x208fac: 0x7fb00000
    ctx->pc = 0x208facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208fb0: 0x70808e28
    ctx->pc = 0x208fb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x208fb4: 0x8c840034
    ctx->pc = 0x208fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x208fb8: 0x2403181d
    ctx->pc = 0x208fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6173));
    // 0x208fbc: 0x10830038
    ctx->pc = 0x208FBCu;
    {
        const bool branch_taken_0x208fbc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x208FC0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208fbc) {
            ctx->pc = 0x2090A0u;
            goto label_2090a0;
        }
    }
    ctx->pc = 0x208FC4u;
    // 0x208fc4: 0x2403189d
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6301));
    // 0x208fc8: 0x10830020
    ctx->pc = 0x208FC8u;
    {
        const bool branch_taken_0x208fc8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x208FCCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6119));
        if (branch_taken_0x208fc8) {
            ctx->pc = 0x20904Cu;
            goto label_20904c;
        }
    }
    ctx->pc = 0x208FD0u;
    // 0x208fd0: 0x10830003
    ctx->pc = 0x208FD0u;
    {
        const bool branch_taken_0x208fd0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x208fd0) {
            ctx->pc = 0x208FE0u;
            goto label_208fe0;
        }
    }
    ctx->pc = 0x208FD8u;
    // 0x208fd8: 0x10000046
    ctx->pc = 0x208FD8u;
    {
        const bool branch_taken_0x208fd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208FDCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7536)));
        if (branch_taken_0x208fd8) {
            ctx->pc = 0x2090F4u;
            goto label_2090f4;
        }
    }
    ctx->pc = 0x208FE0u;
label_208fe0:
    // 0x208fe0: 0xc6200044
    ctx->pc = 0x208fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208fe4: 0x24030253
    ctx->pc = 0x208fe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 595));
    // 0x208fe8: 0x46000024
    ctx->pc = 0x208fe8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x208fec: 0x44040000
    ctx->pc = 0x208fecu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x208ff0: 0x0
    ctx->pc = 0x208ff0u;
    // NOP
    // 0x208ff4: 0x50830013
    ctx->pc = 0x208FF4u;
    {
        const bool branch_taken_0x208ff4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x208ff4) {
            ctx->pc = 0x208FF8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x209044u;
            goto label_209044;
        }
    }
    ctx->pc = 0x208FFCu;
    // 0x208ffc: 0x24030233
    ctx->pc = 0x208ffcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 563));
    // 0x209000: 0x1083000f
    ctx->pc = 0x209000u;
    {
        const bool branch_taken_0x209000 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x209004u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 515));
        if (branch_taken_0x209000) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209008u;
    // 0x209008: 0x1083000d
    ctx->pc = 0x209008u;
    {
        const bool branch_taken_0x209008 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20900Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 486));
        if (branch_taken_0x209008) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209010u;
    // 0x209010: 0x1083000b
    ctx->pc = 0x209010u;
    {
        const bool branch_taken_0x209010 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x209014u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 472));
        if (branch_taken_0x209010) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209018u;
    // 0x209018: 0x10830009
    ctx->pc = 0x209018u;
    {
        const bool branch_taken_0x209018 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20901Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 436));
        if (branch_taken_0x209018) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209020u;
    // 0x209020: 0x10830007
    ctx->pc = 0x209020u;
    {
        const bool branch_taken_0x209020 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x209024u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 411));
        if (branch_taken_0x209020) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209028u;
    // 0x209028: 0x10830005
    ctx->pc = 0x209028u;
    {
        const bool branch_taken_0x209028 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20902Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 334));
        if (branch_taken_0x209028) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209030u;
    // 0x209030: 0x10830003
    ctx->pc = 0x209030u;
    {
        const bool branch_taken_0x209030 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x209030) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209038u;
    // 0x209038: 0x10000030
    ctx->pc = 0x209038u;
    {
        const bool branch_taken_0x209038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209038) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x209040u;
label_209040:
    // 0x209040: 0x24100001
    ctx->pc = 0x209040u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_209044:
    // 0x209044: 0x1000002d
    ctx->pc = 0x209044u;
    {
        const bool branch_taken_0x209044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209044) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x20904Cu;
label_20904c:
    // 0x20904c: 0xc6200044
    ctx->pc = 0x20904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209050: 0x2403024e
    ctx->pc = 0x209050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 590));
    // 0x209054: 0x46000024
    ctx->pc = 0x209054u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x209058: 0x44040000
    ctx->pc = 0x209058u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x20905c: 0x0
    ctx->pc = 0x20905cu;
    // NOP
    // 0x209060: 0x5083000d
    ctx->pc = 0x209060u;
    {
        const bool branch_taken_0x209060 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x209060) {
            ctx->pc = 0x209064u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x209098u;
            goto label_209098;
        }
    }
    ctx->pc = 0x209068u;
    // 0x209068: 0x2403021c
    ctx->pc = 0x209068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 540));
    // 0x20906c: 0x10830009
    ctx->pc = 0x20906Cu;
    {
        const bool branch_taken_0x20906c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x209070u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 520));
        if (branch_taken_0x20906c) {
            ctx->pc = 0x209094u;
            goto label_209094;
        }
    }
    ctx->pc = 0x209074u;
    // 0x209074: 0x10830007
    ctx->pc = 0x209074u;
    {
        const bool branch_taken_0x209074 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x209078u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 460));
        if (branch_taken_0x209074) {
            ctx->pc = 0x209094u;
            goto label_209094;
        }
    }
    ctx->pc = 0x20907Cu;
    // 0x20907c: 0x10830005
    ctx->pc = 0x20907Cu;
    {
        const bool branch_taken_0x20907c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x209080u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 380));
        if (branch_taken_0x20907c) {
            ctx->pc = 0x209094u;
            goto label_209094;
        }
    }
    ctx->pc = 0x209084u;
    // 0x209084: 0x10830003
    ctx->pc = 0x209084u;
    {
        const bool branch_taken_0x209084 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x209084) {
            ctx->pc = 0x209094u;
            goto label_209094;
        }
    }
    ctx->pc = 0x20908Cu;
    // 0x20908c: 0x1000001b
    ctx->pc = 0x20908Cu;
    {
        const bool branch_taken_0x20908c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20908c) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x209094u;
label_209094:
    // 0x209094: 0x24100001
    ctx->pc = 0x209094u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_209098:
    // 0x209098: 0x10000018
    ctx->pc = 0x209098u;
    {
        const bool branch_taken_0x209098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209098) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x2090A0u;
label_2090a0:
    // 0x2090a0: 0xc6200044
    ctx->pc = 0x2090a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2090a4: 0x240300b3
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 179));
    // 0x2090a8: 0x46000024
    ctx->pc = 0x2090a8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2090ac: 0x44040000
    ctx->pc = 0x2090acu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x2090b0: 0x0
    ctx->pc = 0x2090b0u;
    // NOP
    // 0x2090b4: 0x5083000d
    ctx->pc = 0x2090B4u;
    {
        const bool branch_taken_0x2090b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2090b4) {
            ctx->pc = 0x2090B8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2090ECu;
            goto label_2090ec;
        }
    }
    ctx->pc = 0x2090BCu;
    // 0x2090bc: 0x240300a1
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 161));
    // 0x2090c0: 0x10830009
    ctx->pc = 0x2090C0u;
    {
        const bool branch_taken_0x2090c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2090C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 138));
        if (branch_taken_0x2090c0) {
            ctx->pc = 0x2090E8u;
            goto label_2090e8;
        }
    }
    ctx->pc = 0x2090C8u;
    // 0x2090c8: 0x10830007
    ctx->pc = 0x2090C8u;
    {
        const bool branch_taken_0x2090c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2090CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 120));
        if (branch_taken_0x2090c8) {
            ctx->pc = 0x2090E8u;
            goto label_2090e8;
        }
    }
    ctx->pc = 0x2090D0u;
    // 0x2090d0: 0x10830005
    ctx->pc = 0x2090D0u;
    {
        const bool branch_taken_0x2090d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2090D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x2090d0) {
            ctx->pc = 0x2090E8u;
            goto label_2090e8;
        }
    }
    ctx->pc = 0x2090D8u;
    // 0x2090d8: 0x10830003
    ctx->pc = 0x2090D8u;
    {
        const bool branch_taken_0x2090d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2090d8) {
            ctx->pc = 0x2090E8u;
            goto label_2090e8;
        }
    }
    ctx->pc = 0x2090E0u;
    // 0x2090e0: 0x10000006
    ctx->pc = 0x2090E0u;
    {
        const bool branch_taken_0x2090e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2090e0) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x2090E8u;
label_2090e8:
    // 0x2090e8: 0x24100001
    ctx->pc = 0x2090e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_2090ec:
    // 0x2090ec: 0x10000003
    ctx->pc = 0x2090ECu;
    {
        const bool branch_taken_0x2090ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2090ec) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x2090F4u;
label_2090f4:
    // 0x2090f4: 0xc068fe0
    ctx->pc = 0x2090F4u;
    SET_GPR_U32(ctx, 31, 0x2090FCu);
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090FCu; }
        else if (ctx->pc != 0x2090FCu) { ctx->pc = 0x2090FCu; }
    }
    if (ctx->pc != 0x2090FCu) { return; }
    ctx->pc = 0x2090FCu;
label_2090fc:
    // 0x2090fc: 0x12000009
    ctx->pc = 0x2090FCu;
    {
        const bool branch_taken_0x2090fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2090fc) {
            ctx->pc = 0x209124u;
            goto label_209124;
        }
    }
    ctx->pc = 0x209104u;
    // 0x209104: 0x82230024
    ctx->pc = 0x209104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x209108: 0x8e251e60
    ctx->pc = 0x209108u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7776)));
    // 0x20910c: 0x3c020051
    ctx->pc = 0x20910cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x209110: 0x244434f0
    ctx->pc = 0x209110u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x209114: 0x70003e28
    ctx->pc = 0x209114u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x209118: 0x24080040
    ctx->pc = 0x209118u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x20911c: 0xc086018
    ctx->pc = 0x20911Cu;
    SET_GPR_U32(ctx, 31, 0x209124u);
    ctx->pc = 0x209120u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209124u; }
        else if (ctx->pc != 0x209124u) { ctx->pc = 0x209124u; }
    }
    if (ctx->pc != 0x209124u) { return; }
    ctx->pc = 0x209124u;
label_209124:
    // 0x209124: 0x7bbf0020
    ctx->pc = 0x209124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209128: 0x7bb10010
    ctx->pc = 0x209128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20912c: 0x7bb00000
    ctx->pc = 0x20912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209130: 0x3e00008
    ctx->pc = 0x209130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208FE0u: goto label_208fe0;
            case 0x209040u: goto label_209040;
            case 0x209044u: goto label_209044;
            case 0x20904Cu: goto label_20904c;
            case 0x209094u: goto label_209094;
            case 0x209098u: goto label_209098;
            case 0x2090A0u: goto label_2090a0;
            case 0x2090E8u: goto label_2090e8;
            case 0x2090ECu: goto label_2090ec;
            case 0x2090F4u: goto label_2090f4;
            case 0x2090FCu: goto label_2090fc;
            case 0x209124u: goto label_209124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209138u;
}
