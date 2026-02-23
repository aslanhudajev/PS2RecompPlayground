#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_RingGetRead
// Address: 0x195e40 - 0x196048
void sfmpv_RingGetRead_0x195e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_RingGetRead");


    ctx->pc = 0x195e40u;

    // 0x195e40: 0x27bdff20
    ctx->pc = 0x195e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x195e44: 0xffbe00c0
    ctx->pc = 0x195e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x195e48: 0xffb30070
    ctx->pc = 0x195e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x195e4c: 0xa0f02d
    ctx->pc = 0x195e4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e50: 0xffb20060
    ctx->pc = 0x195e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x195e54: 0xc0982d
    ctx->pc = 0x195e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e58: 0xffbf00d0
    ctx->pc = 0x195e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x195e5c: 0x80902d
    ctx->pc = 0x195e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e60: 0xffb700b0
    ctx->pc = 0x195e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x195e64: 0xffb600a0
    ctx->pc = 0x195e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x195e68: 0x3a0302d
    ctx->pc = 0x195e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e6c: 0xffb50090
    ctx->pc = 0x195e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x195e70: 0xffb10050
    ctx->pc = 0x195e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x195e74: 0xffb00040
    ctx->pc = 0x195e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x195e78: 0xffb40080
    ctx->pc = 0x195e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x195e7c: 0x8e543de4
    ctx->pc = 0x195e7cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 15844)));
    // 0x195e80: 0xc064754
    ctx->pc = 0x195E80u;
    SET_GPR_U32(ctx, 31, 0x195E88u);
    ctx->pc = 0x195E84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingGetRead_0x191d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E88u; }
        else if (ctx->pc != 0x195E88u) { ctx->pc = 0x195E88u; }
    }
    if (ctx->pc != 0x195E88u) { return; }
    ctx->pc = 0x195E88u;
    // 0x195e88: 0x14400064
    ctx->pc = 0x195E88u;
    {
        const bool branch_taken_0x195e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195E8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x195e88) {
            ctx->pc = 0x19601Cu;
            goto label_19601c;
        }
    }
    ctx->pc = 0x195E90u;
    // 0x195e90: 0x27b00028
    ctx->pc = 0x195e90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 40));
    // 0x195e94: 0x27b1002c
    ctx->pc = 0x195e94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 44));
    // 0x195e98: 0x27b50020
    ctx->pc = 0x195e98u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 32));
    // 0x195e9c: 0x27b60024
    ctx->pc = 0x195e9cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 36));
    // 0x195ea0: 0x240202d
    ctx->pc = 0x195ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ea4: 0x280282d
    ctx->pc = 0x195ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ea8: 0x2a0302d
    ctx->pc = 0x195ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195eac: 0x2c0382d
    ctx->pc = 0x195eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195eb0: 0x200402d
    ctx->pc = 0x195eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195eb4: 0x220482d
    ctx->pc = 0x195eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195eb8: 0xc064852
    ctx->pc = 0x195EB8u;
    SET_GPR_U32(ctx, 31, 0x195EC0u);
    ctx->pc = 0x195EBCu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x192148u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingGetDlm_0x192148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EC0u; }
        else if (ctx->pc != 0x195EC0u) { ctx->pc = 0x195EC0u; }
    }
    if (ctx->pc != 0x195EC0u) { return; }
    ctx->pc = 0x195EC0u;
    // 0x195ec0: 0x8fa50030
    ctx->pc = 0x195ec0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195ec4: 0x200302d
    ctx->pc = 0x195ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ec8: 0x220382d
    ctx->pc = 0x195ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ecc: 0xc065812
    ctx->pc = 0x195ECCu;
    SET_GPR_U32(ctx, 31, 0x195ED4u);
    ctx->pc = 0x195ED0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_CopyFlap_0x196048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ED4u; }
        else if (ctx->pc != 0x195ED4u) { ctx->pc = 0x195ED4u; }
    }
    if (ctx->pc != 0x195ED4u) { return; }
    ctx->pc = 0x195ED4u;
    // 0x195ed4: 0x10400005
    ctx->pc = 0x195ED4u;
    {
        const bool branch_taken_0x195ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195ED8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195ed4) {
            ctx->pc = 0x195EECu;
            goto label_195eec;
        }
    }
    ctx->pc = 0x195EDCu;
    // 0x195edc: 0xc064ea0
    ctx->pc = 0x195EDCu;
    SET_GPR_U32(ctx, 31, 0x195EE4u);
    ctx->pc = 0x195EE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EE4u; }
        else if (ctx->pc != 0x195EE4u) { ctx->pc = 0x195EE4u; }
    }
    if (ctx->pc != 0x195EE4u) { return; }
    ctx->pc = 0x195EE4u;
    // 0x195ee4: 0x1000004d
    ctx->pc = 0x195EE4u;
    {
        const bool branch_taken_0x195ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195EE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x195ee4) {
            ctx->pc = 0x19601Cu;
            goto label_19601c;
        }
    }
    ctx->pc = 0x195EECu;
