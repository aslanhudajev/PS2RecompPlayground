#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd130 - 0x1fd310
void entryBodyNo_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd130u;

    // 0x1fd130: 0x27bdffc0
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fd134: 0x7fbf0030
    ctx->pc = 0x1fd134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1fd138: 0x7fb20020
    ctx->pc = 0x1fd138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fd13c: 0x7fb10010
    ctx->pc = 0x1fd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd140: 0x7fb00000
    ctx->pc = 0x1fd140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd144: 0x3c010052
    ctx->pc = 0x1fd144u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd148: 0x8c2294cc
    ctx->pc = 0x1fd148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939852)));
    // 0x1fd14c: 0x70809628
    ctx->pc = 0x1fd14cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fd150: 0x70a08e28
    ctx->pc = 0x1fd150u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fd154: 0x14400029
    ctx->pc = 0x1FD154u;
    {
        const bool branch_taken_0x1fd154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD158u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fd154) {
            ctx->pc = 0x1FD1FCu;
            goto label_1fd1fc;
        }
    }
    ctx->pc = 0x1FD15Cu;
    // 0x1fd15c: 0x3c010050
    ctx->pc = 0x1fd15cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd160: 0x8c240c80
    ctx->pc = 0x1fd160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fd164: 0x14800003
    ctx->pc = 0x1FD164u;
    {
        const bool branch_taken_0x1fd164 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD168u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd164) {
            ctx->pc = 0x1FD174u;
            goto label_1fd174;
        }
    }
    ctx->pc = 0x1FD16Cu;
    // 0x1fd16c: 0x10000004
    ctx->pc = 0x1FD16Cu;
    {
        const bool branch_taken_0x1fd16c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD170u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1fd16c) {
            ctx->pc = 0x1FD180u;
            goto label_1fd180;
        }
    }
    ctx->pc = 0x1FD174u;
label_1fd174:
    // 0x1fd174: 0xc05b018
    ctx->pc = 0x1FD174u;
    SET_GPR_U32(ctx, 31, 0x1FD17Cu);
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD17Cu; }
        else if (ctx->pc != 0x1FD17Cu) { ctx->pc = 0x1FD17Cu; }
    }
    if (ctx->pc != 0x1FD17Cu) { return; }
    ctx->pc = 0x1FD17Cu;
    // 0x1fd17c: 0x24030004
    ctx->pc = 0x1fd17cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1fd180:
    // 0x1fd180: 0x1443000f
    ctx->pc = 0x1FD180u;
    {
        const bool branch_taken_0x1fd180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FD184u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd180) {
            ctx->pc = 0x1FD1C0u;
            goto label_1fd1c0;
        }
    }
    ctx->pc = 0x1FD188u;
    // 0x1fd188: 0x3c010052
    ctx->pc = 0x1fd188u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd18c: 0x8c2694c4
    ctx->pc = 0x1fd18cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd190: 0x8f828d10
    ctx->pc = 0x1fd190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1fd194: 0x3c010050
    ctx->pc = 0x1fd194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd198: 0x8c240c80
    ctx->pc = 0x1fd198u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fd19c: 0x24420001
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fd1a0: 0x3c010052
    ctx->pc = 0x1fd1a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd1a4: 0x8c2594c0
    ctx->pc = 0x1fd1a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939840)));
    // 0x1fd1a8: 0xc05aeba
    ctx->pc = 0x1FD1A8u;
    SET_GPR_U32(ctx, 31, 0x1FD1B0u);
    ctx->pc = 0x1FD1ACu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1B0u; }
        else if (ctx->pc != 0x1FD1B0u) { ctx->pc = 0x1FD1B0u; }
    }
    if (ctx->pc != 0x1FD1B0u) { return; }
    ctx->pc = 0x1FD1B0u;
    // 0x1fd1b0: 0x3c010050
    ctx->pc = 0x1fd1b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd1b4: 0xc05b018
    ctx->pc = 0x1FD1B4u;
    SET_GPR_U32(ctx, 31, 0x1FD1BCu);
    ctx->pc = 0x1FD1B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1BCu; }
        else if (ctx->pc != 0x1FD1BCu) { ctx->pc = 0x1FD1BCu; }
    }
    if (ctx->pc != 0x1FD1BCu) { return; }
    ctx->pc = 0x1FD1BCu;
    // 0x1fd1bc: 0x24030001
    ctx->pc = 0x1fd1bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1fd1c0:
    // 0x1fd1c0: 0x10430004
    ctx->pc = 0x1FD1C0u;
    {
        const bool branch_taken_0x1fd1c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FD1C4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1fd1c0) {
            ctx->pc = 0x1FD1D4u;
            goto label_1fd1d4;
        }
    }
    ctx->pc = 0x1FD1C8u;
    // 0x1fd1c8: 0x24030003
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd1cc: 0x1443000f
    ctx->pc = 0x1FD1CCu;
    {
        const bool branch_taken_0x1fd1cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fd1cc) {
            ctx->pc = 0x1FD20Cu;
            goto label_1fd20c;
        }
    }
    ctx->pc = 0x1FD1D4u;
