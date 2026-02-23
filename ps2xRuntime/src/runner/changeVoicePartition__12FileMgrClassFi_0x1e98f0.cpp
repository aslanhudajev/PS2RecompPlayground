#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeVoicePartition__12FileMgrClassFi
// Address: 0x1e98f0 - 0x1e99a4
void changeVoicePartition__12FileMgrClassFi_0x1e98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeVoicePartition__12FileMgrClassFi");


    ctx->pc = 0x1e98f0u;

    // 0x1e98f0: 0x27bdfff0
    ctx->pc = 0x1e98f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e98f4: 0x2403ffff
    ctx->pc = 0x1e98f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e98f8: 0x14a30004
    ctx->pc = 0x1E98F8u;
    {
        const bool branch_taken_0x1e98f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E98FCu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1e98f8) {
            ctx->pc = 0x1E990Cu;
            goto label_1e990c;
        }
    }
    ctx->pc = 0x1E9900u;
    // 0x1e9900: 0x3c010050
    ctx->pc = 0x1e9900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9904: 0x8025fec5
    ctx->pc = 0x1e9904u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1e9908: 0x0
    ctx->pc = 0x1e9908u;
    // NOP
label_1e990c:
    // 0x1e990c: 0x8083010d
    ctx->pc = 0x1e990cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
    // 0x1e9910: 0x10650021
    ctx->pc = 0x1E9910u;
    {
        const bool branch_taken_0x1e9910 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1e9910) {
            ctx->pc = 0x1E9998u;
            goto label_1e9998;
        }
    }
    ctx->pc = 0x1E9918u;
    // 0x1e9918: 0x3c020027
    ctx->pc = 0x1e9918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e991c: 0x51880
    ctx->pc = 0x1e991cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9920: 0x2442bfc0
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950848));
    // 0x1e9924: 0xa085010d
    ctx->pc = 0x1e9924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e9928: 0x431021
    ctx->pc = 0x1e9928u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e992c: 0x8c460000
    ctx->pc = 0x1e992cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9930: 0x3c020050
    ctx->pc = 0x1e9930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e9934: 0x24440b40
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x1e9938: 0x3c020027
    ctx->pc = 0x1e9938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e993c: 0xc07a5ac
    ctx->pc = 0x1E993Cu;
    SET_GPR_U32(ctx, 31, 0x1E9944u);
    ctx->pc = 0x1E9940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294951024));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9944u; }
        else if (ctx->pc != 0x1E9944u) { ctx->pc = 0x1E9944u; }
    }
    if (ctx->pc != 0x1E9944u) { return; }
    ctx->pc = 0x1E9944u;
    // 0x1e9944: 0x70402e28
    ctx->pc = 0x1e9944u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9948: 0x3c02004a
    ctx->pc = 0x1e9948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1e994c: 0x2447d8e0
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x1e9950: 0x24040001
    ctx->pc = 0x1e9950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9954: 0xc05ab34
    ctx->pc = 0x1E9954u;
    SET_GPR_U32(ctx, 31, 0x1E995Cu);
    ctx->pc = 0x1E9958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16ACD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_LoadPartitionNw_0x16acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E995Cu; }
        else if (ctx->pc != 0x1E995Cu) { ctx->pc = 0x1E995Cu; }
    }
    if (ctx->pc != 0x1E995Cu) { return; }
    ctx->pc = 0x1E995Cu;
    // 0x1e995c: 0xc05abb0
    ctx->pc = 0x1E995Cu;
    SET_GPR_U32(ctx, 31, 0x1E9964u);
    ctx->pc = 0x1E9960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16AEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetPtStat_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9964u; }
        else if (ctx->pc != 0x1E9964u) { ctx->pc = 0x1E9964u; }
    }
    if (ctx->pc != 0x1E9964u) { return; }
    ctx->pc = 0x1E9964u;
    // 0x1e9964: 0x10000007
    ctx->pc = 0x1E9964u;
    {
        const bool branch_taken_0x1e9964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9968u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e9964) {
            ctx->pc = 0x1E9984u;
            goto label_1e9984;
        }
    }
    ctx->pc = 0x1E996Cu;
label_1e996c:
    // 0x1e996c: 0xc07a720
    ctx->pc = 0x1E996Cu;
    SET_GPR_U32(ctx, 31, 0x1E9974u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9974u; }
        else if (ctx->pc != 0x1E9974u) { ctx->pc = 0x1E9974u; }
    }
    if (ctx->pc != 0x1E9974u) { return; }
    ctx->pc = 0x1E9974u;
    // 0x1e9974: 0xc05abb0
    ctx->pc = 0x1E9974u;
    SET_GPR_U32(ctx, 31, 0x1E997Cu);
    ctx->pc = 0x1E9978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16AEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetPtStat_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E997Cu; }
        else if (ctx->pc != 0x1E997Cu) { ctx->pc = 0x1E997Cu; }
    }
    if (ctx->pc != 0x1E997Cu) { return; }
    ctx->pc = 0x1E997Cu;
    // 0x1e997c: 0x0
    ctx->pc = 0x1e997cu;
    // NOP
    // 0x1e9980: 0x24030001
    ctx->pc = 0x1e9980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e9984:
    // 0x1e9984: 0x10430004
    ctx->pc = 0x1E9984u;
    {
        const bool branch_taken_0x1e9984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E9988u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e9984) {
            ctx->pc = 0x1E9998u;
            goto label_1e9998;
        }
    }
    ctx->pc = 0x1E998Cu;
    // 0x1e998c: 0x1443fff7
    ctx->pc = 0x1E998Cu;
    {
        const bool branch_taken_0x1e998c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e998c) {
            ctx->pc = 0x1E996Cu;
            goto label_1e996c;
        }
    }
    ctx->pc = 0x1E9994u;
    // 0x1e9994: 0x0
    ctx->pc = 0x1e9994u;
    // NOP
label_1e9998:
    // 0x1e9998: 0x7bbf0000
    ctx->pc = 0x1e9998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e999c: 0x3e00008
    ctx->pc = 0x1E999Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E99A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E990Cu: goto label_1e990c;
            case 0x1E996Cu: goto label_1e996c;
            case 0x1E9984u: goto label_1e9984;
            case 0x1E9998u: goto label_1e9998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E99A4u;
}
