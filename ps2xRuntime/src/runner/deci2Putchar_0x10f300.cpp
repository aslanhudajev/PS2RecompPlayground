#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: deci2Putchar
// Address: 0x10f300 - 0x10f3b0
void deci2Putchar_0x10f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f300u;

    // 0x10f300: 0x27bdffc0
    ctx->pc = 0x10f300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10f304: 0xffb10010
    ctx->pc = 0x10f304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10f308: 0x3c110017
    ctx->pc = 0x10f308u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x10f30c: 0xffb00000
    ctx->pc = 0x10f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f310: 0x8e25fb28
    ctx->pc = 0x10f310u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294966056)));
    // 0x10f314: 0x80802d
    ctx->pc = 0x10f314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f318: 0xffbf0030
    ctx->pc = 0x10f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f31c: 0x28a2007e
    ctx->pc = 0x10f31cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 126));
    // 0x10f320: 0x14400009
    ctx->pc = 0x10F320u;
    {
        const bool branch_taken_0x10f320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10F324u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x10f320) {
            ctx->pc = 0x10F348u;
            goto label_10f348;
        }
    }
    ctx->pc = 0x10F328u;
    // 0x10f328: 0x3c120017
    ctx->pc = 0x10f328u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x10f32c: 0xae20fb28
    ctx->pc = 0x10f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966056), GPR_U32(ctx, 0));
    // 0x10f330: 0x26426e00
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 28160));
    // 0x10f334: 0x40202d
    ctx->pc = 0x10f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f338: 0xc04556a
    ctx->pc = 0x10F338u;
    SET_GPR_U32(ctx, 31, 0x10F340u);
    ctx->pc = 0x10F33Cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1155A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        kputs_0x1155a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F340u; }
    }
    if (ctx->pc != 0x10F340u) { return; }
    ctx->pc = 0x10F340u;
    // 0x10f340: 0x10000002
    ctx->pc = 0x10F340u;
    {
        const bool branch_taken_0x10f340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F344u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294966056)));
        if (branch_taken_0x10f340) {
            ctx->pc = 0x10F34Cu;
            goto label_10f34c;
        }
    }
    ctx->pc = 0x10F348u;
label_10f348:
    // 0x10f348: 0x3c120017
    ctx->pc = 0x10f348u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
label_10f34c:
    // 0x10f34c: 0x2402000a
    ctx->pc = 0x10f34cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f350: 0x1602000d
    ctx->pc = 0x10F350u;
    {
        const bool branch_taken_0x10f350 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x10F354u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 28160));
        if (branch_taken_0x10f350) {
            ctx->pc = 0x10F388u;
            goto label_10f388;
        }
    }
    ctx->pc = 0x10F358u;
    // 0x10f358: 0x26446e00
    ctx->pc = 0x10f358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 28160));
    // 0x10f35c: 0xae20fb28
    ctx->pc = 0x10f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966056), GPR_U32(ctx, 0));
    // 0x10f360: 0xa41021
    ctx->pc = 0x10f360u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10f364: 0xdfbf0030
    ctx->pc = 0x10f364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f368: 0xa0500000
    ctx->pc = 0x10f368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10f36c: 0x40182d
    ctx->pc = 0x10f36cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f370: 0xdfb20020
    ctx->pc = 0x10f370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f374: 0xdfb10010
    ctx->pc = 0x10f374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f378: 0xdfb00000
    ctx->pc = 0x10f378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f37c: 0xa0600001
    ctx->pc = 0x10f37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f380: 0x804556a
    ctx->pc = 0x10F380u;
    ctx->pc = 0x10F384u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1155A8u;
    kputs_0x1155a8(rdram, ctx, runtime); return;
    ctx->pc = 0x10F388u;
label_10f388:
    // 0x10f388: 0x24a30001
    ctx->pc = 0x10f388u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10f38c: 0xae23fb28
    ctx->pc = 0x10f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966056), GPR_U32(ctx, 3));
    // 0x10f390: 0xa21021
    ctx->pc = 0x10f390u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10f394: 0xa0500000
    ctx->pc = 0x10f394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10f398: 0xdfbf0030
    ctx->pc = 0x10f398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f39c: 0xdfb20020
    ctx->pc = 0x10f39cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f3a0: 0xdfb10010
    ctx->pc = 0x10f3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f3a4: 0xdfb00000
    ctx->pc = 0x10f3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3a8: 0x3e00008
    ctx->pc = 0x10F3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F348u: goto label_10f348;
            case 0x10F34Cu: goto label_10f34c;
            case 0x10F388u: goto label_10f388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10F3B0u;
}
