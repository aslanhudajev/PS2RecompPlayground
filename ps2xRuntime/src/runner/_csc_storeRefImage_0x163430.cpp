#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _csc_storeRefImage
// Address: 0x163430 - 0x163684
void _csc_storeRefImage_0x163430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_csc_storeRefImage");


    ctx->pc = 0x163430u;

    // 0x163430: 0x27bdff40
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x163434: 0x24030002
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x163438: 0xffbe00a0
    ctx->pc = 0x163438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x16343c: 0x3a0282d
    ctx->pc = 0x16343cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163440: 0xffb10030
    ctx->pc = 0x163440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x163444: 0x3c1e0023
    ctx->pc = 0x163444u;
    SET_GPR_U32(ctx, 30, ((uint32_t)35 << 16));
    // 0x163448: 0xffb00020
    ctx->pc = 0x163448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16344c: 0xffbf00b0
    ctx->pc = 0x16344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x163450: 0x80802d
    ctx->pc = 0x163450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163454: 0xffb70090
    ctx->pc = 0x163454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x163458: 0xffb60080
    ctx->pc = 0x163458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x16345c: 0xffb50070
    ctx->pc = 0x16345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x163460: 0xffb40060
    ctx->pc = 0x163460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x163464: 0xffb30050
    ctx->pc = 0x163464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x163468: 0xffb20040
    ctx->pc = 0x163468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16346c: 0x8fc4a21c
    ctx->pc = 0x16346cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294943260)));
    // 0x163470: 0x8e06000c
    ctx->pc = 0x163470u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x163474: 0x8e020010
    ctx->pc = 0x163474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x163478: 0x8c930040
    ctx->pc = 0x163478u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x16347c: 0xafa30000
    ctx->pc = 0x16347cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x163480: 0xc058eec
    ctx->pc = 0x163480u;
    SET_GPR_U32(ctx, 31, 0x163488u);
    ctx->pc = 0x163484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163488u; }
        else if (ctx->pc != 0x163488u) { ctx->pc = 0x163488u; }
    }
    if (ctx->pc != 0x163488u) { return; }
    ctx->pc = 0x163488u;
    // 0x163488: 0x3c031000
    ctx->pc = 0x163488u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x16348c: 0x34632010
    ctx->pc = 0x16348cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x163490: 0x8c620000
    ctx->pc = 0x163490u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x163494: 0x30424000
    ctx->pc = 0x163494u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x163498: 0x10400003
    ctx->pc = 0x163498u;
    {
        const bool branch_taken_0x163498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16349Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x163498) {
            ctx->pc = 0x1634A8u;
            goto label_1634a8;
        }
    }
    ctx->pc = 0x1634A0u;
    // 0x1634a0: 0x3c011000
    ctx->pc = 0x1634a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1634a4: 0xac222010
    ctx->pc = 0x1634a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_1634a8:
    // 0x1634a8: 0x3c031000
    ctx->pc = 0x1634a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1634ac: 0x3c14002e
    ctx->pc = 0x1634acu;
    SET_GPR_U32(ctx, 20, ((uint32_t)46 << 16));
    // 0x1634b0: 0x3c15002e
    ctx->pc = 0x1634b0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)46 << 16));
    // 0x1634b4: 0x2a370400
    ctx->pc = 0x1634b4u;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 17), 1024));
    // 0x1634b8: 0x34632010
    ctx->pc = 0x1634b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x1634bc: 0x0
    ctx->pc = 0x1634bcu;
    // NOP
