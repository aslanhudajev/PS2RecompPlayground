#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioAnyQueAdd4
// Address: 0x222f48 - 0x223218
void AudioAnyQueAdd4_0x222f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222f48u;

    // 0x222f48: 0x3c020032
    ctx->pc = 0x222f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222f4c: 0x8c4cfe30
    ctx->pc = 0x222f4cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 4294966832)));
    // 0x222f50: 0x3c020031
    ctx->pc = 0x222f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x222f54: 0x8c420018
    ctx->pc = 0x222f54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x222f58: 0x30428000
    ctx->pc = 0x222f58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x222f5c: 0x10400005
    ctx->pc = 0x222F5Cu;
    {
        const bool branch_taken_0x222f5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222F60u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222f5c) {
            ctx->pc = 0x222F74u;
            goto label_222f74;
        }
    }
    ctx->pc = 0x222F64u;
    // 0x222f64: 0x3c020032
    ctx->pc = 0x222f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222f68: 0x8c42fd60
    ctx->pc = 0x222f68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966624)));
    // 0x222f6c: 0x1040005a
    ctx->pc = 0x222F6Cu;
    {
        const bool branch_taken_0x222f6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x222f6c) {
            ctx->pc = 0x2230D8u;
            goto label_2230d8;
        }
    }
    ctx->pc = 0x222F74u;
label_222f74:
    // 0x222f74: 0x3c02003c
    ctx->pc = 0x222f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222f78: 0x244207b8
    ctx->pc = 0x222f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x222f7c: 0xb1880
    ctx->pc = 0x222f7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
    // 0x222f80: 0x621821
    ctx->pc = 0x222f80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222f84: 0x8c6a0000
    ctx->pc = 0x222f84u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222f88: 0x29420010
    ctx->pc = 0x222f88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 16));
    // 0x222f8c: 0x10400052
    ctx->pc = 0x222F8Cu;
    {
        const bool branch_taken_0x222f8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x222f8c) {
            ctx->pc = 0x2230D8u;
            goto label_2230d8;
        }
    }
    ctx->pc = 0x222F94u;
    // 0x222f94: 0x19400053
    ctx->pc = 0x222F94u;
    {
        const bool branch_taken_0x222f94 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x222F98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x222f94) {
            ctx->pc = 0x2230E4u;
            goto label_2230e4;
        }
    }
    ctx->pc = 0x222F9Cu;
    // 0x222f9c: 0x244207b0
    ctx->pc = 0x222f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1968));
    // 0x222fa0: 0xb1880
    ctx->pc = 0x222fa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
    // 0x222fa4: 0x621821
    ctx->pc = 0x222fa4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222fa8: 0xc4620000
    ctx->pc = 0x222fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222fac: 0x44800000
    ctx->pc = 0x222facu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x222fb0: 0x46001032
    ctx->pc = 0x222fb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222fb4: 0x0
    ctx->pc = 0x222fb4u;
    // NOP
    // 0x222fb8: 0x45000019
    ctx->pc = 0x222FB8u;
    {
        const bool branch_taken_0x222fb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222FBCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x222fb8) {
            ctx->pc = 0x223020u;
            goto label_223020;
        }
    }
    ctx->pc = 0x222FC0u;
    // 0x222fc0: 0x246422f8
    ctx->pc = 0x222fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x222fc4: 0x8c6222f8
    ctx->pc = 0x222fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222fc8: 0x4400006
    ctx->pc = 0x222FC8u;
    {
        const bool branch_taken_0x222fc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x222fc8) {
            ctx->pc = 0x222FE4u;
            goto label_222fe4;
        }
    }
    ctx->pc = 0x222FD0u;
    // 0x222fd0: 0x8c6222f8
    ctx->pc = 0x222fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222fd4: 0x44821000
    ctx->pc = 0x222fd4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x222fd8: 0x468010a0
    ctx->pc = 0x222fd8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x222fdc: 0x1000000a
    ctx->pc = 0x222FDCu;
    {
        const bool branch_taken_0x222fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222FE0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x222fdc) {
            ctx->pc = 0x223008u;
            goto label_223008;
        }
    }
    ctx->pc = 0x222FE4u;
