#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeNewNode
// Address: 0x211a18 - 0x211a90
void AtreeNewNode_0x211a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211a18u;

    // 0x211a18: 0x27bdffc0
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211a1c: 0xffbf0030
    ctx->pc = 0x211a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x211a20: 0xffb20020
    ctx->pc = 0x211a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211a24: 0xffb10010
    ctx->pc = 0x211a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x211a28: 0xffb00000
    ctx->pc = 0x211a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211a2c: 0x80802d
    ctx->pc = 0x211a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a30: 0xa0882d
    ctx->pc = 0x211a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a34: 0xc0902d
    ctx->pc = 0x211a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a38: 0xe0302d
    ctx->pc = 0x211a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a3c: 0x100382d
    ctx->pc = 0x211a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a40: 0x120402d
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a44: 0x1200000c
    ctx->pc = 0x211A44u;
    {
        const bool branch_taken_0x211a44 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x211A48u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211a44) {
            ctx->pc = 0x211A78u;
            goto label_211a78;
        }
    }
    ctx->pc = 0x211A4Cu;
    // 0x211a4c: 0xc08456c
    ctx->pc = 0x211A4Cu;
    SET_GPR_U32(ctx, 31, 0x211A54u);
    ctx->pc = 0x2115B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodeInit_0x2115b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A54u; }
    }
    if (ctx->pc != 0x211A54u) { return; }
    ctx->pc = 0x211A54u;
    // 0x211a54: 0x200202d
    ctx->pc = 0x211a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a58: 0x220282d
    ctx->pc = 0x211a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a5c: 0x240302d
    ctx->pc = 0x211a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a60: 0xdfbf0030
    ctx->pc = 0x211a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211a64: 0xdfb20020
    ctx->pc = 0x211a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211a68: 0xdfb10010
    ctx->pc = 0x211a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211a6c: 0xdfb00000
    ctx->pc = 0x211a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a70: 0x808466e
    ctx->pc = 0x211A70u;
    ctx->pc = 0x211A74u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2119B8u;
    AtreeNodeInsert_0x2119b8(rdram, ctx, runtime); return;
    ctx->pc = 0x211A78u;
label_211a78:
    // 0x211a78: 0xdfbf0030
    ctx->pc = 0x211a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211a7c: 0xdfb20020
    ctx->pc = 0x211a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211a80: 0xdfb10010
    ctx->pc = 0x211a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211a84: 0xdfb00000
    ctx->pc = 0x211a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a88: 0x3e00008
    ctx->pc = 0x211A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211A8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211A78u: goto label_211a78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211A90u;
}
