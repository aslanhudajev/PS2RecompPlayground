#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLoadFile
// Address: 0x292940 - 0x2929a8
void CritterLoadFile_0x292940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292940u;

    // 0x292940: 0x27bdffe0
    ctx->pc = 0x292940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292944: 0xffbf0010
    ctx->pc = 0x292944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292948: 0xffb00000
    ctx->pc = 0x292948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29294c: 0x3c030036
    ctx->pc = 0x29294cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x292950: 0x8c62d5fc
    ctx->pc = 0x292950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956540)));
    // 0x292954: 0x40802d
    ctx->pc = 0x292954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292958: 0x24420001
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x29295c: 0xc0b4e96
    ctx->pc = 0x29295Cu;
    SET_GPR_U32(ctx, 31, 0x292964u);
    ctx->pc = 0x292960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956540), GPR_U32(ctx, 2));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292964u; }
    }
    if (ctx->pc != 0x292964u) { return; }
    ctx->pc = 0x292964u;
    // 0x292964: 0x3c040036
    ctx->pc = 0x292964u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x292968: 0x2484d740
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956864));
    // 0x29296c: 0x101880
    ctx->pc = 0x29296cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x292970: 0x641821
    ctx->pc = 0x292970u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292974: 0xac620000
    ctx->pc = 0x292974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x292978: 0x24030050
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x29297c: 0x2031818
    ctx->pc = 0x29297cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292980: 0x3c040036
    ctx->pc = 0x292980u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x292984: 0x2484d600
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956544));
    // 0x292988: 0x642021
    ctx->pc = 0x292988u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29298c: 0xc0a46b6
    ctx->pc = 0x29298Cu;
    SET_GPR_U32(ctx, 31, 0x292994u);
    ctx->pc = 0x292990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitHeader_0x291ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292994u; }
    }
    if (ctx->pc != 0x292994u) { return; }
    ctx->pc = 0x292994u;
    // 0x292994: 0x200102d
    ctx->pc = 0x292994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292998: 0xdfbf0010
    ctx->pc = 0x292998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29299c: 0xdfb00000
    ctx->pc = 0x29299cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2929a0: 0x3e00008
    ctx->pc = 0x2929A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2929A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2929A8u;
}
