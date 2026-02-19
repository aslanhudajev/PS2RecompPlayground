#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_bank_info
// Address: 0x223b68 - 0x223bfc
void aud_bank_info_0x223b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223b68u;

    // 0x223b68: 0x27bdffc0
    ctx->pc = 0x223b68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223b6c: 0xffbf0030
    ctx->pc = 0x223b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x223b70: 0xffb20020
    ctx->pc = 0x223b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223b74: 0xffb10010
    ctx->pc = 0x223b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223b78: 0xffb00000
    ctx->pc = 0x223b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223b7c: 0x80802d
    ctx->pc = 0x223b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b80: 0xa0882d
    ctx->pc = 0x223b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b84: 0xc088cb6
    ctx->pc = 0x223B84u;
    SET_GPR_U32(ctx, 31, 0x223B8Cu);
    ctx->pc = 0x223B88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B8Cu; }
    }
    if (ctx->pc != 0x223B8Cu) { return; }
    ctx->pc = 0x223B8Cu;
    // 0x223b8c: 0x3c02003c
    ctx->pc = 0x223b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223b90: 0xac500ac0
    ctx->pc = 0x223b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x223b94: 0x3c02003c
    ctx->pc = 0x223b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223b98: 0x8c420f68
    ctx->pc = 0x223b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3944)));
    // 0x223b9c: 0x1440000e
    ctx->pc = 0x223B9Cu;
    {
        const bool branch_taken_0x223b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223BA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x223b9c) {
            ctx->pc = 0x223BD8u;
            goto label_223bd8;
        }
    }
    ctx->pc = 0x223BA4u;
    // 0x223ba4: 0x24040007
    ctx->pc = 0x223ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x223ba8: 0xc088ce8
    ctx->pc = 0x223BA8u;
    SET_GPR_U32(ctx, 31, 0x223BB0u);
    ctx->pc = 0x223BACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BB0u; }
    }
    if (ctx->pc != 0x223BB0u) { return; }
    ctx->pc = 0x223BB0u;
    // 0x223bb0: 0x4400008
    ctx->pc = 0x223BB0u;
    {
        const bool branch_taken_0x223bb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x223BB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223bb0) {
            ctx->pc = 0x223BD4u;
            goto label_223bd4;
        }
    }
    ctx->pc = 0x223BB8u;
    // 0x223bb8: 0x24430b00
    ctx->pc = 0x223bb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2816));
    // 0x223bbc: 0x8c440b00
    ctx->pc = 0x223bbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
    // 0x223bc0: 0x94620004
    ctx->pc = 0x223bc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x223bc4: 0xa6220000
    ctx->pc = 0x223bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x223bc8: 0x94620008
    ctx->pc = 0x223bc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x223bcc: 0x10000004
    ctx->pc = 0x223BCCu;
    {
        const bool branch_taken_0x223bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223BD0u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x223bcc) {
            ctx->pc = 0x223BE0u;
            goto label_223be0;
        }
    }
    ctx->pc = 0x223BD4u;
label_223bd4:
    // 0x223bd4: 0x2404ffff
    ctx->pc = 0x223bd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_223bd8:
    // 0x223bd8: 0xa6200000
    ctx->pc = 0x223bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x223bdc: 0xa6400000
    ctx->pc = 0x223bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_223be0:
    // 0x223be0: 0x80102d
    ctx->pc = 0x223be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223be4: 0xdfbf0030
    ctx->pc = 0x223be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223be8: 0xdfb20020
    ctx->pc = 0x223be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223bec: 0xdfb10010
    ctx->pc = 0x223becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223bf0: 0xdfb00000
    ctx->pc = 0x223bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223bf4: 0x3e00008
    ctx->pc = 0x223BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223BF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223BD4u: goto label_223bd4;
            case 0x223BD8u: goto label_223bd8;
            case 0x223BE0u: goto label_223be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223BFCu;
}
