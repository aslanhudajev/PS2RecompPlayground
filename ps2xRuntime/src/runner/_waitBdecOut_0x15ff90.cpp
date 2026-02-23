#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _waitBdecOut
// Address: 0x15ff90 - 0x160174
void _waitBdecOut_0x15ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_waitBdecOut");


    ctx->pc = 0x15ff90u;

    // 0x15ff90: 0x27bdff80
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15ff94: 0xffb20060
    ctx->pc = 0x15ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x15ff98: 0xffbf0070
    ctx->pc = 0x15ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15ff9c: 0x24120001
    ctx->pc = 0x15ff9cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ffa0: 0xffb10050
    ctx->pc = 0x15ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x15ffa4: 0xc05847c
    ctx->pc = 0x15FFA4u;
    SET_GPR_U32(ctx, 31, 0x15FFACu);
    ctx->pc = 0x15FFA8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFACu; }
        else if (ctx->pc != 0x15FFACu) { ctx->pc = 0x15FFACu; }
    }
    if (ctx->pc != 0x15FFACu) { return; }
    ctx->pc = 0x15FFACu;
    // 0x15ffac: 0x3c021000
    ctx->pc = 0x15ffacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x15ffb0: 0x3442b020
    ctx->pc = 0x15ffb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x15ffb4: 0x8c430000
    ctx->pc = 0x15ffb4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x15ffb8: 0x10600023
    ctx->pc = 0x15FFB8u;
    {
        const bool branch_taken_0x15ffb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FFBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x15ffb8) {
            ctx->pc = 0x160048u;
            goto label_160048;
        }
    }
    ctx->pc = 0x15FFC0u;
    // 0x15ffc0: 0x34422010
    ctx->pc = 0x15ffc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x15ffc4: 0x8c430000
    ctx->pc = 0x15ffc4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x15ffc8: 0x30634000
    ctx->pc = 0x15ffc8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x15ffcc: 0x1460001f
    ctx->pc = 0x15FFCCu;
    {
        const bool branch_taken_0x15ffcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FFD0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
        if (branch_taken_0x15ffcc) {
            ctx->pc = 0x16004Cu;
            goto label_16004c;
        }
    }
    ctx->pc = 0x15FFD4u;
    // 0x15ffd4: 0x3c100023
    ctx->pc = 0x15ffd4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
label_15ffd8:
    // 0x15ffd8: 0x3c021000
    ctx->pc = 0x15ffd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x15ffdc: 0x3442b420
    ctx->pc = 0x15ffdcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x15ffe0: 0x8c430000
    ctx->pc = 0x15ffe0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x15ffe4: 0x1460000d
    ctx->pc = 0x15FFE4u;
    {
        const bool branch_taken_0x15ffe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FFE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x15ffe4) {
            ctx->pc = 0x16001Cu;
            goto label_16001c;
        }
    }
    ctx->pc = 0x15FFECu;
    // 0x15ffec: 0x3442b400
    ctx->pc = 0x15ffecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x15fff0: 0x8c430000
    ctx->pc = 0x15fff0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x15fff4: 0x30630100
    ctx->pc = 0x15fff4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x15fff8: 0x14600008
    ctx->pc = 0x15FFF8u;
    {
        const bool branch_taken_0x15fff8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FFFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x15fff8) {
            ctx->pc = 0x16001Cu;
            goto label_16001c;
        }
    }
    ctx->pc = 0x160000u;
    // 0x160000: 0x3c020023
    ctx->pc = 0x160000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160004: 0x24030001
    ctx->pc = 0x160004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160008: 0x8c44a21c
    ctx->pc = 0x160008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x16000c: 0x3a0282d
    ctx->pc = 0x16000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160010: 0xc058eec
    ctx->pc = 0x160010u;
    SET_GPR_U32(ctx, 31, 0x160018u);
    ctx->pc = 0x160014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160018u; }
        else if (ctx->pc != 0x160018u) { ctx->pc = 0x160018u; }
    }
    if (ctx->pc != 0x160018u) { return; }
    ctx->pc = 0x160018u;
    // 0x160018: 0x3c021000
    ctx->pc = 0x160018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_16001c:
    // 0x16001c: 0x3442b020
    ctx->pc = 0x16001cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x160020: 0x8c430000
    ctx->pc = 0x160020u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x160024: 0x1060000a
    ctx->pc = 0x160024u;
    {
        const bool branch_taken_0x160024 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160028u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x160024) {
            ctx->pc = 0x160050u;
            goto label_160050;
        }
    }
    ctx->pc = 0x16002Cu;
    // 0x16002c: 0x34422010
    ctx->pc = 0x16002cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x160030: 0x8c430000
    ctx->pc = 0x160030u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x160034: 0x30634000
    ctx->pc = 0x160034u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x160038: 0x1060ffe7
    ctx->pc = 0x160038u;
    {
        const bool branch_taken_0x160038 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16003Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x160038) {
            ctx->pc = 0x15FFD8u;
            goto label_15ffd8;
        }
    }
    ctx->pc = 0x160040u;
    // 0x160040: 0x10000004
    ctx->pc = 0x160040u;
    {
        const bool branch_taken_0x160040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x160040) {
            ctx->pc = 0x160054u;
            goto label_160054;
        }
    }
    ctx->pc = 0x160048u;
