#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetupVramPageStart
// Address: 0x2ad498 - 0x2ad594
void pbSetupVramPageStart_0x2ad498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad498u;

    // 0x2ad498: 0x27bdffe0
    ctx->pc = 0x2ad498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad49c: 0xffbf0010
    ctx->pc = 0x2ad49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad4a0: 0xffb00000
    ctx->pc = 0x2ad4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad4a4: 0x80182d
    ctx->pc = 0x2ad4a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4a8: 0x3c020036
    ctx->pc = 0x2ad4a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad4ac: 0x4610004
    ctx->pc = 0x2AD4ACu;
    {
        const bool branch_taken_0x2ad4ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AD4B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2ad4ac) {
            ctx->pc = 0x2AD4C0u;
            goto label_2ad4c0;
        }
    }
    ctx->pc = 0x2AD4B4u;
    // 0x2ad4b4: 0x8c420010
    ctx->pc = 0x2ad4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ad4b8: 0x8c420044
    ctx->pc = 0x2ad4b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2ad4bc: 0x21940
    ctx->pc = 0x2ad4bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
label_2ad4c0:
    // 0x2ad4c0: 0x3c020037
    ctx->pc = 0x2ad4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad4c4: 0xac438a68
    ctx->pc = 0x2ad4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937192), GPR_U32(ctx, 3));
    // 0x2ad4c8: 0x3c020037
    ctx->pc = 0x2ad4c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad4cc: 0x24640020
    ctx->pc = 0x2ad4ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2ad4d0: 0xac448a6c
    ctx->pc = 0x2ad4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937196), GPR_U32(ctx, 4));
    // 0x2ad4d4: 0x3c020037
    ctx->pc = 0x2ad4d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad4d8: 0xac448a84
    ctx->pc = 0x2ad4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937220), GPR_U32(ctx, 4));
    // 0x2ad4dc: 0x3c020037
    ctx->pc = 0x2ad4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad4e0: 0xac448a80
    ctx->pc = 0x2ad4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937216), GPR_U32(ctx, 4));
    // 0x2ad4e4: 0x3c100037
    ctx->pc = 0x2ad4e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2ad4e8: 0x24620820
    ctx->pc = 0x2ad4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2080));
    // 0x2ad4ec: 0xc0ab50e
    ctx->pc = 0x2AD4ECu;
    SET_GPR_U32(ctx, 31, 0x2AD4F4u);
    ctx->pc = 0x2AD4F0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937224), GPR_U32(ctx, 2));
    ctx->pc = 0x2AD438u;
    {
        const uint32_t __entryPc = ctx->pc;
        lightmapTex0Reg_0x2ad438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4F4u; }
    }
    if (ctx->pc != 0x2AD4F4u) { return; }
    ctx->pc = 0x2AD4F4u;
    // 0x2ad4f4: 0x3c030037
    ctx->pc = 0x2ad4f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ad4f8: 0xfc6286d8
    ctx->pc = 0x2ad4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294936280), GPR_U64(ctx, 2));
    // 0x2ad4fc: 0x3c020037
    ctx->pc = 0x2ad4fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad500: 0x8e038a88
    ctx->pc = 0x2ad500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294937224)));
    // 0x2ad504: 0xac438a60
    ctx->pc = 0x2ad504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937184), GPR_U32(ctx, 3));
    // 0x2ad508: 0x3c040037
    ctx->pc = 0x2ad508u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2ad50c: 0x24024000
    ctx->pc = 0x2ad50cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ad510: 0x431023
    ctx->pc = 0x2ad510u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad514: 0x21fc2
    ctx->pc = 0x2ad514u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ad518: 0x431021
    ctx->pc = 0x2ad518u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad51c: 0x21043
    ctx->pc = 0x2ad51cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ad520: 0x2403ffe0
    ctx->pc = 0x2ad520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2ad524: 0x431024
    ctx->pc = 0x2ad524u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad528: 0xac828a64
    ctx->pc = 0x2ad528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294937188), GPR_U32(ctx, 2));
    // 0x2ad52c: 0x282d
    ctx->pc = 0x2ad52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad530: 0x3c020037
    ctx->pc = 0x2ad530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad534: 0x24488a90
    ctx->pc = 0x2ad534u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294937232));
    // 0x2ad538: 0x3c030037
    ctx->pc = 0x2ad538u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ad53c: 0x80102d
    ctx->pc = 0x2ad53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad540: 0x8c468a64
    ctx->pc = 0x2ad540u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294937188)));
    // 0x2ad544: 0x8c6a8a60
    ctx->pc = 0x2ad544u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4294937184)));
    // 0x2ad548: 0x3c020037
    ctx->pc = 0x2ad548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad54c: 0x24478aa0
    ctx->pc = 0x2ad54cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294937248));
    // 0x2ad550: 0x51880
    ctx->pc = 0x2ad550u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ad554: 0x0
    ctx->pc = 0x2ad554u;
    // NOP
label_2ad558:
    // 0x2ad558: 0x682021
    ctx->pc = 0x2ad558u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ad55c: 0xa64818
    ctx->pc = 0x2ad55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ad560: 0x12a1021
    ctx->pc = 0x2ad560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2ad564: 0xac820000
    ctx->pc = 0x2ad564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ad568: 0x671821
    ctx->pc = 0x2ad568u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ad56c: 0x461021
    ctx->pc = 0x2ad56cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ad570: 0xac620000
    ctx->pc = 0x2ad570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ad574: 0x24a50001
    ctx->pc = 0x2ad574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ad578: 0x28a20002
    ctx->pc = 0x2ad578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x2ad57c: 0x5440fff6
    ctx->pc = 0x2AD57Cu;
    {
        const bool branch_taken_0x2ad57c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ad57c) {
            ctx->pc = 0x2AD580u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
            ctx->pc = 0x2AD558u;
            goto label_2ad558;
        }
    }
    ctx->pc = 0x2AD584u;
    // 0x2ad584: 0xdfbf0010
    ctx->pc = 0x2ad584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad588: 0xdfb00000
    ctx->pc = 0x2ad588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad58c: 0x3e00008
    ctx->pc = 0x2AD58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD4C0u: goto label_2ad4c0;
            case 0x2AD558u: goto label_2ad558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD594u;
}
