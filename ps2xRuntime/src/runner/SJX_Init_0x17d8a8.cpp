#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJX_Init
// Address: 0x17d8a8 - 0x17d9f8
void SJX_Init_0x17d8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJX_Init");


    ctx->pc = 0x17d8a8u;

    // 0x17d8a8: 0x27bdffe0
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d8ac: 0x8f82830c
    ctx->pc = 0x17d8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935308)));
    // 0x17d8b0: 0xffbf0010
    ctx->pc = 0x17d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d8b4: 0x1440004a
    ctx->pc = 0x17D8B4u;
    {
        const bool branch_taken_0x17d8b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D8B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x17d8b4) {
            ctx->pc = 0x17D9E0u;
            goto label_17d9e0;
        }
    }
    ctx->pc = 0x17D8BCu;
    // 0x17d8bc: 0x3c100024
    ctx->pc = 0x17d8bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x17d8c0: 0x282d
    ctx->pc = 0x17d8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8c4: 0x26100aa8
    ctx->pc = 0x17d8c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2728));
    // 0x17d8c8: 0x240608d0
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2256));
    // 0x17d8cc: 0xc050cfe
    ctx->pc = 0x17D8CCu;
    SET_GPR_U32(ctx, 31, 0x17D8D4u);
    ctx->pc = 0x17D8D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8D4u; }
        else if (ctx->pc != 0x17D8D4u) { ctx->pc = 0x17D8D4u; }
    }
    if (ctx->pc != 0x17D8D4u) { return; }
    ctx->pc = 0x17D8D4u;
    // 0x17d8d4: 0xc05dc8a
    ctx->pc = 0x17D8D4u;
    SET_GPR_U32(ctx, 31, 0x17D8DCu);
    ctx->pc = 0x17D8D8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x177228u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Init_0x177228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8DCu; }
        else if (ctx->pc != 0x17D8DCu) { ctx->pc = 0x17D8DCu; }
    }
    if (ctx->pc != 0x17D8DCu) { return; }
    ctx->pc = 0x17D8DCu;
    // 0x17d8dc: 0x3c02ffff
    ctx->pc = 0x17d8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x17d8e0: 0x3442ffc0
    ctx->pc = 0x17d8e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x17d8e4: 0x24030880
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2176));
    // 0x17d8e8: 0x2028024
    ctx->pc = 0x17d8e8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17d8ec: 0x8f848314
    ctx->pc = 0x17d8ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x17d8f0: 0xaf838320
    ctx->pc = 0x17d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935328), GPR_U32(ctx, 3));
    // 0x17d8f4: 0x14800012
    ctx->pc = 0x17D8F4u;
    {
        const bool branch_taken_0x17d8f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D8F8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935312), GPR_U32(ctx, 16));
        if (branch_taken_0x17d8f4) {
            ctx->pc = 0x17D940u;
            goto label_17d940;
        }
    }
    ctx->pc = 0x17D8FCu;
    // 0x17d8fc: 0xc056dba
    ctx->pc = 0x17D8FCu;
    SET_GPR_U32(ctx, 31, 0x17D904u);
    ctx->pc = 0x17D900u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2256));
    ctx->pc = 0x15B6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x15b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D904u; }
        else if (ctx->pc != 0x17D904u) { ctx->pc = 0x17D904u; }
    }
    if (ctx->pc != 0x17D904u) { return; }
    ctx->pc = 0x17D904u;
    // 0x17d904: 0x40202d
    ctx->pc = 0x17d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d908: 0x1480000c
    ctx->pc = 0x17D908u;
    {
        const bool branch_taken_0x17d908 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D90Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 4));
        if (branch_taken_0x17d908) {
            ctx->pc = 0x17D93Cu;
            goto label_17d93c;
        }
    }
    ctx->pc = 0x17D910u;
    // 0x17d910: 0x3c04002c
    ctx->pc = 0x17d910u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17d914: 0xc05114a
    ctx->pc = 0x17D914u;
    SET_GPR_U32(ctx, 31, 0x17D91Cu);
    ctx->pc = 0x17D918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950928));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D91Cu; }
        else if (ctx->pc != 0x17D91Cu) { ctx->pc = 0x17D91Cu; }
    }
    if (ctx->pc != 0x17D91Cu) { return; }
    ctx->pc = 0x17D91Cu;
    // 0x17d91c: 0x0
    ctx->pc = 0x17d91cu;
    // NOP
label_17d920:
    // 0x17d920: 0x0
    ctx->pc = 0x17d920u;
    // NOP
    // 0x17d924: 0x0
    ctx->pc = 0x17d924u;
    // NOP
    // 0x17d928: 0x0
    ctx->pc = 0x17d928u;
    // NOP
    // 0x17d92c: 0x0
    ctx->pc = 0x17d92cu;
    // NOP
    // 0x17d930: 0x0
    ctx->pc = 0x17d930u;
    // NOP
    // 0x17d934: 0x1000fffa
    ctx->pc = 0x17D934u;
    {
        const bool branch_taken_0x17d934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d934) {
            ctx->pc = 0x17D920u;
            goto label_17d920;
        }
    }
    ctx->pc = 0x17D93Cu;
label_17d93c:
    // 0x17d93c: 0x8f848314
    ctx->pc = 0x17d93cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