label_160048:
    // 0x160048: 0x3c110023
    ctx->pc = 0x160048u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
label_16004c:
    // 0x16004c: 0x3c100023
    ctx->pc = 0x16004cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
label_160050:
    // 0x160050: 0x3c021000
    ctx->pc = 0x160050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_160054:
    // 0x160054: 0x3c041000
    ctx->pc = 0x160054u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x160058: 0xdc842030
    ctx->pc = 0x160058u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x16005c: 0x34422020
    ctx->pc = 0x16005cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x160060: 0x8c420000
    ctx->pc = 0x160060u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x160064: 0x4183c
    ctx->pc = 0x160064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x160068: 0x3183f
    ctx->pc = 0x160068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16006c: 0x481000a
    ctx->pc = 0x16006Cu;
    {
        const bool branch_taken_0x16006c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x160070u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294945496), GPR_U32(ctx, 3));
        if (branch_taken_0x16006c) {
            ctx->pc = 0x160098u;
            goto label_160098;
        }
    }
    ctx->pc = 0x160074u;
    // 0x160074: 0x3043001f
    ctx->pc = 0x160074u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 31));
    // 0x160078: 0x10600004
    ctx->pc = 0x160078u;
    {
        const bool branch_taken_0x160078 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16007Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294945500));
        if (branch_taken_0x160078) {
            ctx->pc = 0x16008Cu;
            goto label_16008c;
        }
    }
    ctx->pc = 0x160080u;
    // 0x160080: 0x24020020
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x160084: 0x10000002
    ctx->pc = 0x160084u;
    {
        const bool branch_taken_0x160084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160088u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x160084) {
            ctx->pc = 0x160090u;
            goto label_160090;
        }
    }
    ctx->pc = 0x16008Cu;
label_16008c:
    // 0x16008c: 0x102d
    ctx->pc = 0x16008cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160090:
    // 0x160090: 0x10000003
    ctx->pc = 0x160090u;
    {
        const bool branch_taken_0x160090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160094u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x160090) {
            ctx->pc = 0x1600A0u;
            goto label_1600a0;
        }
    }
    ctx->pc = 0x160098u;
label_160098:
    // 0x160098: 0x24020020
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x16009c: 0xae02aadc
    ctx->pc = 0x16009cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945500), GPR_U32(ctx, 2));