label_1634c0:
    // 0x1634c0: 0x8c620000
    ctx->pc = 0x1634c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1634c4: 0x0
    ctx->pc = 0x1634c4u;
    // NOP
    // 0x1634c8: 0x0
    ctx->pc = 0x1634c8u;
    // NOP
    // 0x1634cc: 0x0
    ctx->pc = 0x1634ccu;
    // NOP
    // 0x1634d0: 0x0
    ctx->pc = 0x1634d0u;
    // NOP
    // 0x1634d4: 0x440fffa
    ctx->pc = 0x1634D4u;
    {
        const bool branch_taken_0x1634d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1634d4) {
            ctx->pc = 0x1634C0u;
            goto label_1634c0;
        }
    }
    ctx->pc = 0x1634DCu;
    // 0x1634dc: 0xc058470
    ctx->pc = 0x1634DCu;
    SET_GPR_U32(ctx, 31, 0x1634E4u);
    ctx->pc = 0x1634E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634E4u; }
        else if (ctx->pc != 0x1634E4u) { ctx->pc = 0x1634E4u; }
    }
    if (ctx->pc != 0x1634E4u) { return; }
    ctx->pc = 0x1634E4u;
    // 0x1634e4: 0x3c031000
    ctx->pc = 0x1634e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1634e8: 0x8e040000
    ctx->pc = 0x1634e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1634ec: 0x34632010
    ctx->pc = 0x1634ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_1634f0:
    // 0x1634f0: 0x8c620000
    ctx->pc = 0x1634f0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1634f4: 0x0
    ctx->pc = 0x1634f4u;
    // NOP
    // 0x1634f8: 0x0
    ctx->pc = 0x1634f8u;
    // NOP
    // 0x1634fc: 0x0
    ctx->pc = 0x1634fcu;
    // NOP
    // 0x163500: 0x0
    ctx->pc = 0x163500u;
    // NOP
    // 0x163504: 0x440fffa
    ctx->pc = 0x163504u;
    {
        const bool branch_taken_0x163504 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x163504) {
            ctx->pc = 0x1634F0u;
            goto label_1634f0;
        }
    }
    ctx->pc = 0x16350Cu;
    // 0x16350c: 0x24020018
    ctx->pc = 0x16350cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x163510: 0x3c100fff
    ctx->pc = 0x163510u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x163514: 0x2222818
    ctx->pc = 0x163514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x163518: 0x3610ffff
    ctx->pc = 0x163518u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
    // 0x16351c: 0x901824
    ctx->pc = 0x16351cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x163520: 0x3412ffff
    ctx->pc = 0x163520u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 0), 65535));
    // 0x163524: 0xaea3c154
    ctx->pc = 0x163524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294951252), GPR_U32(ctx, 3));
    // 0x163528: 0x245102b
    ctx->pc = 0x163528u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x16352c: 0x10400030
    ctx->pc = 0x16352Cu;
    {
        const bool branch_taken_0x16352c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163530u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294951248), GPR_U32(ctx, 5));
        if (branch_taken_0x16352c) {
            ctx->pc = 0x1635F0u;
            goto label_1635f0;
        }
    }
    ctx->pc = 0x163534u;
    // 0x163534: 0x3c050016
    ctx->pc = 0x163534u;
    SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
    // 0x163538: 0x24040004
    ctx->pc = 0x163538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16353c: 0x24a53358
    ctx->pc = 0x16353cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 13144));
    // 0x163540: 0xc05517c
    ctx->pc = 0x163540u;
    SET_GPR_U32(ctx, 31, 0x163548u);
    ctx->pc = 0x163544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1545F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x1545f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163548u; }
        else if (ctx->pc != 0x163548u) { ctx->pc = 0x163548u; }
    }
    if (ctx->pc != 0x163548u) { return; }
    ctx->pc = 0x163548u;
    // 0x163548: 0x40b02d
    ctx->pc = 0x163548u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16354c: 0x24030010
    ctx->pc = 0x16354cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x163550: 0x3c021000
    ctx->pc = 0x163550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x163554: 0x24040004
    ctx->pc = 0x163554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x163558: 0x3442e010
    ctx->pc = 0x163558u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57360));
    // 0x16355c: 0xc055510
    ctx->pc = 0x16355Cu;
    SET_GPR_U32(ctx, 31, 0x163564u);
    ctx->pc = 0x163560u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x155440u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x155440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163564u; }
        else if (ctx->pc != 0x163564u) { ctx->pc = 0x163564u; }
    }
    if (ctx->pc != 0x163564u) { return; }
    ctx->pc = 0x163564u;
    // 0x163564: 0x8ea5c154
    ctx->pc = 0x163564u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4294951252)));
    // 0x163568: 0x3c021000
    ctx->pc = 0x163568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x16356c: 0x3442b410
    ctx->pc = 0x16356cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x163570: 0x3c031000
    ctx->pc = 0x163570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x163574: 0xac450000
    ctx->pc = 0x163574u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x163578: 0x3463b420
    ctx->pc = 0x163578u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46112));
    // 0x16357c: 0xac720000
    ctx->pc = 0x16357cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x163580: 0x3c041000
    ctx->pc = 0x163580u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x163584: 0x24030101
    ctx->pc = 0x163584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x163588: 0x3484b400
    ctx->pc = 0x163588u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46080));
    // 0x16358c: 0xac830000
    ctx->pc = 0x16358cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x163590: 0x3c02000f
    ctx->pc = 0x163590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x163594: 0x3442fff0
    ctx->pc = 0x163594u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
    // 0x163598: 0x8e83c150
    ctx->pc = 0x163598u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294951248)));
    // 0x16359c: 0xa22821
    ctx->pc = 0x16359cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1635a0: 0xb02824
    ctx->pc = 0x1635a0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1635a4: 0x721823
    ctx->pc = 0x1635a4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1635a8: 0xaea5c154
    ctx->pc = 0x1635a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294951252), GPR_U32(ctx, 5));
    // 0x1635ac: 0x12e00006
    ctx->pc = 0x1635ACu;
    {
        const bool branch_taken_0x1635ac = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x1635B0u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294951248), GPR_U32(ctx, 3));
        if (branch_taken_0x1635ac) {
            ctx->pc = 0x1635C8u;
            goto label_1635c8;
        }
    }
    ctx->pc = 0x1635B4u;
    // 0x1635b4: 0x8e6400d8
    ctx->pc = 0x1635b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x1635b8: 0xc058bda
    ctx->pc = 0x1635B8u;
    SET_GPR_U32(ctx, 31, 0x1635C0u);
    ctx->pc = 0x1635BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x162f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635C0u; }
        else if (ctx->pc != 0x1635C0u) { ctx->pc = 0x1635C0u; }
    }
    if (ctx->pc != 0x1635C0u) { return; }
    ctx->pc = 0x1635C0u;
    // 0x1635c0: 0x10000004
    ctx->pc = 0x1635C0u;
    {
        const bool branch_taken_0x1635c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1635c0) {
            ctx->pc = 0x1635D4u;
            goto label_1635d4;
        }
    }
    ctx->pc = 0x1635C8u;