label_1fd1d4:
    // 0x1fd1d4: 0x8c240c80
    ctx->pc = 0x1fd1d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fd1d8: 0x10800006
    ctx->pc = 0x1FD1D8u;
    {
        const bool branch_taken_0x1fd1d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD1DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd1d8) {
            ctx->pc = 0x1FD1F4u;
            goto label_1fd1f4;
        }
    }
    ctx->pc = 0x1FD1E0u;
    // 0x1fd1e0: 0xc05ae0c
    ctx->pc = 0x1FD1E0u;
    SET_GPR_U32(ctx, 31, 0x1FD1E8u);
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1E8u; }
        else if (ctx->pc != 0x1FD1E8u) { ctx->pc = 0x1FD1E8u; }
    }
    if (ctx->pc != 0x1FD1E8u) { return; }
    ctx->pc = 0x1FD1E8u;
    // 0x1fd1e8: 0x3c010050
    ctx->pc = 0x1fd1e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd1ec: 0xac200c80
    ctx->pc = 0x1fd1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 0));
    // 0x1fd1f0: 0x24100001
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1fd1f4:
    // 0x1fd1f4: 0x10000005
    ctx->pc = 0x1FD1F4u;
    {
        const bool branch_taken_0x1fd1f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fd1f4) {
            ctx->pc = 0x1FD20Cu;
            goto label_1fd20c;
        }
    }
    ctx->pc = 0x1FD1FCu;
label_1fd1fc:
    // 0x1fd1fc: 0x8f828b38
    ctx->pc = 0x1fd1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x1fd200: 0x14400002
    ctx->pc = 0x1FD200u;
    {
        const bool branch_taken_0x1fd200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fd200) {
            ctx->pc = 0x1FD20Cu;
            goto label_1fd20c;
        }
    }
    ctx->pc = 0x1FD208u;
    // 0x1fd208: 0x24100001
    ctx->pc = 0x1fd208u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1fd20c:
    // 0x1fd20c: 0x1200003a
    ctx->pc = 0x1FD20Cu;
    {
        const bool branch_taken_0x1fd20c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd20c) {
            ctx->pc = 0x1FD2F8u;
            goto label_1fd2f8;
        }
    }
    ctx->pc = 0x1FD214u;
    // 0x1fd214: 0x3c010052
    ctx->pc = 0x1fd214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd218: 0x8c2494b0
    ctx->pc = 0x1fd218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd21c: 0x3c020052
    ctx->pc = 0x1fd21cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd220: 0x244394d0
    ctx->pc = 0x1fd220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd224: 0x2402fffe
    ctx->pc = 0x1fd224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fd228: 0x642021
    ctx->pc = 0x1fd228u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd22c: 0x80830000
    ctx->pc = 0x1fd22cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd230: 0x14620015
    ctx->pc = 0x1FD230u;
    {
        const bool branch_taken_0x1fd230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1fd230) {
            ctx->pc = 0x1FD288u;
            goto label_1fd288;
        }
    }
    ctx->pc = 0x1FD238u;
    // 0x1fd238: 0xa0800000
    ctx->pc = 0x1fd238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd23c: 0x72402628
    ctx->pc = 0x1fd23cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fd240: 0xc07f534
    ctx->pc = 0x1FD240u;
    SET_GPR_U32(ctx, 31, 0x1FD248u);
    ctx->pc = 0x1FD244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FD4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD248u; }
        else if (ctx->pc != 0x1FD248u) { ctx->pc = 0x1FD248u; }
    }
    if (ctx->pc != 0x1FD248u) { return; }
    ctx->pc = 0x1FD248u;
    // 0x1fd248: 0x1000002c
    ctx->pc = 0x1FD248u;
    {
        const bool branch_taken_0x1fd248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD24Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1fd248) {
            ctx->pc = 0x1FD2FCu;
            goto label_1fd2fc;
        }
    }
    ctx->pc = 0x1FD250u;
label_1fd250:
    // 0x1fd250: 0x4610006
    ctx->pc = 0x1FD250u;
    {
        const bool branch_taken_0x1fd250 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fd250) {
            ctx->pc = 0x1FD26Cu;
            goto label_1fd26c;
        }
    }
    ctx->pc = 0x1FD258u;
    // 0x1fd258: 0x72402628
    ctx->pc = 0x1fd258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fd25c: 0xc07f534
    ctx->pc = 0x1FD25Cu;
    SET_GPR_U32(ctx, 31, 0x1FD264u);
    ctx->pc = 0x1FD260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FD4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD264u; }
        else if (ctx->pc != 0x1FD264u) { ctx->pc = 0x1FD264u; }
    }
    if (ctx->pc != 0x1FD264u) { return; }
    ctx->pc = 0x1FD264u;
    // 0x1fd264: 0x10000024
    ctx->pc = 0x1FD264u;
    {
        const bool branch_taken_0x1fd264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fd264) {
            ctx->pc = 0x1FD2F8u;
            goto label_1fd2f8;
        }
    }
    ctx->pc = 0x1FD26Cu;
