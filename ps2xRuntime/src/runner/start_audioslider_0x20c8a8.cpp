#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_audioslider
// Address: 0x20c8a8 - 0x20c978
void start_audioslider_0x20c8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20c8a8u;

    // 0x20c8a8: 0x27bdffe0
    ctx->pc = 0x20c8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c8ac: 0xffbf0010
    ctx->pc = 0x20c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c8b0: 0xffb00000
    ctx->pc = 0x20c8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c8b4: 0x80802d
    ctx->pc = 0x20c8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8b8: 0x3c04003a
    ctx->pc = 0x20c8b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c8bc: 0x248453b8
    ctx->pc = 0x20c8bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21432));
    // 0x20c8c0: 0x282d
    ctx->pc = 0x20c8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8c4: 0xc0b0c08
    ctx->pc = 0x20C8C4u;
    SET_GPR_U32(ctx, 31, 0x20C8CCu);
    ctx->pc = 0x20C8C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8CCu; }
    }
    if (ctx->pc != 0x20C8CCu) { return; }
    ctx->pc = 0x20C8CCu;
    // 0x20c8cc: 0xae020008
    ctx->pc = 0x20c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x20c8d0: 0x3c04003a
    ctx->pc = 0x20c8d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c8d4: 0x248453c8
    ctx->pc = 0x20c8d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21448));
    // 0x20c8d8: 0x282d
    ctx->pc = 0x20c8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8dc: 0xc0b0c08
    ctx->pc = 0x20C8DCu;
    SET_GPR_U32(ctx, 31, 0x20C8E4u);
    ctx->pc = 0x20C8E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8E4u; }
    }
    if (ctx->pc != 0x20C8E4u) { return; }
    ctx->pc = 0x20C8E4u;
    // 0x20c8e4: 0xae02000c
    ctx->pc = 0x20c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20c8e8: 0x3c04003a
    ctx->pc = 0x20c8e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c8ec: 0x248453d8
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21464));
    // 0x20c8f0: 0x282d
    ctx->pc = 0x20c8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8f4: 0xc0b0c08
    ctx->pc = 0x20C8F4u;
    SET_GPR_U32(ctx, 31, 0x20C8FCu);
    ctx->pc = 0x20C8F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8FCu; }
    }
    if (ctx->pc != 0x20C8FCu) { return; }
    ctx->pc = 0x20C8FCu;
    // 0x20c8fc: 0xae020004
    ctx->pc = 0x20c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20c900: 0x3c04003a
    ctx->pc = 0x20c900u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c904: 0x248453e8
    ctx->pc = 0x20c904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21480));
    // 0x20c908: 0x282d
    ctx->pc = 0x20c908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c90c: 0xc0b0c08
    ctx->pc = 0x20C90Cu;
    SET_GPR_U32(ctx, 31, 0x20C914u);
    ctx->pc = 0x20C910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C914u; }
    }
    if (ctx->pc != 0x20C914u) { return; }
    ctx->pc = 0x20C914u;
    // 0x20c914: 0xae020014
    ctx->pc = 0x20c914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x20c918: 0x3c04003a
    ctx->pc = 0x20c918u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20c91c: 0x248453f8
    ctx->pc = 0x20c91cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21496));
    // 0x20c920: 0x282d
    ctx->pc = 0x20c920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c924: 0xc0b0c08
    ctx->pc = 0x20C924u;
    SET_GPR_U32(ctx, 31, 0x20C92Cu);
    ctx->pc = 0x20C928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C92Cu; }
    }
    if (ctx->pc != 0x20C92Cu) { return; }
    ctx->pc = 0x20C92Cu;
    // 0x20c92c: 0xae020010
    ctx->pc = 0x20c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x20c930: 0x8e040004
    ctx->pc = 0x20c930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20c934: 0xc0b0ce8
    ctx->pc = 0x20C934u;
    SET_GPR_U32(ctx, 31, 0x20C93Cu);
    ctx->pc = 0x20C938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C93Cu; }
    }
    if (ctx->pc != 0x20C93Cu) { return; }
    ctx->pc = 0x20C93Cu;
    // 0x20c93c: 0x8e040014
    ctx->pc = 0x20c93cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20c940: 0xc0b0ce8
    ctx->pc = 0x20C940u;
    SET_GPR_U32(ctx, 31, 0x20C948u);
    ctx->pc = 0x20C944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C948u; }
    }
    if (ctx->pc != 0x20C948u) { return; }
    ctx->pc = 0x20C948u;
    // 0x20c948: 0x8e040008
    ctx->pc = 0x20c948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20c94c: 0xc0b0ce8
    ctx->pc = 0x20C94Cu;
    SET_GPR_U32(ctx, 31, 0x20C954u);
    ctx->pc = 0x20C950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C954u; }
    }
    if (ctx->pc != 0x20C954u) { return; }
    ctx->pc = 0x20C954u;
    // 0x20c954: 0x8e04000c
    ctx->pc = 0x20c954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20c958: 0xc0b0ce8
    ctx->pc = 0x20C958u;
    SET_GPR_U32(ctx, 31, 0x20C960u);
    ctx->pc = 0x20C95Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C960u; }
    }
    if (ctx->pc != 0x20C960u) { return; }
    ctx->pc = 0x20C960u;
    // 0x20c960: 0x8e040010
    ctx->pc = 0x20c960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20c964: 0x24050001
    ctx->pc = 0x20c964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c968: 0xdfbf0010
    ctx->pc = 0x20c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c96c: 0xdfb00000
    ctx->pc = 0x20c96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c970: 0x80b0ce8
    ctx->pc = 0x20C970u;
    ctx->pc = 0x20C974u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x20C978u;
}