label_222fe4:
    // 0x222fe4: 0x8c830000
    ctx->pc = 0x222fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222fe8: 0x30630001
    ctx->pc = 0x222fe8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x222fec: 0x8c820000
    ctx->pc = 0x222fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222ff0: 0x21042
    ctx->pc = 0x222ff0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x222ff4: 0x621825
    ctx->pc = 0x222ff4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222ff8: 0x44831000
    ctx->pc = 0x222ff8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x222ffc: 0x468010a0
    ctx->pc = 0x222ffcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x223000: 0x46021080
    ctx->pc = 0x223000u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x223004: 0x3c03003c
    ctx->pc = 0x223004u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_223008:
    // 0x223008: 0x246307c8
    ctx->pc = 0x223008u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1992));
    // 0x22300c: 0x24020140
    ctx->pc = 0x22300cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x223010: 0x1621018
    ctx->pc = 0x223010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x223014: 0x621821
    ctx->pc = 0x223014u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223018: 0xc4600010
    ctx->pc = 0x223018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22301c: 0x46001080
    ctx->pc = 0x22301cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_223020:
    // 0x223020: 0x24030001
    ctx->pc = 0x223020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x223024: 0x6a102a
    ctx->pc = 0x223024u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 10)));
    // 0x223028: 0x1040000e
    ctx->pc = 0x223028u;
    {
        const bool branch_taken_0x223028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22302Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x223028) {
            ctx->pc = 0x223064u;
            goto label_223064;
        }
    }
    ctx->pc = 0x223030u;
    // 0x223030: 0x24090014
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 20));
    // 0x223034: 0x1627018
    ctx->pc = 0x223034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x223038: 0x3c02003c
    ctx->pc = 0x223038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22303c: 0x244407d8
    ctx->pc = 0x22303cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2008));
label_223040:
    // 0x223040: 0x696818
    ctx->pc = 0x223040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x223044: 0x1ae1021
    ctx->pc = 0x223044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x223048: 0x441021
    ctx->pc = 0x223048u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22304c: 0xc4400000
    ctx->pc = 0x22304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223050: 0x46001080
    ctx->pc = 0x223050u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x223054: 0x24630001
    ctx->pc = 0x223054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x223058: 0x6a102a
    ctx->pc = 0x223058u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 10)));
    // 0x22305c: 0x1440fff8
    ctx->pc = 0x22305Cu;
    {
        const bool branch_taken_0x22305c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22305c) {
            ctx->pc = 0x223040u;
            goto label_223040;
        }
    }
    ctx->pc = 0x223064u;
label_223064:
    // 0x223064: 0x44800000
    ctx->pc = 0x223064u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x223068: 0x460d0036
    ctx->pc = 0x223068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22306c: 0x0
    ctx->pc = 0x22306cu;
    // NOP
    // 0x223070: 0x4500002e
    ctx->pc = 0x223070u;
    {
        const bool branch_taken_0x223070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223074u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x223070) {
            ctx->pc = 0x22312Cu;
            goto label_22312c;
        }
    }
    ctx->pc = 0x223078u;
    // 0x223078: 0x246422f8
    ctx->pc = 0x223078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x22307c: 0x8c6222f8
    ctx->pc = 0x22307cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x223080: 0x4400006
    ctx->pc = 0x223080u;
    {
        const bool branch_taken_0x223080 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x223080) {
            ctx->pc = 0x22309Cu;
            goto label_22309c;
        }
    }
    ctx->pc = 0x223088u;
    // 0x223088: 0x8c6222f8
    ctx->pc = 0x223088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x22308c: 0x44820000
    ctx->pc = 0x22308cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223090: 0x46800020
    ctx->pc = 0x223090u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223094: 0x1000000a
    ctx->pc = 0x223094u;
    {
        const bool branch_taken_0x223094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223098u;
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x223094) {
            ctx->pc = 0x2230C0u;
            goto label_2230c0;
        }
    }
    ctx->pc = 0x22309Cu;
