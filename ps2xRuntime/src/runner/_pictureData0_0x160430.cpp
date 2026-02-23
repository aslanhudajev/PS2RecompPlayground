#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _pictureData0
// Address: 0x160430 - 0x160554
void _pictureData0_0x160430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_pictureData0");


    ctx->pc = 0x160430u;

    // 0x160430: 0x3c020023
    ctx->pc = 0x160430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160434: 0x3c030023
    ctx->pc = 0x160434u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x160438: 0x27bdff90
    ctx->pc = 0x160438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16043c: 0x8c47a368
    ctx->pc = 0x16043cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294943592)));
    // 0x160440: 0x8c66a36c
    ctx->pc = 0x160440u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294943596)));
    // 0x160444: 0x3c050023
    ctx->pc = 0x160444u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x160448: 0xffb10010
    ctx->pc = 0x160448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16044c: 0xffb50050
    ctx->pc = 0x16044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x160450: 0xe68818
    ctx->pc = 0x160450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x160454: 0x3c150023
    ctx->pc = 0x160454u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
    // 0x160458: 0xffb40040
    ctx->pc = 0x160458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16045c: 0xffb30030
    ctx->pc = 0x16045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x160460: 0x26a2a838
    ctx->pc = 0x160460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294944824));
    // 0x160464: 0xffb20020
    ctx->pc = 0x160464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x160468: 0x24140001
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16046c: 0x8ca3a3ec
    ctx->pc = 0x16046cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294943724)));
    // 0x160470: 0x80902d
    ctx->pc = 0x160470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160474: 0xffbf0060
    ctx->pc = 0x160474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x160478: 0x24130003
    ctx->pc = 0x160478u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16047c: 0xffb00000
    ctx->pc = 0x16047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160480: 0x38630003
    ctx->pc = 0x160480u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x160484: 0xac400284
    ctx->pc = 0x160484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x160488: 0xac400280
    ctx->pc = 0x160488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x16048c: 0x111043
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x160490: 0x43880b
    ctx->pc = 0x160490u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x160494: 0x0
    ctx->pc = 0x160494u;
    // NOP
label_160498:
    // 0x160498: 0x240202d
    ctx->pc = 0x160498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16049c:
    // 0x16049c: 0xc0581a0
    ctx->pc = 0x16049Cu;
    SET_GPR_U32(ctx, 31, 0x1604A4u);
    ctx->pc = 0x1604A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160680u;
    {
        const uint32_t __entryPc = ctx->pc;
        _slice0_0x160680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604A4u; }
        else if (ctx->pc != 0x1604A4u) { ctx->pc = 0x1604A4u; }
    }
    if (ctx->pc != 0x1604A4u) { return; }
    ctx->pc = 0x1604A4u;
    // 0x1604a4: 0x40802d
    ctx->pc = 0x1604a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604a8: 0x1214fffc
    ctx->pc = 0x1604A8u;
    {
        const bool branch_taken_0x1604a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 20));
        ctx->pc = 0x1604ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1604a8) {
            ctx->pc = 0x16049Cu;
            goto label_16049c;
        }
    }
    ctx->pc = 0x1604B0u;
    // 0x1604b0: 0x1213fff9
    ctx->pc = 0x1604B0u;
    {
        const bool branch_taken_0x1604b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 19));
        if (branch_taken_0x1604b0) {
            ctx->pc = 0x160498u;
            goto label_160498;
        }
    }
    ctx->pc = 0x1604B8u;
    // 0x1604b8: 0xc05847c
    ctx->pc = 0x1604B8u;
    SET_GPR_U32(ctx, 31, 0x1604C0u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604C0u; }
        else if (ctx->pc != 0x1604C0u) { ctx->pc = 0x1604C0u; }
    }
    if (ctx->pc != 0x1604C0u) { return; }
    ctx->pc = 0x1604C0u;
    // 0x1604c0: 0xc057fe4
    ctx->pc = 0x1604C0u;
    SET_GPR_U32(ctx, 31, 0x1604C8u);
    ctx->pc = 0x15FF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x15ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604C8u; }
        else if (ctx->pc != 0x1604C8u) { ctx->pc = 0x1604C8u; }
    }
    if (ctx->pc != 0x1604C8u) { return; }
    ctx->pc = 0x1604C8u;
    // 0x1604c8: 0x24030002
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1604cc: 0x3c041000
    ctx->pc = 0x1604ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1604d0: 0x62800a
    ctx->pc = 0x1604d0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x1604d4: 0x3484d400
    ctx->pc = 0x1604d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54272));
    // 0x1604d8: 0x2611ffff
    ctx->pc = 0x1604d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1604dc: 0x2e120001
    ctx->pc = 0x1604dcu;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 16), 1));