label_195eec:
    // 0x195eec: 0x8fa9002c
    ctx->pc = 0x195eecu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x195ef0: 0x8fb10000
    ctx->pc = 0x195ef0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ef4: 0x8fb00004
    ctx->pc = 0x195ef4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195ef8: 0x11200005
    ctx->pc = 0x195EF8u;
    {
        const bool branch_taken_0x195ef8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x195EFCu;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x195ef8) {
            ctx->pc = 0x195F10u;
            goto label_195f10;
        }
    }
    ctx->pc = 0x195F00u;
    // 0x195f00: 0x1311023
    ctx->pc = 0x195f00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x195f04: 0x8fa60020
    ctx->pc = 0x195f04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195f08: 0x10000027
    ctx->pc = 0x195F08u;
    {
        const bool branch_taken_0x195f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195F0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x195f08) {
            ctx->pc = 0x195FA8u;
            goto label_195fa8;
        }
    }
    ctx->pc = 0x195F10u;
label_195f10:
    // 0x195f10: 0x3c020004
    ctx->pc = 0x195f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x195f14: 0x3442ffff
    ctx->pc = 0x195f14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x195f18: 0x50102a
    ctx->pc = 0x195f18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x195f1c: 0x10400004
    ctx->pc = 0x195F1Cu;
    {
        const bool branch_taken_0x195f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x195f1c) {
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195F24u;
    // 0x195f24: 0xae700000
    ctx->pc = 0x195f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x195f28: 0x1000001f
    ctx->pc = 0x195F28u;
    {
        const bool branch_taken_0x195f28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195F2Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x195f28) {
            ctx->pc = 0x195FA8u;
            goto label_195fa8;
        }
    }
    ctx->pc = 0x195F30u;
label_195f30:
    // 0x195f30: 0xc065a5c
    ctx->pc = 0x195F30u;
    SET_GPR_U32(ctx, 31, 0x195F38u);
    ctx->pc = 0x195F34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetTermSrc_0x196970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F38u; }
        else if (ctx->pc != 0x195F38u) { ctx->pc = 0x195F38u; }
    }
    if (ctx->pc != 0x195F38u) { return; }
    ctx->pc = 0x195F38u;
    // 0x195f38: 0x24030001
    ctx->pc = 0x195f38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x195f3c: 0x1443000b
    ctx->pc = 0x195F3Cu;
    {
        const bool branch_taken_0x195f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x195F40u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x195f3c) {
            ctx->pc = 0x195F6Cu;
            goto label_195f6c;
        }
    }
    ctx->pc = 0x195F44u;
    // 0x195f44: 0x240202d
    ctx->pc = 0x195f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f48: 0xc0674c2
    ctx->pc = 0x195F48u;
    SET_GPR_U32(ctx, 31, 0x195F50u);
    ctx->pc = 0x195F4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 58));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F50u; }
        else if (ctx->pc != 0x195F50u) { ctx->pc = 0x195F50u; }
    }
    if (ctx->pc != 0x195F50u) { return; }
    ctx->pc = 0x195F50u;
    // 0x195f50: 0x202102a
    ctx->pc = 0x195f50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x195f54: 0x14400005
    ctx->pc = 0x195F54u;
    {
        const bool branch_taken_0x195f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195F58u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x195f54) {
            ctx->pc = 0x195F6Cu;
            goto label_195f6c;
        }
    }
    ctx->pc = 0x195F5Cu;
    // 0x195f5c: 0xae700000
    ctx->pc = 0x195f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x195f60: 0x8fa9002c
    ctx->pc = 0x195f60u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x195f64: 0x10000010
    ctx->pc = 0x195F64u;
    {
        const bool branch_taken_0x195f64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195F68u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x195f64) {
            ctx->pc = 0x195FA8u;
            goto label_195fa8;
        }
    }
    ctx->pc = 0x195F6Cu;
label_195f6c:
    // 0x195f6c: 0x2a0302d
    ctx->pc = 0x195f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f70: 0x2c0382d
    ctx->pc = 0x195f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f74: 0x240202d
    ctx->pc = 0x195f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f78: 0xc065872
    ctx->pc = 0x195F78u;
    SET_GPR_U32(ctx, 31, 0x195F80u);
    ctx->pc = 0x195F7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1961C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SearchSafeDlm_0x1961c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F80u; }
        else if (ctx->pc != 0x195F80u) { ctx->pc = 0x195F80u; }
    }
    if (ctx->pc != 0x195F80u) { return; }
    ctx->pc = 0x195F80u;
    // 0x195f80: 0x14400026
    ctx->pc = 0x195F80u;
    {
        const bool branch_taken_0x195f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195F84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x195f80) {
            ctx->pc = 0x19601Cu;
            goto label_19601c;
        }
    }
    ctx->pc = 0x195F88u;
    // 0x195f88: 0x8fa60020
    ctx->pc = 0x195f88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195f8c: 0x10c00004
    ctx->pc = 0x195F8Cu;
    {
        const bool branch_taken_0x195f8c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x195F90u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        if (branch_taken_0x195f8c) {
            ctx->pc = 0x195FA0u;
            goto label_195fa0;
        }
    }
    ctx->pc = 0x195F94u;
    // 0x195f94: 0x8fa9002c
    ctx->pc = 0x195f94u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x195f98: 0x10000003
    ctx->pc = 0x195F98u;
    {
        const bool branch_taken_0x195f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195F9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x195f98) {
            ctx->pc = 0x195FA8u;
            goto label_195fa8;
        }
    }
    ctx->pc = 0x195FA0u;