label_1fd26c:
    // 0x1fd26c: 0x8c820004
    ctx->pc = 0x1fd26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fd270: 0x3c010052
    ctx->pc = 0x1fd270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd274: 0x21080
    ctx->pc = 0x1fd274u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd278: 0x821021
    ctx->pc = 0x1fd278u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fd27c: 0x2442000c
    ctx->pc = 0x1fd27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fd280: 0xac2294c4
    ctx->pc = 0x1fd280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 2));
    // 0x1fd284: 0x0
    ctx->pc = 0x1fd284u;
    // NOP
label_1fd288:
    // 0x1fd288: 0x3c010052
    ctx->pc = 0x1fd288u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd28c: 0x8c2294b0
    ctx->pc = 0x1fd28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd290: 0x3c010052
    ctx->pc = 0x1fd290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd294: 0x8c2494c4
    ctx->pc = 0x1fd294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd298: 0x8c830000
    ctx->pc = 0x1fd298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd29c: 0x1443ffec
    ctx->pc = 0x1FD29Cu;
    {
        const bool branch_taken_0x1fd29c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fd29c) {
            ctx->pc = 0x1FD250u;
            goto label_1fd250;
        }
    }
    ctx->pc = 0x1FD2A4u;
    // 0x1fd2a4: 0x8c820008
    ctx->pc = 0x1fd2a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd2a8: 0x3c010052
    ctx->pc = 0x1fd2a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd2ac: 0xac2294b8
    ctx->pc = 0x1fd2acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939832), GPR_U32(ctx, 2));
    // 0x1fd2b0: 0x3c010052
    ctx->pc = 0x1fd2b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd2b4: 0x8c2294b8
    ctx->pc = 0x1fd2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939832)));
    // 0x1fd2b8: 0xc06878c
    ctx->pc = 0x1FD2B8u;
    SET_GPR_U32(ctx, 31, 0x1FD2C0u);
    ctx->pc = 0x1FD2BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2C0u; }
        else if (ctx->pc != 0x1FD2C0u) { ctx->pc = 0x1FD2C0u; }
    }
    if (ctx->pc != 0x1FD2C0u) { return; }
    ctx->pc = 0x1FD2C0u;
    // 0x1fd2c0: 0x3c010052
    ctx->pc = 0x1fd2c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd2c4: 0xac2294bc
    ctx->pc = 0x1fd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939836), GPR_U32(ctx, 2));
    // 0x1fd2c8: 0x3c010052
    ctx->pc = 0x1fd2c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd2cc: 0x8c2494c4
    ctx->pc = 0x1fd2ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd2d0: 0x2402ffc0
    ctx->pc = 0x1fd2d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fd2d4: 0x3c010052
    ctx->pc = 0x1fd2d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd2d8: 0x8c2394bc
    ctx->pc = 0x1fd2d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fd2dc: 0x2484000c
    ctx->pc = 0x1fd2dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fd2e0: 0x2463003f
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fd2e4: 0xc079604
    ctx->pc = 0x1FD2E4u;
    SET_GPR_U32(ctx, 31, 0x1FD2ECu);
    ctx->pc = 0x1FD2E8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1E5810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpandEntry_0x1e5810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2ECu; }
        else if (ctx->pc != 0x1FD2ECu) { ctx->pc = 0x1FD2ECu; }
    }
    if (ctx->pc != 0x1FD2ECu) { return; }
    ctx->pc = 0x1FD2ECu;
    // 0x1fd2ec: 0x24020004
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd2f0: 0xae22000c
    ctx->pc = 0x1fd2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1fd2f4: 0x24020001
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1fd2f8:
    // 0x1fd2f8: 0x7bbf0030
    ctx->pc = 0x1fd2f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd2fc:
    // 0x1fd2fc: 0x7bb20020
    ctx->pc = 0x1fd2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd300: 0x7bb10010
    ctx->pc = 0x1fd300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd304: 0x7bb00000
    ctx->pc = 0x1fd304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd308: 0x3e00008
    ctx->pc = 0x1FD308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD30Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD174u: goto label_1fd174;
            case 0x1FD180u: goto label_1fd180;
            case 0x1FD1C0u: goto label_1fd1c0;
            case 0x1FD1D4u: goto label_1fd1d4;
            case 0x1FD1F4u: goto label_1fd1f4;
            case 0x1FD1FCu: goto label_1fd1fc;
            case 0x1FD20Cu: goto label_1fd20c;
            case 0x1FD250u: goto label_1fd250;
            case 0x1FD26Cu: goto label_1fd26c;
            case 0x1FD288u: goto label_1fd288;
            case 0x1FD2F8u: goto label_1fd2f8;
            case 0x1FD2FCu: goto label_1fd2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD310u;
}
