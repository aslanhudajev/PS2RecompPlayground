#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_load_bank
// Address: 0x223c00 - 0x223ce0
void aud_load_bank_0x223c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223c00u;

    // 0x223c00: 0x27bdff90
    ctx->pc = 0x223c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x223c04: 0xffbf0060
    ctx->pc = 0x223c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x223c08: 0xffb50050
    ctx->pc = 0x223c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x223c0c: 0xffb40040
    ctx->pc = 0x223c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x223c10: 0xffb30030
    ctx->pc = 0x223c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x223c14: 0xffb20020
    ctx->pc = 0x223c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223c18: 0xffb10010
    ctx->pc = 0x223c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223c1c: 0xffb00000
    ctx->pc = 0x223c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223c20: 0x80882d
    ctx->pc = 0x223c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c24: 0xa0982d
    ctx->pc = 0x223c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c28: 0xc0a02d
    ctx->pc = 0x223c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c2c: 0xe0a82d
    ctx->pc = 0x223c2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c30: 0x3c02003c
    ctx->pc = 0x223c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223c34: 0x8c420f6c
    ctx->pc = 0x223c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3948)));
    // 0x223c38: 0x10400003
    ctx->pc = 0x223C38u;
    {
        const bool branch_taken_0x223c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x223C3Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x223c38) {
            ctx->pc = 0x223C48u;
            goto label_223c48;
        }
    }
    ctx->pc = 0x223C40u;
    // 0x223c40: 0x1000001e
    ctx->pc = 0x223C40u;
    {
        const bool branch_taken_0x223c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223C44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x223c40) {
            ctx->pc = 0x223CBCu;
            goto label_223cbc;
        }
    }
    ctx->pc = 0x223C48u;
label_223c48:
    // 0x223c48: 0xc088cb6
    ctx->pc = 0x223C48u;
    SET_GPR_U32(ctx, 31, 0x223C50u);
    ctx->pc = 0x223C4Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C50u; }
    }
    if (ctx->pc != 0x223C50u) { return; }
    ctx->pc = 0x223C50u;
    // 0x223c50: 0x26040b40
    ctx->pc = 0x223c50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2880));
    // 0x223c54: 0x220282d
    ctx->pc = 0x223c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c58: 0xc0bf42e
    ctx->pc = 0x223C58u;
    SET_GPR_U32(ctx, 31, 0x223C60u);
    ctx->pc = 0x223C5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C60u; }
    }
    if (ctx->pc != 0x223C60u) { return; }
    ctx->pc = 0x223C60u;
    // 0x223c60: 0x3c02003c
    ctx->pc = 0x223c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223c64: 0x24510ac0
    ctx->pc = 0x223c64u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x223c68: 0x26100b40
    ctx->pc = 0x223c68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2880));
    // 0x223c6c: 0xac500ac0
    ctx->pc = 0x223c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x223c70: 0xc0bf306
    ctx->pc = 0x223C70u;
    SET_GPR_U32(ctx, 31, 0x223C78u);
    ctx->pc = 0x223C74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C78u; }
    }
    if (ctx->pc != 0x223C78u) { return; }
    ctx->pc = 0x223C78u;
    // 0x223c78: 0x24420001
    ctx->pc = 0x223c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x223c7c: 0xae220004
    ctx->pc = 0x223c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x223c80: 0xae330008
    ctx->pc = 0x223c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x223c84: 0xae34000c
    ctx->pc = 0x223c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x223c88: 0x24040004
    ctx->pc = 0x223c88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x223c8c: 0xc088ce8
    ctx->pc = 0x223C8Cu;
    SET_GPR_U32(ctx, 31, 0x223C94u);
    ctx->pc = 0x223C90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C94u; }
    }
    if (ctx->pc != 0x223C94u) { return; }
    ctx->pc = 0x223C94u;
    // 0x223c94: 0x4400008
    ctx->pc = 0x223C94u;
    {
        const bool branch_taken_0x223c94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x223C98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223c94) {
            ctx->pc = 0x223CB8u;
            goto label_223cb8;
        }
    }
    ctx->pc = 0x223C9Cu;
    // 0x223c9c: 0x8c520b00
    ctx->pc = 0x223c9cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
    // 0x223ca0: 0x6400005
    ctx->pc = 0x223CA0u;
    {
        const bool branch_taken_0x223ca0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x223CA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2816));
        if (branch_taken_0x223ca0) {
            ctx->pc = 0x223CB8u;
            goto label_223cb8;
        }
    }
    ctx->pc = 0x223CA8u;
    // 0x223ca8: 0x8c620004
    ctx->pc = 0x223ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x223cac: 0xaea20008
    ctx->pc = 0x223cacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x223cb0: 0x3c02003c
    ctx->pc = 0x223cb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223cb4: 0xac550f6c
    ctx->pc = 0x223cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3948), GPR_U32(ctx, 21));
label_223cb8:
    // 0x223cb8: 0x240102d
    ctx->pc = 0x223cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_223cbc:
    // 0x223cbc: 0xdfbf0060
    ctx->pc = 0x223cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223cc0: 0xdfb50050
    ctx->pc = 0x223cc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223cc4: 0xdfb40040
    ctx->pc = 0x223cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223cc8: 0xdfb30030
    ctx->pc = 0x223cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223ccc: 0xdfb20020
    ctx->pc = 0x223cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223cd0: 0xdfb10010
    ctx->pc = 0x223cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223cd4: 0xdfb00000
    ctx->pc = 0x223cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223cd8: 0x3e00008
    ctx->pc = 0x223CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223C48u: goto label_223c48;
            case 0x223CB8u: goto label_223cb8;
            case 0x223CBCu: goto label_223cbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223CE0u;
}
