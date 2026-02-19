#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: deci2Putchar
// Address: 0x3048e0 - 0x304990
void deci2Putchar_0x3048e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3048e0u;

    // 0x3048e0: 0x27bdffc0
    ctx->pc = 0x3048e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3048e4: 0xffb10010
    ctx->pc = 0x3048e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3048e8: 0x3c11003a
    ctx->pc = 0x3048e8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x3048ec: 0xffb00000
    ctx->pc = 0x3048ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3048f0: 0x8e254278
    ctx->pc = 0x3048f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 17016)));
    // 0x3048f4: 0x80802d
    ctx->pc = 0x3048f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048f8: 0xffbf0030
    ctx->pc = 0x3048f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3048fc: 0x28a2007e
    ctx->pc = 0x3048fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 126));
    // 0x304900: 0x14400009
    ctx->pc = 0x304900u;
    {
        const bool branch_taken_0x304900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x304904u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x304900) {
            ctx->pc = 0x304928u;
            goto label_304928;
        }
    }
    ctx->pc = 0x304908u;
    // 0x304908: 0x3c12003e
    ctx->pc = 0x304908u;
    SET_GPR_U32(ctx, 18, ((uint32_t)62 << 16));
    // 0x30490c: 0xae204278
    ctx->pc = 0x30490cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17016), GPR_U32(ctx, 0));
    // 0x304910: 0x26424200
    ctx->pc = 0x304910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 16896));
    // 0x304914: 0x40202d
    ctx->pc = 0x304914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304918: 0xc0c2238
    ctx->pc = 0x304918u;
    SET_GPR_U32(ctx, 31, 0x304920u);
    ctx->pc = 0x30491Cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3088E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kputs_0x3088e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304920u; }
    }
    if (ctx->pc != 0x304920u) { return; }
    ctx->pc = 0x304920u;
    // 0x304920: 0x10000002
    ctx->pc = 0x304920u;
    {
        const bool branch_taken_0x304920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x304924u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 17016)));
        if (branch_taken_0x304920) {
            ctx->pc = 0x30492Cu;
            goto label_30492c;
        }
    }
    ctx->pc = 0x304928u;
label_304928:
    // 0x304928: 0x3c12003e
    ctx->pc = 0x304928u;
    SET_GPR_U32(ctx, 18, ((uint32_t)62 << 16));
label_30492c:
    // 0x30492c: 0x2402000a
    ctx->pc = 0x30492cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x304930: 0x1602000d
    ctx->pc = 0x304930u;
    {
        const bool branch_taken_0x304930 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x304934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 16896));
        if (branch_taken_0x304930) {
            ctx->pc = 0x304968u;
            goto label_304968;
        }
    }
    ctx->pc = 0x304938u;
    // 0x304938: 0x26444200
    ctx->pc = 0x304938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16896));
    // 0x30493c: 0xae204278
    ctx->pc = 0x30493cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17016), GPR_U32(ctx, 0));
    // 0x304940: 0xa41021
    ctx->pc = 0x304940u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x304944: 0xdfbf0030
    ctx->pc = 0x304944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304948: 0xa0500000
    ctx->pc = 0x304948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x30494c: 0x40182d
    ctx->pc = 0x30494cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304950: 0xdfb20020
    ctx->pc = 0x304950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304954: 0xdfb10010
    ctx->pc = 0x304954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304958: 0xdfb00000
    ctx->pc = 0x304958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30495c: 0xa0600001
    ctx->pc = 0x30495cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x304960: 0x80c2238
    ctx->pc = 0x304960u;
    ctx->pc = 0x304964u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x3088E0u;
    kputs_0x3088e0(rdram, ctx, runtime); return;
    ctx->pc = 0x304968u;
label_304968:
    // 0x304968: 0x24a30001
    ctx->pc = 0x304968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x30496c: 0xae234278
    ctx->pc = 0x30496cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17016), GPR_U32(ctx, 3));
    // 0x304970: 0xa21021
    ctx->pc = 0x304970u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x304974: 0xa0500000
    ctx->pc = 0x304974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x304978: 0xdfbf0030
    ctx->pc = 0x304978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30497c: 0xdfb20020
    ctx->pc = 0x30497cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304980: 0xdfb10010
    ctx->pc = 0x304980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304984: 0xdfb00000
    ctx->pc = 0x304984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304988: 0x3e00008
    ctx->pc = 0x304988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30498Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304928u: goto label_304928;
            case 0x30492Cu: goto label_30492c;
            case 0x304968u: goto label_304968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x304990u;
}
