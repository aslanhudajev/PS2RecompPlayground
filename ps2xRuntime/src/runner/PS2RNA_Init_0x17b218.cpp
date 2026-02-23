#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Init
// Address: 0x17b218 - 0x17b380
void PS2RNA_Init_0x17b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Init");


    ctx->pc = 0x17b218u;

    // 0x17b218: 0x27bdffe0
    ctx->pc = 0x17b218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b21c: 0x8f8382d0
    ctx->pc = 0x17b21cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x17b220: 0xffbf0010
    ctx->pc = 0x17b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b224: 0xffb00000
    ctx->pc = 0x17b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b228: 0x8f8282b8
    ctx->pc = 0x17b228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x17b22c: 0x1460004f
    ctx->pc = 0x17B22Cu;
    {
        const bool branch_taken_0x17b22c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B230u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x17b22c) {
            ctx->pc = 0x17B36Cu;
            goto label_17b36c;
        }
    }
    ctx->pc = 0x17B234u;
    // 0x17b234: 0xc05f5a0
    ctx->pc = 0x17B234u;
    SET_GPR_U32(ctx, 31, 0x17B23Cu);
    ctx->pc = 0x17B238u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    ctx->pc = 0x17D680u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_Init_0x17d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B23Cu; }
        else if (ctx->pc != 0x17B23Cu) { ctx->pc = 0x17B23Cu; }
    }
    if (ctx->pc != 0x17B23Cu) { return; }
    ctx->pc = 0x17B23Cu;
    // 0x17b23c: 0xc05f62a
    ctx->pc = 0x17B23Cu;
    SET_GPR_U32(ctx, 31, 0x17B244u);
    ctx->pc = 0x17B240u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294960000));
    ctx->pc = 0x17D8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJX_Init_0x17d8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B244u; }
        else if (ctx->pc != 0x17B244u) { ctx->pc = 0x17B244u; }
    }
    if (ctx->pc != 0x17B244u) { return; }
    ctx->pc = 0x17B244u;
    // 0x17b244: 0xc05dc8a
    ctx->pc = 0x17B244u;
    SET_GPR_U32(ctx, 31, 0x17B24Cu);
    ctx->pc = 0x177228u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Init_0x177228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B24Cu; }
        else if (ctx->pc != 0x17B24Cu) { ctx->pc = 0x17B24Cu; }
    }
    if (ctx->pc != 0x17B24Cu) { return; }
    ctx->pc = 0x17B24Cu;
    // 0x17b24c: 0xc05eb2c
    ctx->pc = 0x17B24Cu;
    SET_GPR_U32(ctx, 31, 0x17B254u);
    ctx->pc = 0x17ACB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2rna_init_psj_0x17acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B254u; }
        else if (ctx->pc != 0x17B254u) { ctx->pc = 0x17B254u; }
    }
    if (ctx->pc != 0x17B254u) { return; }
    ctx->pc = 0x17B254u;
    // 0x17b254: 0x282d
    ctx->pc = 0x17b254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b258: 0x240608d0
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2256));
    // 0x17b25c: 0xc050cfe
    ctx->pc = 0x17B25Cu;
    SET_GPR_U32(ctx, 31, 0x17B264u);
    ctx->pc = 0x17B260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B264u; }
        else if (ctx->pc != 0x17B264u) { ctx->pc = 0x17B264u; }
    }
    if (ctx->pc != 0x17B264u) { return; }
    ctx->pc = 0x17B264u;
    // 0x17b264: 0x3c03ffff
    ctx->pc = 0x17b264u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x17b268: 0x26100040
    ctx->pc = 0x17b268u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x17b26c: 0x3463ffc0
    ctx->pc = 0x17b26cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65472));
    // 0x17b270: 0x24020880
    ctx->pc = 0x17b270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2176));
    // 0x17b274: 0x2038024
    ctx->pc = 0x17b274u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17b278: 0xaf8282e4
    ctx->pc = 0x17b278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935268), GPR_U32(ctx, 2));
    // 0x17b27c: 0x8f8382d8
    ctx->pc = 0x17b27cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
    // 0x17b280: 0x14600011
    ctx->pc = 0x17B280u;
    {
        const bool branch_taken_0x17b280 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B284u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935252), GPR_U32(ctx, 16));
        if (branch_taken_0x17b280) {
            ctx->pc = 0x17B2C8u;
            goto label_17b2c8;
        }
    }
    ctx->pc = 0x17B288u;
    // 0x17b288: 0xc056dba
    ctx->pc = 0x17B288u;
    SET_GPR_U32(ctx, 31, 0x17B290u);
    ctx->pc = 0x17B28Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2256));
    ctx->pc = 0x15B6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x15b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B290u; }
        else if (ctx->pc != 0x17B290u) { ctx->pc = 0x17B290u; }
    }
    if (ctx->pc != 0x17B290u) { return; }
    ctx->pc = 0x17B290u;
    // 0x17b290: 0x40182d
    ctx->pc = 0x17b290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b294: 0x1460000b
    ctx->pc = 0x17B294u;
    {
        const bool branch_taken_0x17b294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B298u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 3));
        if (branch_taken_0x17b294) {
            ctx->pc = 0x17B2C4u;
            goto label_17b2c4;
        }
    }
    ctx->pc = 0x17B29Cu;
    // 0x17b29c: 0x3c04002c
    ctx->pc = 0x17b29cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17b2a0: 0xc05114a
    ctx->pc = 0x17B2A0u;
    SET_GPR_U32(ctx, 31, 0x17B2A8u);
    ctx->pc = 0x17B2A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950128));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2A8u; }
        else if (ctx->pc != 0x17B2A8u) { ctx->pc = 0x17B2A8u; }
    }
    if (ctx->pc != 0x17B2A8u) { return; }
    ctx->pc = 0x17B2A8u;