label_22309c:
    // 0x22309c: 0x8c830000
    ctx->pc = 0x22309cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2230a0: 0x30630001
    ctx->pc = 0x2230a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2230a4: 0x8c820000
    ctx->pc = 0x2230a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2230a8: 0x21042
    ctx->pc = 0x2230a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2230ac: 0x621825
    ctx->pc = 0x2230acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2230b0: 0x44830000
    ctx->pc = 0x2230b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2230b4: 0x46800020
    ctx->pc = 0x2230b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2230b8: 0x46000000
    ctx->pc = 0x2230b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2230bc: 0x46001041
    ctx->pc = 0x2230bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2230c0:
    // 0x2230c0: 0x3c014270
    ctx->pc = 0x2230c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x2230c4: 0x44810000
    ctx->pc = 0x2230c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2230c8: 0x46006802
    ctx->pc = 0x2230c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2230cc: 0x46010034
    ctx->pc = 0x2230ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2230d0: 0x45000016
    ctx->pc = 0x2230D0u;
    {
        const bool branch_taken_0x2230d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2230d0) {
            ctx->pc = 0x22312Cu;
            goto label_22312c;
        }
    }
    ctx->pc = 0x2230D8u;
label_2230d8:
    // 0x2230d8: 0x44800000
    ctx->pc = 0x2230d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2230dc: 0x3e00008
    ctx->pc = 0x2230DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222F74u: goto label_222f74;
            case 0x222FE4u: goto label_222fe4;
            case 0x223008u: goto label_223008;
            case 0x223020u: goto label_223020;
            case 0x223040u: goto label_223040;
            case 0x223064u: goto label_223064;
            case 0x22309Cu: goto label_22309c;
            case 0x2230C0u: goto label_2230c0;
            case 0x2230D8u: goto label_2230d8;
            case 0x2230E4u: goto label_2230e4;
            case 0x22310Cu: goto label_22310c;
            case 0x22312Cu: goto label_22312c;
            case 0x223188u: goto label_223188;
            case 0x2231A4u: goto label_2231a4;
            case 0x223210u: goto label_223210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2230E4u;
label_2230e4:
    // 0x2230e4: 0x3c03003a
    ctx->pc = 0x2230e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2230e8: 0x246422f8
    ctx->pc = 0x2230e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x2230ec: 0x8c6222f8
    ctx->pc = 0x2230ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x2230f0: 0x4400006
    ctx->pc = 0x2230F0u;
    {
        const bool branch_taken_0x2230f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2230f0) {
            ctx->pc = 0x22310Cu;
            goto label_22310c;
        }
    }
    ctx->pc = 0x2230F8u;
    // 0x2230f8: 0x8c6222f8
    ctx->pc = 0x2230f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x2230fc: 0x44821000
    ctx->pc = 0x2230fcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x223100: 0x468010a0
    ctx->pc = 0x223100u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x223104: 0x10000009
    ctx->pc = 0x223104u;
    {
        const bool branch_taken_0x223104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x223104) {
            ctx->pc = 0x22312Cu;
            goto label_22312c;
        }
    }
    ctx->pc = 0x22310Cu;
