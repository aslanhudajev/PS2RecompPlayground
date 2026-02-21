#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: typeError
// Address: 0x2b5258 - 0x2b5320
void typeError_0x2b5258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5258u;

    // 0x2b5258: 0x27bdffa0
    ctx->pc = 0x2b5258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b525c: 0xffbf0050
    ctx->pc = 0x2b525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b5260: 0xffb40040
    ctx->pc = 0x2b5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b5264: 0xffb30030
    ctx->pc = 0x2b5264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b5268: 0xffb20020
    ctx->pc = 0x2b5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b526c: 0xffb10010
    ctx->pc = 0x2b526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b5270: 0xffb00000
    ctx->pc = 0x2b5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5274: 0x80982d
    ctx->pc = 0x2b5274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5278: 0xa0802d
    ctx->pc = 0x2b5278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b527c: 0xc0902d
    ctx->pc = 0x2b527cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5280: 0x8e620000
    ctx->pc = 0x2b5280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b5284: 0x24140020
    ctx->pc = 0x2b5284u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b5288: 0x1054001d
    ctx->pc = 0x2B5288u;
    {
        const bool branch_taken_0x2b5288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x2B528Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5288) {
            ctx->pc = 0x2B5300u;
            goto label_2b5300;
        }
    }
    ctx->pc = 0x2B5290u;
    // 0x2b5290: 0x3c04003b
    ctx->pc = 0x2b5290u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b5294: 0x24844650
    ctx->pc = 0x2b5294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b5298: 0x24050020
    ctx->pc = 0x2b5298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b529c: 0x3c06003b
    ctx->pc = 0x2b529cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b52a0: 0x24c60d80
    ctx->pc = 0x2b52a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b52a4: 0xc0ad0d6
    ctx->pc = 0x2B52A4u;
    SET_GPR_U32(ctx, 31, 0x2B52ACu);
    ctx->pc = 0x2B52A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52ACu; }
    }
    if (ctx->pc != 0x2B52ACu) { return; }
    ctx->pc = 0x2B52ACu;
    // 0x2b52ac: 0xc0ad082
    ctx->pc = 0x2B52ACu;
    SET_GPR_U32(ctx, 31, 0x2B52B4u);
    ctx->pc = 0x2B52B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52B4u; }
    }
    if (ctx->pc != 0x2B52B4u) { return; }
    ctx->pc = 0x2B52B4u;
    // 0x2b52b4: 0x40802d
    ctx->pc = 0x2b52b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52b8: 0xc0ad082
    ctx->pc = 0x2B52B8u;
    SET_GPR_U32(ctx, 31, 0x2B52C0u);
    ctx->pc = 0x2B52BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52C0u; }
    }
    if (ctx->pc != 0x2B52C0u) { return; }
    ctx->pc = 0x2B52C0u;
    // 0x2b52c0: 0x3c04003b
    ctx->pc = 0x2b52c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b52c4: 0x24844990
    ctx->pc = 0x2b52c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18832));
    // 0x2b52c8: 0x220282d
    ctx->pc = 0x2b52c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52cc: 0x220302d
    ctx->pc = 0x2b52ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52d0: 0x200382d
    ctx->pc = 0x2b52d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52d4: 0xc0b4a34
    ctx->pc = 0x2B52D4u;
    SET_GPR_U32(ctx, 31, 0x2B52DCu);
    ctx->pc = 0x2B52D8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52DCu; }
    }
    if (ctx->pc != 0x2B52DCu) { return; }
    ctx->pc = 0x2B52DCu;
    // 0x2b52dc: 0x3c04003b
    ctx->pc = 0x2b52dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b52e0: 0xc0b4a34
    ctx->pc = 0x2B52E0u;
    SET_GPR_U32(ctx, 31, 0x2B52E8u);
    ctx->pc = 0x2B52E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52E8u; }
    }
    if (ctx->pc != 0x2B52E8u) { return; }
    ctx->pc = 0x2B52E8u;
    // 0x2b52e8: 0x3c020037
    ctx->pc = 0x2b52e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b52ec: 0x8c4320ac
    ctx->pc = 0x2b52ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b52f0: 0x8c620048
    ctx->pc = 0x2b52f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b52f4: 0x34420001
    ctx->pc = 0x2b52f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b52f8: 0xac620048
    ctx->pc = 0x2b52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b52fc: 0xae740000
    ctx->pc = 0x2b52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_2b5300:
    // 0x2b5300: 0xdfbf0050
    ctx->pc = 0x2b5300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5304: 0xdfb40040
    ctx->pc = 0x2b5304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5308: 0xdfb30030
    ctx->pc = 0x2b5308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b530c: 0xdfb20020
    ctx->pc = 0x2b530cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5310: 0xdfb10010
    ctx->pc = 0x2b5310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5314: 0xdfb00000
    ctx->pc = 0x2b5314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5318: 0x3e00008
    ctx->pc = 0x2B5318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B531Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5300u: goto label_2b5300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5320u;
}