label_17b2a8:
    // 0x17b2a8: 0x0
    ctx->pc = 0x17b2a8u;
    // NOP
    // 0x17b2ac: 0x0
    ctx->pc = 0x17b2acu;
    // NOP
    // 0x17b2b0: 0x0
    ctx->pc = 0x17b2b0u;
    // NOP
    // 0x17b2b4: 0x0
    ctx->pc = 0x17b2b4u;
    // NOP
    // 0x17b2b8: 0x0
    ctx->pc = 0x17b2b8u;
    // NOP
    // 0x17b2bc: 0x1000fffa
    ctx->pc = 0x17B2BCu;
    {
        const bool branch_taken_0x17b2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b2bc) {
            ctx->pc = 0x17B2A8u;
            goto label_17b2a8;
        }
    }
    ctx->pc = 0x17B2C4u;
label_17b2c4:
    // 0x17b2c4: 0x8f8382d8
    ctx->pc = 0x17b2c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
label_17b2c8:
    // 0x17b2c8: 0x3c02ffff
    ctx->pc = 0x17b2c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x17b2cc: 0x24630040
    ctx->pc = 0x17b2ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
    // 0x17b2d0: 0x3442ffc0
    ctx->pc = 0x17b2d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x17b2d4: 0x8f8582d4
    ctx->pc = 0x17b2d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
    // 0x17b2d8: 0x621824
    ctx->pc = 0x17b2d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b2dc: 0x8f8782e4
    ctx->pc = 0x17b2dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x17b2e0: 0x60302d
    ctx->pc = 0x17b2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2e4: 0xaf8382dc
    ctx->pc = 0x17b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935260), GPR_U32(ctx, 3));
    // 0x17b2e8: 0xc05dbac
    ctx->pc = 0x17B2E8u;
    SET_GPR_U32(ctx, 31, 0x17B2F0u);
    ctx->pc = 0x17B2ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x176EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Create_0x176eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2F0u; }
        else if (ctx->pc != 0x17B2F0u) { ctx->pc = 0x17B2F0u; }
    }
    if (ctx->pc != 0x17B2F0u) { return; }
    ctx->pc = 0x17B2F0u;
    // 0x17b2f0: 0x1440000c
    ctx->pc = 0x17B2F0u;
    {
        const bool branch_taken_0x17b2f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B2F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 2));
        if (branch_taken_0x17b2f0) {
            ctx->pc = 0x17B324u;
            goto label_17b324;
        }
    }
    ctx->pc = 0x17B2F8u;
    // 0x17b2f8: 0x3c04002c
    ctx->pc = 0x17b2f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17b2fc: 0xc05114a
    ctx->pc = 0x17B2FCu;
    SET_GPR_U32(ctx, 31, 0x17B304u);
    ctx->pc = 0x17B300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950176));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B304u; }
        else if (ctx->pc != 0x17B304u) { ctx->pc = 0x17B304u; }
    }
    if (ctx->pc != 0x17B304u) { return; }
    ctx->pc = 0x17B304u;
    // 0x17b304: 0x0
    ctx->pc = 0x17b304u;
    // NOP