label_1604e0:
    // 0x1604e0: 0x8c820000
    ctx->pc = 0x1604e0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x1604e4: 0x21202
    ctx->pc = 0x1604e4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1604e8: 0x30420001
    ctx->pc = 0x1604e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1604ec: 0x0
    ctx->pc = 0x1604ecu;
    // NOP
    // 0x1604f0: 0x0
    ctx->pc = 0x1604f0u;
    // NOP
    // 0x1604f4: 0x1440fffa
    ctx->pc = 0x1604F4u;
    {
        const bool branch_taken_0x1604f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1604f4) {
            ctx->pc = 0x1604E0u;
            goto label_1604e0;
        }
    }
    ctx->pc = 0x1604FCu;
    // 0x1604fc: 0x16000006
    ctx->pc = 0x1604FCu;
    {
        const bool branch_taken_0x1604fc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x160500u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x1604fc) {
            ctx->pc = 0x160518u;
            goto label_160518;
        }
    }
    ctx->pc = 0x160504u;
    // 0x160504: 0x26a2a838
    ctx->pc = 0x160504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294944824));
    // 0x160508: 0x8c440280
    ctx->pc = 0x160508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x16050c: 0xc057c02
    ctx->pc = 0x16050Cu;
    SET_GPR_U32(ctx, 31, 0x160514u);
    ctx->pc = 0x160510u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x15F008u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x15f008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160514u; }
        else if (ctx->pc != 0x160514u) { ctx->pc = 0x160514u; }
    }
    if (ctx->pc != 0x160514u) { return; }
    ctx->pc = 0x160514u;
    // 0x160514: 0x2e220002
    ctx->pc = 0x160514u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 2));
label_160518:
    // 0x160518: 0x10400005
    ctx->pc = 0x160518u;
    {
        const bool branch_taken_0x160518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16051Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160518) {
            ctx->pc = 0x160530u;
            goto label_160530;
        }
    }
    ctx->pc = 0x160520u;
    // 0x160520: 0x3c04002c
    ctx->pc = 0x160520u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x160524: 0xc059112
    ctx->pc = 0x160524u;
    SET_GPR_U32(ctx, 31, 0x16052Cu);
    ctx->pc = 0x160528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937520));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16052Cu; }
        else if (ctx->pc != 0x16052Cu) { ctx->pc = 0x16052Cu; }
    }
    if (ctx->pc != 0x16052Cu) { return; }
    ctx->pc = 0x16052Cu;
    // 0x16052c: 0x240102d
    ctx->pc = 0x16052cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160530:
    // 0x160530: 0xdfbf0060
    ctx->pc = 0x160530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160534: 0xdfb50050
    ctx->pc = 0x160534u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160538: 0xdfb40040
    ctx->pc = 0x160538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16053c: 0xdfb30030
    ctx->pc = 0x16053cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160540: 0xdfb20020
    ctx->pc = 0x160540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160544: 0xdfb10010
    ctx->pc = 0x160544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160548: 0xdfb00000
    ctx->pc = 0x160548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16054c: 0x3e00008
    ctx->pc = 0x16054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160498u: goto label_160498;
            case 0x16049Cu: goto label_16049c;
            case 0x1604E0u: goto label_1604e0;
            case 0x160518u: goto label_160518;
            case 0x160530u: goto label_160530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160554u;
}