label_195fa0:
    // 0x195fa0: 0xae600000
    ctx->pc = 0x195fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x195fa4: 0x8fa9002c
    ctx->pc = 0x195fa4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_195fa8:
    // 0x195fa8: 0xafd10000
    ctx->pc = 0x195fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x195fac: 0x240202d
    ctx->pc = 0x195facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fb0: 0x280282d
    ctx->pc = 0x195fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fb4: 0x8fa70024
    ctx->pc = 0x195fb4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x195fb8: 0xc06487c
    ctx->pc = 0x195FB8u;
    SET_GPR_U32(ctx, 31, 0x195FC0u);
    ctx->pc = 0x195FBCu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x1921F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingSetDlm_0x1921f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FC0u; }
        else if (ctx->pc != 0x195FC0u) { ctx->pc = 0x195FC0u; }
    }
    if (ctx->pc != 0x195FC0u) { return; }
    ctx->pc = 0x195FC0u;
    // 0x195fc0: 0x8e620000
    ctx->pc = 0x195fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195fc4: 0x14400014
    ctx->pc = 0x195FC4u;
    {
        const bool branch_taken_0x195fc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195FC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195fc4) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195FCCu;
    // 0x195fcc: 0x240202d
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fd0: 0xc06489c
    ctx->pc = 0x195FD0u;
    SET_GPR_U32(ctx, 31, 0x195FD8u);
    ctx->pc = 0x195FD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192270u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRingBufSiz_0x192270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FD8u; }
        else if (ctx->pc != 0x195FD8u) { ctx->pc = 0x195FD8u; }
    }
    if (ctx->pc != 0x195FD8u) { return; }
    ctx->pc = 0x195FD8u;
    // 0x195fd8: 0x40202d
    ctx->pc = 0x195fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fdc: 0x2171021
    ctx->pc = 0x195fdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x195fe0: 0x1482000d
    ctx->pc = 0x195FE0u;
    {
        const bool branch_taken_0x195fe0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x195FE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195fe0) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195FE8u;
    // 0x195fe8: 0x8fa20028
    ctx->pc = 0x195fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195fec: 0x2484fffd
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x195ff0: 0x3c050026
    ctx->pc = 0x195ff0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x195ff4: 0x2021021
    ctx->pc = 0x195ff4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x195ff8: 0x2442fffd
    ctx->pc = 0x195ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x195ffc: 0x44182a
    ctx->pc = 0x195ffcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x196000: 0x43200b
    ctx->pc = 0x196000u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x196004: 0xae640000
    ctx->pc = 0x196004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x196008: 0x8ca2df48
    ctx->pc = 0x196008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294958920)));
    // 0x19600c: 0x441021
    ctx->pc = 0x19600cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x196010: 0xaca2df48
    ctx->pc = 0x196010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294958920), GPR_U32(ctx, 2));
    // 0x196014: 0x102d
    ctx->pc = 0x196014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196018:
    // 0x196018: 0xdfbf00d0
    ctx->pc = 0x196018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_19601c:
    // 0x19601c: 0xdfbe00c0
    ctx->pc = 0x19601cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x196020: 0xdfb700b0
    ctx->pc = 0x196020u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x196024: 0xdfb600a0
    ctx->pc = 0x196024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x196028: 0xdfb50090
    ctx->pc = 0x196028u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19602c: 0xdfb40080
    ctx->pc = 0x19602cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x196030: 0xdfb30070
    ctx->pc = 0x196030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196034: 0xdfb20060
    ctx->pc = 0x196034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196038: 0xdfb10050
    ctx->pc = 0x196038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19603c: 0xdfb00040
    ctx->pc = 0x19603cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196040: 0x3e00008
    ctx->pc = 0x196040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196044u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195EECu: goto label_195eec;
            case 0x195F10u: goto label_195f10;
            case 0x195F30u: goto label_195f30;
            case 0x195F6Cu: goto label_195f6c;
            case 0x195FA0u: goto label_195fa0;
            case 0x195FA8u: goto label_195fa8;
            case 0x196018u: goto label_196018;
            case 0x19601Cu: goto label_19601c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196048u;
}
