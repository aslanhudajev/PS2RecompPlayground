#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calc__11CFcvTRSBaseFfP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3Pf
// Address: 0x1e78a0 - 0x1e7a00
void calc__11CFcvTRSBaseFfP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3Pf_0x1e78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calc__11CFcvTRSBaseFfP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3Pf");


    ctx->pc = 0x1e78a0u;

    // 0x1e78a0: 0x27bdff80
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e78a4: 0x7fbf0060
    ctx->pc = 0x1e78a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1e78a8: 0x7fb40050
    ctx->pc = 0x1e78a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e78ac: 0x7fb30040
    ctx->pc = 0x1e78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e78b0: 0x7fb20030
    ctx->pc = 0x1e78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e78b4: 0x7fb10020
    ctx->pc = 0x1e78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e78b8: 0x7fb00010
    ctx->pc = 0x1e78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e78bc: 0xe7b40000
    ctx->pc = 0x1e78bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e78c0: 0x84830000
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e78c4: 0x46006506
    ctx->pc = 0x1e78c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e78c8: 0x70c09e28
    ctx->pc = 0x1e78c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e78cc: 0x70e09628
    ctx->pc = 0x1e78ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e78d0: 0x71008e28
    ctx->pc = 0x1e78d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1e78d4: 0x71208628
    ctx->pc = 0x1e78d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1e78d8: 0x14600007
    ctx->pc = 0x1E78D8u;
    {
        const bool branch_taken_0x1e78d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E78DCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e78d8) {
            ctx->pc = 0x1E78F8u;
            goto label_1e78f8;
        }
    }
    ctx->pc = 0x1E78E0u;
    // 0x1e78e0: 0x86830002
    ctx->pc = 0x1e78e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1e78e4: 0x14600004
    ctx->pc = 0x1E78E4u;
    {
        const bool branch_taken_0x1e78e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e78e4) {
            ctx->pc = 0x1E78F8u;
            goto label_1e78f8;
        }
    }
    ctx->pc = 0x1E78ECu;
    // 0x1e78ec: 0x86830004
    ctx->pc = 0x1e78ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e78f0: 0x10600005
    ctx->pc = 0x1E78F0u;
    {
        const bool branch_taken_0x1e78f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e78f0) {
            ctx->pc = 0x1E7908u;
            goto label_1e7908;
        }
    }
    ctx->pc = 0x1E78F8u;
label_1e78f8:
    // 0x1e78f8: 0x10a00003
    ctx->pc = 0x1E78F8u;
    {
        const bool branch_taken_0x1e78f8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E78FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x1e78f8) {
            ctx->pc = 0x1E7908u;
            goto label_1e7908;
        }
    }
    ctx->pc = 0x1E7900u;
    // 0x1e7900: 0xc079bd4
    ctx->pc = 0x1E7900u;
    SET_GPR_U32(ctx, 31, 0x1E7908u);
    ctx->pc = 0x1E7904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7908u; }
        else if (ctx->pc != 0x1E7908u) { ctx->pc = 0x1E7908u; }
    }
    if (ctx->pc != 0x1E7908u) { return; }
    ctx->pc = 0x1E7908u;
label_1e7908:
    // 0x1e7908: 0x86830006
    ctx->pc = 0x1e7908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x1e790c: 0x14600007
    ctx->pc = 0x1E790Cu;
    {
        const bool branch_taken_0x1e790c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e790c) {
            ctx->pc = 0x1E792Cu;
            goto label_1e792c;
        }
    }
    ctx->pc = 0x1E7914u;
    // 0x1e7914: 0x86830008
    ctx->pc = 0x1e7914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7918: 0x14600004
    ctx->pc = 0x1E7918u;
    {
        const bool branch_taken_0x1e7918 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7918) {
            ctx->pc = 0x1E792Cu;
            goto label_1e792c;
        }
    }
    ctx->pc = 0x1E7920u;
    // 0x1e7920: 0x8683000a
    ctx->pc = 0x1e7920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1e7924: 0x10600006
    ctx->pc = 0x1E7924u;
    {
        const bool branch_taken_0x1e7924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7924) {
            ctx->pc = 0x1E7940u;
            goto label_1e7940;
        }
    }
    ctx->pc = 0x1E792Cu;
label_1e792c:
    // 0x1e792c: 0x12600004
    ctx->pc = 0x1E792Cu;
    {
        const bool branch_taken_0x1e792c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7930u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e792c) {
            ctx->pc = 0x1E7940u;
            goto label_1e7940;
        }
    }
    ctx->pc = 0x1E7934u;
    // 0x1e7934: 0x2684003c
    ctx->pc = 0x1e7934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 60));
    // 0x1e7938: 0xc079bd4
    ctx->pc = 0x1E7938u;
    SET_GPR_U32(ctx, 31, 0x1E7940u);
    ctx->pc = 0x1E793Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7940u; }
        else if (ctx->pc != 0x1E7940u) { ctx->pc = 0x1E7940u; }
    }
    if (ctx->pc != 0x1E7940u) { return; }
    ctx->pc = 0x1E7940u;
label_1e7940:
    // 0x1e7940: 0x8683000c
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1e7944: 0x14600007
    ctx->pc = 0x1E7944u;
    {
        const bool branch_taken_0x1e7944 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7944) {
            ctx->pc = 0x1E7964u;
            goto label_1e7964;
        }
    }
    ctx->pc = 0x1E794Cu;
    // 0x1e794c: 0x8683000e
    ctx->pc = 0x1e794cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1e7950: 0x14600004
    ctx->pc = 0x1E7950u;
    {
        const bool branch_taken_0x1e7950 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7950) {
            ctx->pc = 0x1E7964u;
            goto label_1e7964;
        }
    }
    ctx->pc = 0x1E7958u;
    // 0x1e7958: 0x86830010
    ctx->pc = 0x1e7958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e795c: 0x10600006
    ctx->pc = 0x1E795Cu;
    {
        const bool branch_taken_0x1e795c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e795c) {
            ctx->pc = 0x1E7978u;
            goto label_1e7978;
        }
    }
    ctx->pc = 0x1E7964u;