label_1635c8:
    // 0x1635c8: 0x8e6400d8
    ctx->pc = 0x1635c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x1635cc: 0xc058c66
    ctx->pc = 0x1635CCu;
    SET_GPR_U32(ctx, 31, 0x1635D4u);
    ctx->pc = 0x1635D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163198u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x163198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635D4u; }
        else if (ctx->pc != 0x1635D4u) { ctx->pc = 0x1635D4u; }
    }
    if (ctx->pc != 0x1635D4u) { return; }
    ctx->pc = 0x1635D4u;
label_1635d4:
    // 0x1635d4: 0xc0554f6
    ctx->pc = 0x1635D4u;
    SET_GPR_U32(ctx, 31, 0x1635DCu);
    ctx->pc = 0x1635D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1553D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x1553d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635DCu; }
        else if (ctx->pc != 0x1635DCu) { ctx->pc = 0x1635DCu; }
    }
    if (ctx->pc != 0x1635DCu) { return; }
    ctx->pc = 0x1635DCu;
    // 0x1635dc: 0x2c0282d
    ctx->pc = 0x1635dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635e0: 0xc055184
    ctx->pc = 0x1635E0u;
    SET_GPR_U32(ctx, 31, 0x1635E8u);
    ctx->pc = 0x1635E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x154610u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x154610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635E8u; }
        else if (ctx->pc != 0x1635E8u) { ctx->pc = 0x1635E8u; }
    }
    if (ctx->pc != 0x1635E8u) { return; }
    ctx->pc = 0x1635E8u;
    // 0x1635e8: 0x10000016
    ctx->pc = 0x1635E8u;
    {
        const bool branch_taken_0x1635e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1635ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294943260)));
        if (branch_taken_0x1635e8) {
            ctx->pc = 0x163644u;
            goto label_163644;
        }
    }
    ctx->pc = 0x1635F0u;