label_17d940:
    // 0x17d940: 0x3c02ffff
    ctx->pc = 0x17d940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x17d944: 0x24830040
    ctx->pc = 0x17d944u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 64));
    // 0x17d948: 0x3442ffc0
    ctx->pc = 0x17d948u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x17d94c: 0x8f858310
    ctx->pc = 0x17d94cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935312)));
    // 0x17d950: 0x621824
    ctx->pc = 0x17d950u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17d954: 0x8f878320
    ctx->pc = 0x17d954u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935328)));
    // 0x17d958: 0x60302d
    ctx->pc = 0x17d958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d95c: 0xaf838318
    ctx->pc = 0x17d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935320), GPR_U32(ctx, 3));
    // 0x17d960: 0xc05dbac
    ctx->pc = 0x17D960u;
    SET_GPR_U32(ctx, 31, 0x17D968u);
    ctx->pc = 0x17D964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Create_0x176eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D968u; }
        else if (ctx->pc != 0x17D968u) { ctx->pc = 0x17D968u; }
    }
    if (ctx->pc != 0x17D968u) { return; }
    ctx->pc = 0x17D968u;
    // 0x17d968: 0x1440000c
    ctx->pc = 0x17D968u;
    {
        const bool branch_taken_0x17d968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D96Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 2));
        if (branch_taken_0x17d968) {
            ctx->pc = 0x17D99Cu;
            goto label_17d99c;
        }
    }
    ctx->pc = 0x17D970u;
    // 0x17d970: 0x3c04002c
    ctx->pc = 0x17d970u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17d974: 0xc05114a
    ctx->pc = 0x17D974u;
    SET_GPR_U32(ctx, 31, 0x17D97Cu);
    ctx->pc = 0x17D978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950976));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D97Cu; }
        else if (ctx->pc != 0x17D97Cu) { ctx->pc = 0x17D97Cu; }
    }
    if (ctx->pc != 0x17D97Cu) { return; }
    ctx->pc = 0x17D97Cu;
    // 0x17d97c: 0x0
    ctx->pc = 0x17d97cu;
    // NOP
label_17d980:
    // 0x17d980: 0x0
    ctx->pc = 0x17d980u;
    // NOP
    // 0x17d984: 0x0
    ctx->pc = 0x17d984u;
    // NOP
    // 0x17d988: 0x0
    ctx->pc = 0x17d988u;
    // NOP
    // 0x17d98c: 0x0
    ctx->pc = 0x17d98cu;
    // NOP
    // 0x17d990: 0x0
    ctx->pc = 0x17d990u;
    // NOP
    // 0x17d994: 0x1000fffa
    ctx->pc = 0x17D994u;
    {
        const bool branch_taken_0x17d994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d994) {
            ctx->pc = 0x17D980u;
            goto label_17d980;
        }
    }
    ctx->pc = 0x17D99Cu;
label_17d99c:
    // 0x17d99c: 0x3c050018
    ctx->pc = 0x17d99cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x17d9a0: 0x8f84831c
    ctx->pc = 0x17d9a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    // 0x17d9a4: 0x24a5d6f0
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956784));
    // 0x17d9a8: 0xc05dc2c
    ctx->pc = 0x17D9A8u;
    SET_GPR_U32(ctx, 31, 0x17D9B0u);
    ctx->pc = 0x17D9ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_SetRcvCbf_0x1770b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9B0u; }
        else if (ctx->pc != 0x17D9B0u) { ctx->pc = 0x17D9B0u; }
    }
    if (ctx->pc != 0x17D9B0u) { return; }
    ctx->pc = 0x17D9B0u;
    // 0x17d9b0: 0x3c050018
    ctx->pc = 0x17d9b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x17d9b4: 0x8f84831c
    ctx->pc = 0x17d9b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    // 0x17d9b8: 0x24a5d790
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956944));
    // 0x17d9bc: 0xc05dc30
    ctx->pc = 0x17D9BCu;
    SET_GPR_U32(ctx, 31, 0x17D9C4u);
    ctx->pc = 0x17D9C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_SetSndCbf_0x1770c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9C4u; }
        else if (ctx->pc != 0x17D9C4u) { ctx->pc = 0x17D9C4u; }
    }
    if (ctx->pc != 0x17D9C4u) { return; }
    ctx->pc = 0x17D9C4u;
    // 0x17d9c4: 0x24040003
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d9c8: 0x282d
    ctx->pc = 0x17d9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9cc: 0x302d
    ctx->pc = 0x17d9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9d0: 0x382d
    ctx->pc = 0x17d9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9d4: 0xc05dcd2
    ctx->pc = 0x17D9D4u;
    SET_GPR_U32(ctx, 31, 0x17D9DCu);
    ctx->pc = 0x17D9D8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9DCu; }
        else if (ctx->pc != 0x17D9DCu) { ctx->pc = 0x17D9DCu; }
    }
    if (ctx->pc != 0x17D9DCu) { return; }
    ctx->pc = 0x17D9DCu;
    // 0x17d9dc: 0x8f82830c
    ctx->pc = 0x17d9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935308)));
label_17d9e0:
    // 0x17d9e0: 0x24420001
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d9e4: 0xdfbf0010
    ctx->pc = 0x17d9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d9e8: 0xdfb00000
    ctx->pc = 0x17d9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d9ec: 0xaf82830c
    ctx->pc = 0x17d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935308), GPR_U32(ctx, 2));
    // 0x17d9f0: 0x3e00008
    ctx->pc = 0x17D9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D9F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D920u: goto label_17d920;
            case 0x17D93Cu: goto label_17d93c;
            case 0x17D940u: goto label_17d940;
            case 0x17D980u: goto label_17d980;
            case 0x17D99Cu: goto label_17d99c;
            case 0x17D9E0u: goto label_17d9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D9F8u;
}