label_17b308:
    // 0x17b308: 0x0
    ctx->pc = 0x17b308u;
    // NOP
    // 0x17b30c: 0x0
    ctx->pc = 0x17b30cu;
    // NOP
    // 0x17b310: 0x0
    ctx->pc = 0x17b310u;
    // NOP
    // 0x17b314: 0x0
    ctx->pc = 0x17b314u;
    // NOP
    // 0x17b318: 0x0
    ctx->pc = 0x17b318u;
    // NOP
    // 0x17b31c: 0x1000fffa
    ctx->pc = 0x17B31Cu;
    {
        const bool branch_taken_0x17b31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b31c) {
            ctx->pc = 0x17B308u;
            goto label_17b308;
        }
    }
    ctx->pc = 0x17B324u;
label_17b324:
    // 0x17b324: 0x3c050018
    ctx->pc = 0x17b324u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x17b328: 0x8f8482e0
    ctx->pc = 0x17b328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x17b32c: 0x24a5b068
    ctx->pc = 0x17b32cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946920));
    // 0x17b330: 0xc05dc2c
    ctx->pc = 0x17B330u;
    SET_GPR_U32(ctx, 31, 0x17B338u);
    ctx->pc = 0x17B334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_SetRcvCbf_0x1770b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B338u; }
        else if (ctx->pc != 0x17B338u) { ctx->pc = 0x17B338u; }
    }
    if (ctx->pc != 0x17B338u) { return; }
    ctx->pc = 0x17B338u;
    // 0x17b338: 0x3c050018
    ctx->pc = 0x17b338u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x17b33c: 0x8f8482e0
    ctx->pc = 0x17b33cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x17b340: 0x24a5b0c0
    ctx->pc = 0x17b340u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947008));
    // 0x17b344: 0xc05dc30
    ctx->pc = 0x17B344u;
    SET_GPR_U32(ctx, 31, 0x17B34Cu);
    ctx->pc = 0x17B348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_SetSndCbf_0x1770c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B34Cu; }
        else if (ctx->pc != 0x17B34Cu) { ctx->pc = 0x17B34Cu; }
    }
    if (ctx->pc != 0x17B34Cu) { return; }
    ctx->pc = 0x17B34Cu;
    // 0x17b34c: 0x2404000a
    ctx->pc = 0x17b34cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b350: 0x282d
    ctx->pc = 0x17b350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b354: 0x302d
    ctx->pc = 0x17b354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b358: 0x382d
    ctx->pc = 0x17b358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b35c: 0xc05dcd2
    ctx->pc = 0x17B35Cu;
    SET_GPR_U32(ctx, 31, 0x17B364u);
    ctx->pc = 0x17B360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B364u; }
        else if (ctx->pc != 0x17B364u) { ctx->pc = 0x17B364u; }
    }
    if (ctx->pc != 0x17B364u) { return; }
    ctx->pc = 0x17B364u;
    // 0x17b364: 0x8f8382d0
    ctx->pc = 0x17b364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x17b368: 0x24630001
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_17b36c:
    // 0x17b36c: 0xdfbf0010
    ctx->pc = 0x17b36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b370: 0xdfb00000
    ctx->pc = 0x17b370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b374: 0xaf8382d0
    ctx->pc = 0x17b374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 3));
    // 0x17b378: 0x3e00008
    ctx->pc = 0x17B378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B37Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B2A8u: goto label_17b2a8;
            case 0x17B2C4u: goto label_17b2c4;
            case 0x17B2C8u: goto label_17b2c8;
            case 0x17B308u: goto label_17b308;
            case 0x17B324u: goto label_17b324;
            case 0x17B36Cu: goto label_17b36c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B380u;
}