label_1635f0:
    // 0x1635f0: 0x3c021000
    ctx->pc = 0x1635f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1635f4: 0x3c041000
    ctx->pc = 0x1635f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1635f8: 0x3442b410
    ctx->pc = 0x1635f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x1635fc: 0x3484b420
    ctx->pc = 0x1635fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x163600: 0xac430000
    ctx->pc = 0x163600u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x163604: 0x3c031000
    ctx->pc = 0x163604u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x163608: 0xac850000
    ctx->pc = 0x163608u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x16360c: 0x3463b400
    ctx->pc = 0x16360cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x163610: 0x24020101
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x163614: 0xac620000
    ctx->pc = 0x163614u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x163618: 0x12e00006
    ctx->pc = 0x163618u;
    {
        const bool branch_taken_0x163618 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x16361Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294951248), GPR_U32(ctx, 0));
        if (branch_taken_0x163618) {
            ctx->pc = 0x163634u;
            goto label_163634;
        }
    }
    ctx->pc = 0x163620u;
    // 0x163620: 0x8e6400d8
    ctx->pc = 0x163620u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x163624: 0xc058bda
    ctx->pc = 0x163624u;
    SET_GPR_U32(ctx, 31, 0x16362Cu);
    ctx->pc = 0x163628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x162f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16362Cu; }
        else if (ctx->pc != 0x16362Cu) { ctx->pc = 0x16362Cu; }
    }
    if (ctx->pc != 0x16362Cu) { return; }
    ctx->pc = 0x16362Cu;
    // 0x16362c: 0x10000005
    ctx->pc = 0x16362Cu;
    {
        const bool branch_taken_0x16362c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163630u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294943260)));
        if (branch_taken_0x16362c) {
            ctx->pc = 0x163644u;
            goto label_163644;
        }
    }
    ctx->pc = 0x163634u;
label_163634:
    // 0x163634: 0x8e6400d8
    ctx->pc = 0x163634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x163638: 0xc058c66
    ctx->pc = 0x163638u;
    SET_GPR_U32(ctx, 31, 0x163640u);
    ctx->pc = 0x16363Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163198u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x163198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163640u; }
        else if (ctx->pc != 0x163640u) { ctx->pc = 0x163640u; }
    }
    if (ctx->pc != 0x163640u) { return; }
    ctx->pc = 0x163640u;
    // 0x163640: 0x8fc4a21c
    ctx->pc = 0x163640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294943260)));
label_163644:
    // 0x163644: 0x24020003
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x163648: 0xafa20000
    ctx->pc = 0x163648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16364c: 0xc058eec
    ctx->pc = 0x16364Cu;
    SET_GPR_U32(ctx, 31, 0x163654u);
    ctx->pc = 0x163650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163654u; }
        else if (ctx->pc != 0x163654u) { ctx->pc = 0x163654u; }
    }
    if (ctx->pc != 0x163654u) { return; }
    ctx->pc = 0x163654u;
    // 0x163654: 0xdfbf00b0
    ctx->pc = 0x163654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x163658: 0xdfbe00a0
    ctx->pc = 0x163658u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16365c: 0xdfb70090
    ctx->pc = 0x16365cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163660: 0xdfb60080
    ctx->pc = 0x163660u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163664: 0xdfb50070
    ctx->pc = 0x163664u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x163668: 0xdfb40060
    ctx->pc = 0x163668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16366c: 0xdfb30050
    ctx->pc = 0x16366cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163670: 0xdfb20040
    ctx->pc = 0x163670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163674: 0xdfb10030
    ctx->pc = 0x163674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163678: 0xdfb00020
    ctx->pc = 0x163678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16367c: 0x3e00008
    ctx->pc = 0x16367Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1634A8u: goto label_1634a8;
            case 0x1634C0u: goto label_1634c0;
            case 0x1634F0u: goto label_1634f0;
            case 0x1635C8u: goto label_1635c8;
            case 0x1635D4u: goto label_1635d4;
            case 0x1635F0u: goto label_1635f0;
            case 0x163634u: goto label_163634;
            case 0x163644u: goto label_163644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163684u;
}
