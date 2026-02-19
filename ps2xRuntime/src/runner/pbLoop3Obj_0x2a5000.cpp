#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLoop3Obj
// Address: 0x2a5000 - 0x2a5108
void pbLoop3Obj_0x2a5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5000u;

    // 0x2a5000: 0x27bdff60
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a5004: 0xffbf0090
    ctx->pc = 0x2a5004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a5008: 0xffb70080
    ctx->pc = 0x2a5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2a500c: 0xffb60070
    ctx->pc = 0x2a500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a5010: 0xffb50060
    ctx->pc = 0x2a5010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2a5014: 0xffb40050
    ctx->pc = 0x2a5014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a5018: 0xffb30040
    ctx->pc = 0x2a5018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a501c: 0xffb20030
    ctx->pc = 0x2a501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a5020: 0xffb10020
    ctx->pc = 0x2a5020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a5024: 0xffb00010
    ctx->pc = 0x2a5024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a5028: 0x80b82d
    ctx->pc = 0x2a5028u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a502c: 0xa0b02d
    ctx->pc = 0x2a502cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5030: 0xc0a82d
    ctx->pc = 0x2a5030u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5034: 0xe0a02d
    ctx->pc = 0x2a5034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5038: 0x100982d
    ctx->pc = 0x2a5038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a503c: 0x120902d
    ctx->pc = 0x2a503cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5040: 0x3c020036
    ctx->pc = 0x2a5040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a5044: 0x8c50dee0
    ctx->pc = 0x2a5044u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a5048: 0x24020001
    ctx->pc = 0x2a5048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a504c: 0xafa20000
    ctx->pc = 0x2a504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a5050: 0x8fa20000
    ctx->pc = 0x2a5050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5054: 0x10400021
    ctx->pc = 0x2A5054u;
    {
        const bool branch_taken_0x2a5054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5058u;
        SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
        if (branch_taken_0x2a5054) {
            ctx->pc = 0x2A50DCu;
            goto label_2a50dc;
        }
    }
    ctx->pc = 0x2A505Cu;
    // 0x2a505c: 0x8e22b17c
    ctx->pc = 0x2a505cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947196)));
label_2a5060:
    // 0x2a5060: 0x0
    ctx->pc = 0x2a5060u;
    // NOP
    // 0x2a5064: 0x0
    ctx->pc = 0x2a5064u;
    // NOP
    // 0x2a5068: 0x0
    ctx->pc = 0x2a5068u;
    // NOP
    // 0x2a506c: 0x0
    ctx->pc = 0x2a506cu;
    // NOP
    // 0x2a5070: 0x0
    ctx->pc = 0x2a5070u;
    // NOP
    // 0x2a5074: 0x1440fffa
    ctx->pc = 0x2A5074u;
    {
        const bool branch_taken_0x2a5074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5074) {
            ctx->pc = 0x2A5060u;
            goto label_2a5060;
        }
    }
    ctx->pc = 0x2A507Cu;
    // 0x2a507c: 0x8e030010
    ctx->pc = 0x2a507cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a5080: 0x8c620004
    ctx->pc = 0x2a5080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a5084: 0x24420001
    ctx->pc = 0x2a5084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a5088: 0xac620004
    ctx->pc = 0x2a5088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a508c: 0x2e0202d
    ctx->pc = 0x2a508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5090: 0x2c0282d
    ctx->pc = 0x2a5090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5094: 0xc0af988
    ctx->pc = 0x2A5094u;
    SET_GPR_U32(ctx, 31, 0x2A509Cu);
    ctx->pc = 0x2A5098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A509Cu; }
    }
    if (ctx->pc != 0x2A509Cu) { return; }
    ctx->pc = 0x2A509Cu;
    // 0x2a509c: 0x2a0202d
    ctx->pc = 0x2a509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50a0: 0x280282d
    ctx->pc = 0x2a50a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50a4: 0xc0af988
    ctx->pc = 0x2A50A4u;
    SET_GPR_U32(ctx, 31, 0x2A50ACu);
    ctx->pc = 0x2A50A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50ACu; }
    }
    if (ctx->pc != 0x2A50ACu) { return; }
    ctx->pc = 0x2A50ACu;
    // 0x2a50ac: 0x260202d
    ctx->pc = 0x2a50acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50b0: 0x240282d
    ctx->pc = 0x2a50b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50b4: 0xc0af988
    ctx->pc = 0x2A50B4u;
    SET_GPR_U32(ctx, 31, 0x2A50BCu);
    ctx->pc = 0x2A50B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50BCu; }
    }
    if (ctx->pc != 0x2A50BCu) { return; }
    ctx->pc = 0x2A50BCu;
    // 0x2a50bc: 0x8e020010
    ctx->pc = 0x2a50bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a50c0: 0x8c420004
    ctx->pc = 0x2a50c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a50c4: 0x30420001
    ctx->pc = 0x2a50c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a50c8: 0x24420001
    ctx->pc = 0x2a50c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a50cc: 0xae22b17c
    ctx->pc = 0x2a50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947196), GPR_U32(ctx, 2));
    // 0x2a50d0: 0x8fa20000
    ctx->pc = 0x2a50d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a50d4: 0x1440ffe2
    ctx->pc = 0x2A50D4u;
    {
        const bool branch_taken_0x2a50d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A50D8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947196)));
        if (branch_taken_0x2a50d4) {
            ctx->pc = 0x2A5060u;
            goto label_2a5060;
        }
    }
    ctx->pc = 0x2A50DCu;
label_2a50dc:
    // 0x2a50dc: 0xdfbf0090
    ctx->pc = 0x2a50dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a50e0: 0xdfb70080
    ctx->pc = 0x2a50e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a50e4: 0xdfb60070
    ctx->pc = 0x2a50e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a50e8: 0xdfb50060
    ctx->pc = 0x2a50e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a50ec: 0xdfb40050
    ctx->pc = 0x2a50ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a50f0: 0xdfb30040
    ctx->pc = 0x2a50f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a50f4: 0xdfb20030
    ctx->pc = 0x2a50f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a50f8: 0xdfb10020
    ctx->pc = 0x2a50f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a50fc: 0xdfb00010
    ctx->pc = 0x2a50fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5100: 0x3e00008
    ctx->pc = 0x2A5100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5104u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5060u: goto label_2a5060;
            case 0x2A50DCu: goto label_2a50dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5108u;
}