label_22310c:
    // 0x22310c: 0x8c830000
    ctx->pc = 0x22310cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223110: 0x30630001
    ctx->pc = 0x223110u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x223114: 0x8c820000
    ctx->pc = 0x223114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223118: 0x21042
    ctx->pc = 0x223118u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x22311c: 0x621825
    ctx->pc = 0x22311cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223120: 0x44831000
    ctx->pc = 0x223120u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x223124: 0x468010a0
    ctx->pc = 0x223124u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x223128: 0x46021080
    ctx->pc = 0x223128u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_22312c:
    // 0x22312c: 0x4a0001d
    ctx->pc = 0x22312Cu;
    {
        const bool branch_taken_0x22312c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x223130u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22312c) {
            ctx->pc = 0x2231A4u;
            goto label_2231a4;
        }
    }
    ctx->pc = 0x223134u;
    // 0x223134: 0x8c49fd6c
    ctx->pc = 0x223134u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x223138: 0x51403
    ctx->pc = 0x223138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
    // 0x22313c: 0x8d240010
    ctx->pc = 0x22313cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x223140: 0x2403002c
    ctx->pc = 0x223140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x223144: 0x431018
    ctx->pc = 0x223144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x223148: 0x441021
    ctx->pc = 0x223148u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22314c: 0x84440026
    ctx->pc = 0x22314cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x223150: 0x30a20fff
    ctx->pc = 0x223150u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 4095));
    // 0x223154: 0x44800000
    ctx->pc = 0x223154u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x223158: 0x46006036
    ctx->pc = 0x223158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22315c: 0x0
    ctx->pc = 0x22315cu;
    // NOP
    // 0x223160: 0x45000009
    ctx->pc = 0x223160u;
    {
        const bool branch_taken_0x223160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223164u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x223160) {
            ctx->pc = 0x223188u;
            goto label_223188;
        }
    }
    ctx->pc = 0x223168u;
    // 0x223168: 0x8d230014
    ctx->pc = 0x223168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x22316c: 0x2402001c
    ctx->pc = 0x22316cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x223170: 0x821018
    ctx->pc = 0x223170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x223174: 0x431021
    ctx->pc = 0x223174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223178: 0xc4410014
    ctx->pc = 0x223178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22317c: 0x3c014270
    ctx->pc = 0x22317cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x223180: 0x44810000
    ctx->pc = 0x223180u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x223184: 0x46000b02
    ctx->pc = 0x223184u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_223188:
    // 0x223188: 0x3c020032
    ctx->pc = 0x223188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22318c: 0x8c42fd6c
    ctx->pc = 0x22318cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x223190: 0x8c430014
    ctx->pc = 0x223190u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x223194: 0x2402001c
    ctx->pc = 0x223194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x223198: 0x821018
    ctx->pc = 0x223198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22319c: 0x431021
    ctx->pc = 0x22319cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2231a0: 0xe4420018
    ctx->pc = 0x2231a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2231a4:
    // 0x2231a4: 0x3c090032
    ctx->pc = 0x2231a4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x2231a8: 0x24020001
    ctx->pc = 0x2231a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2231ac: 0xad22fe30
    ctx->pc = 0x2231acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294966832), GPR_U32(ctx, 2));
    // 0x2231b0: 0x3c04003c
    ctx->pc = 0x2231b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2231b4: 0x248407c8
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1992));
    // 0x2231b8: 0x24030014
    ctx->pc = 0x2231b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2231bc: 0x1431818
    ctx->pc = 0x2231bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2231c0: 0x24020140
    ctx->pc = 0x2231c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2231c4: 0x1621018
    ctx->pc = 0x2231c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2231c8: 0x621821
    ctx->pc = 0x2231c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2231cc: 0x641021
    ctx->pc = 0x2231ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2231d0: 0xac450000
    ctx->pc = 0x2231d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2231d4: 0x831021
    ctx->pc = 0x2231d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2231d8: 0xac460004
    ctx->pc = 0x2231d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2231dc: 0xac470008
    ctx->pc = 0x2231dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x2231e0: 0xac48000c
    ctx->pc = 0x2231e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x2231e4: 0x40202d
    ctx->pc = 0x2231e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231e8: 0xe48c0010
    ctx->pc = 0x2231e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2231ec: 0x3c02003c
    ctx->pc = 0x2231ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2231f0: 0x244207b8
    ctx->pc = 0x2231f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x2231f4: 0xb1880
    ctx->pc = 0x2231f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
    // 0x2231f8: 0x621821
    ctx->pc = 0x2231f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2231fc: 0x8c620000
    ctx->pc = 0x2231fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223200: 0x24420001
    ctx->pc = 0x223200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x223204: 0x15800002
    ctx->pc = 0x223204u;
    {
        const bool branch_taken_0x223204 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x223208u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x223204) {
            ctx->pc = 0x223210u;
            goto label_223210;
        }
    }
    ctx->pc = 0x22320Cu;
    // 0x22320c: 0xad20fe30
    ctx->pc = 0x22320cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294966832), GPR_U32(ctx, 0));
label_223210:
    // 0x223210: 0x3e00008
    ctx->pc = 0x223210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223214u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222F74u: goto label_222f74;
            case 0x222FE4u: goto label_222fe4;
            case 0x223008u: goto label_223008;
            case 0x223020u: goto label_223020;
            case 0x223040u: goto label_223040;
            case 0x223064u: goto label_223064;
            case 0x22309Cu: goto label_22309c;
            case 0x2230C0u: goto label_2230c0;
            case 0x2230D8u: goto label_2230d8;
            case 0x2230E4u: goto label_2230e4;
            case 0x22310Cu: goto label_22310c;
            case 0x22312Cu: goto label_22312c;
            case 0x223188u: goto label_223188;
            case 0x2231A4u: goto label_2231a4;
            case 0x223210u: goto label_223210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223218u;
}
