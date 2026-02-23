#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSPR_RestoreSprMem
// Address: 0x18e2f0 - 0x18e358
void MWSPR_RestoreSprMem_0x18e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSPR_RestoreSprMem");


    ctx->pc = 0x18e2f0u;

    // 0x18e2f0: 0x27bdffc0
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e2f4: 0xffb20020
    ctx->pc = 0x18e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18e2f8: 0x80902d
    ctx->pc = 0x18e2f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2fc: 0xffb10010
    ctx->pc = 0x18e2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e300: 0xffb00000
    ctx->pc = 0x18e300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e304: 0xc0882d
    ctx->pc = 0x18e304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e308: 0xa0802d
    ctx->pc = 0x18e308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e30c: 0xffbf0030
    ctx->pc = 0x18e30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e310: 0xc0547e4
    ctx->pc = 0x18E310u;
    SET_GPR_U32(ctx, 31, 0x18E318u);
    ctx->pc = 0x18E314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E318u; }
        else if (ctx->pc != 0x18E318u) { ctx->pc = 0x18E318u; }
    }
    if (ctx->pc != 0x18E318u) { return; }
    ctx->pc = 0x18E318u;
    // 0x18e318: 0x2403ffff
    ctx->pc = 0x18e318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e31c: 0x2606000f
    ctx->pc = 0x18e31cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 15));
    // 0x18e320: 0x70182a
    ctx->pc = 0x18e320u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x18e324: 0xac510080
    ctx->pc = 0x18e324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x18e328: 0x203300b
    ctx->pc = 0x18e328u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 16));
    // 0x18e32c: 0x240282d
    ctx->pc = 0x18e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e330: 0x40202d
    ctx->pc = 0x18e330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e334: 0xc0548ee
    ctx->pc = 0x18E334u;
    SET_GPR_U32(ctx, 31, 0x18E33Cu);
    ctx->pc = 0x18E338u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    ctx->pc = 0x1523B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSendN_0x1523b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E33Cu; }
        else if (ctx->pc != 0x18E33Cu) { ctx->pc = 0x18E33Cu; }
    }
    if (ctx->pc != 0x18E33Cu) { return; }
    ctx->pc = 0x18E33Cu;
    // 0x18e33c: 0xdfbf0030
    ctx->pc = 0x18e33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e340: 0x102d
    ctx->pc = 0x18e340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e344: 0xdfb20020
    ctx->pc = 0x18e344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e348: 0xdfb10010
    ctx->pc = 0x18e348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e34c: 0xdfb00000
    ctx->pc = 0x18e34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e350: 0x3e00008
    ctx->pc = 0x18E350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E354u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E358u;
}