label_1e7964:
    // 0x1e7964: 0x12400004
    ctx->pc = 0x1E7964u;
    {
        const bool branch_taken_0x1e7964 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7968u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e7964) {
            ctx->pc = 0x1E7978u;
            goto label_1e7978;
        }
    }
    ctx->pc = 0x1E796Cu;
    // 0x1e796c: 0x26840058
    ctx->pc = 0x1e796cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 88));
    // 0x1e7970: 0xc079bd4
    ctx->pc = 0x1E7970u;
    SET_GPR_U32(ctx, 31, 0x1E7978u);
    ctx->pc = 0x1E7974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7978u; }
        else if (ctx->pc != 0x1E7978u) { ctx->pc = 0x1E7978u; }
    }
    if (ctx->pc != 0x1E7978u) { return; }
    ctx->pc = 0x1E7978u;
label_1e7978:
    // 0x1e7978: 0x86830012
    ctx->pc = 0x1e7978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x1e797c: 0x14600007
    ctx->pc = 0x1E797Cu;
    {
        const bool branch_taken_0x1e797c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e797c) {
            ctx->pc = 0x1E799Cu;
            goto label_1e799c;
        }
    }
    ctx->pc = 0x1E7984u;
    // 0x1e7984: 0x86830014
    ctx->pc = 0x1e7984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1e7988: 0x14600004
    ctx->pc = 0x1E7988u;
    {
        const bool branch_taken_0x1e7988 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7988) {
            ctx->pc = 0x1E799Cu;
            goto label_1e799c;
        }
    }
    ctx->pc = 0x1E7990u;
    // 0x1e7990: 0x86830016
    ctx->pc = 0x1e7990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x1e7994: 0x10600006
    ctx->pc = 0x1E7994u;
    {
        const bool branch_taken_0x1e7994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7994) {
            ctx->pc = 0x1E79B0u;
            goto label_1e79b0;
        }
    }
    ctx->pc = 0x1E799Cu;
label_1e799c:
    // 0x1e799c: 0x12200004
    ctx->pc = 0x1E799Cu;
    {
        const bool branch_taken_0x1e799c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E79A0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e799c) {
            ctx->pc = 0x1E79B0u;
            goto label_1e79b0;
        }
    }
    ctx->pc = 0x1E79A4u;
    // 0x1e79a4: 0x26840074
    ctx->pc = 0x1e79a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 116));
    // 0x1e79a8: 0xc079bd4
    ctx->pc = 0x1E79A8u;
    SET_GPR_U32(ctx, 31, 0x1E79B0u);
    ctx->pc = 0x1E79ACu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B0u; }
        else if (ctx->pc != 0x1E79B0u) { ctx->pc = 0x1E79B0u; }
    }
    if (ctx->pc != 0x1E79B0u) { return; }
    ctx->pc = 0x1E79B0u;
label_1e79b0:
    // 0x1e79b0: 0x1200000a
    ctx->pc = 0x1E79B0u;
    {
        const bool branch_taken_0x1e79b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E79B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 144));
        if (branch_taken_0x1e79b0) {
            ctx->pc = 0x1E79DCu;
            goto label_1e79dc;
        }
    }
    ctx->pc = 0x1E79B8u;
    // 0x1e79b8: 0x4600a306
    ctx->pc = 0x1e79b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e79bc: 0xc079bd4
    ctx->pc = 0x1E79BCu;
    SET_GPR_U32(ctx, 31, 0x1E79C4u);
    ctx->pc = 0x1E79C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79C4u; }
        else if (ctx->pc != 0x1E79C4u) { ctx->pc = 0x1E79C4u; }
    }
    if (ctx->pc != 0x1E79C4u) { return; }
    ctx->pc = 0x1E79C4u;
    // 0x1e79c4: 0xc7a00070
    ctx->pc = 0x1e79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e79c8: 0x3c033f80
    ctx->pc = 0x1e79c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e79cc: 0x44830800
    ctx->pc = 0x1e79ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1e79d0: 0x0
    ctx->pc = 0x1e79d0u;
    // NOP
    // 0x1e79d4: 0x46000801
    ctx->pc = 0x1e79d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e79d8: 0xe6000000
    ctx->pc = 0x1e79d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1e79dc:
    // 0x1e79dc: 0x7bbf0060
    ctx->pc = 0x1e79dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e79e0: 0x7bb40050
    ctx->pc = 0x1e79e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e79e4: 0x7bb30040
    ctx->pc = 0x1e79e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e79e8: 0x7bb20030
    ctx->pc = 0x1e79e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e79ec: 0x7bb10020
    ctx->pc = 0x1e79ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e79f0: 0x7bb00010
    ctx->pc = 0x1e79f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79f4: 0xc7b40000
    ctx->pc = 0x1e79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e79f8: 0x3e00008
    ctx->pc = 0x1E79F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E79FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E78F8u: goto label_1e78f8;
            case 0x1E7908u: goto label_1e7908;
            case 0x1E792Cu: goto label_1e792c;
            case 0x1E7940u: goto label_1e7940;
            case 0x1E7964u: goto label_1e7964;
            case 0x1E7978u: goto label_1e7978;
            case 0x1E799Cu: goto label_1e799c;
            case 0x1E79B0u: goto label_1e79b0;
            case 0x1E79DCu: goto label_1e79dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7A00u;
}