label_1600a0:
    // 0x1600a0: 0x3c021000
    ctx->pc = 0x1600a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1600a4: 0x34422010
    ctx->pc = 0x1600a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x1600a8: 0x8c430000
    ctx->pc = 0x1600a8u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1600ac: 0x30634000
    ctx->pc = 0x1600acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x1600b0: 0x10600029
    ctx->pc = 0x1600B0u;
    {
        const bool branch_taken_0x1600b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1600B4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1600b0) {
            ctx->pc = 0x160158u;
            goto label_160158;
        }
    }
    ctx->pc = 0x1600B8u;
    // 0x1600b8: 0x3c100023
    ctx->pc = 0x1600b8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1600bc: 0x24848b58
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937432));
    // 0x1600c0: 0xc059112
    ctx->pc = 0x1600C0u;
    SET_GPR_U32(ctx, 31, 0x1600C8u);
    ctx->pc = 0x1600C4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600C8u; }
        else if (ctx->pc != 0x1600C8u) { ctx->pc = 0x1600C8u; }
    }
    if (ctx->pc != 0x1600C8u) { return; }
    ctx->pc = 0x1600C8u;
    // 0x1600c8: 0x27b10020
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1600cc: 0x24020002
    ctx->pc = 0x1600ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1600d0: 0x8e04a21c
    ctx->pc = 0x1600d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943260)));
    // 0x1600d4: 0x220282d
    ctx->pc = 0x1600d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600d8: 0xc058eec
    ctx->pc = 0x1600D8u;
    SET_GPR_U32(ctx, 31, 0x1600E0u);
    ctx->pc = 0x1600DCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600E0u; }
        else if (ctx->pc != 0x1600E0u) { ctx->pc = 0x1600E0u; }
    }
    if (ctx->pc != 0x1600E0u) { return; }
    ctx->pc = 0x1600E0u;
    // 0x1600e0: 0x3c034000
    ctx->pc = 0x1600e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x1600e4: 0x24020003
    ctx->pc = 0x1600e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1600e8: 0x3c011000
    ctx->pc = 0x1600e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1600ec: 0xac232010
    ctx->pc = 0x1600ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x1600f0: 0x220282d
    ctx->pc = 0x1600f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600f4: 0x8e04a21c
    ctx->pc = 0x1600f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294943260)));
    // 0x1600f8: 0xc058eec
    ctx->pc = 0x1600F8u;
    SET_GPR_U32(ctx, 31, 0x160100u);
    ctx->pc = 0x1600FCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160100u; }
        else if (ctx->pc != 0x160100u) { ctx->pc = 0x160100u; }
    }
    if (ctx->pc != 0x160100u) { return; }
    ctx->pc = 0x160100u;
    // 0x160100: 0xc05725c
    ctx->pc = 0x160100u;
    SET_GPR_U32(ctx, 31, 0x160108u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160108u; }
        else if (ctx->pc != 0x160108u) { ctx->pc = 0x160108u; }
    }
    if (ctx->pc != 0x160108u) { return; }
    ctx->pc = 0x160108u;
    // 0x160108: 0x3c051000
    ctx->pc = 0x160108u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x16010c: 0x3c070001
    ctx->pc = 0x16010cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x160110: 0x34a5f520
    ctx->pc = 0x160110u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x160114: 0x3c061000
    ctx->pc = 0x160114u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x160118: 0x8ca20000
    ctx->pc = 0x160118u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x16011c: 0x34c6f590
    ctx->pc = 0x16011cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x160120: 0x3c031000
    ctx->pc = 0x160120u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x160124: 0x3c04fffe
    ctx->pc = 0x160124u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x160128: 0x471025
    ctx->pc = 0x160128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x16012c: 0x3463b000
    ctx->pc = 0x16012cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x160130: 0xacc20000
    ctx->pc = 0x160130u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x160134: 0x3484ffff
    ctx->pc = 0x160134u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x160138: 0xac600000
    ctx->pc = 0x160138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16013c: 0x8ca20000
    ctx->pc = 0x16013cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160140: 0x441024
    ctx->pc = 0x160140u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160144: 0xc05726e
    ctx->pc = 0x160144u;
    SET_GPR_U32(ctx, 31, 0x16014Cu);
    ctx->pc = 0x160148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16014Cu; }
        else if (ctx->pc != 0x16014Cu) { ctx->pc = 0x16014Cu; }
    }
    if (ctx->pc != 0x16014Cu) { return; }
    ctx->pc = 0x16014Cu;
    // 0x16014c: 0x3c031000
    ctx->pc = 0x16014cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x160150: 0x3463b020
    ctx->pc = 0x160150u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x160154: 0xac600000
    ctx->pc = 0x160154u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_160158:
    // 0x160158: 0x240102d
    ctx->pc = 0x160158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16015c: 0xdfbf0070
    ctx->pc = 0x16015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160160: 0xdfb20060
    ctx->pc = 0x160160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160164: 0xdfb10050
    ctx->pc = 0x160164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160168: 0xdfb00040
    ctx->pc = 0x160168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16016c: 0x3e00008
    ctx->pc = 0x16016Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160170u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFD8u: goto label_15ffd8;
            case 0x16001Cu: goto label_16001c;
            case 0x160048u: goto label_160048;
            case 0x16004Cu: goto label_16004c;
            case 0x160050u: goto label_160050;
            case 0x160054u: goto label_160054;
            case 0x16008Cu: goto label_16008c;
            case 0x160090u: goto label_160090;
            case 0x160098u: goto label_160098;
            case 0x1600A0u: goto label_1600a0;
            case 0x160158u: goto label_160158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160174u;
}
