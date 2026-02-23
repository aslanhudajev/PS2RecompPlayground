#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: find_fde
// Address: 0x14ccf8 - 0x14cddc
void find_fde_0x14ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("find_fde");


    ctx->pc = 0x14ccf8u;

    // 0x14ccf8: 0x27bdffd0
    ctx->pc = 0x14ccf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ccfc: 0x3c02002d
    ctx->pc = 0x14ccfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14cd00: 0xffb00000
    ctx->pc = 0x14cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14cd04: 0xffb10010
    ctx->pc = 0x14cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x14cd08: 0x8c506910
    ctx->pc = 0x14cd08u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 26896)));
    // 0x14cd0c: 0x80882d
    ctx->pc = 0x14cd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd10: 0xffbf0020
    ctx->pc = 0x14cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14cd14: 0x0
    ctx->pc = 0x14cd14u;
    // NOP
label_14cd18:
    // 0x14cd18: 0x1200002b
    ctx->pc = 0x14CD18u;
    {
        const bool branch_taken_0x14cd18 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CD1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cd18) {
            ctx->pc = 0x14CDC8u;
            goto label_14cdc8;
        }
    }
    ctx->pc = 0x14CD20u;
    // 0x14cd20: 0x8e020000
    ctx->pc = 0x14cd20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cd24: 0x14400005
    ctx->pc = 0x14CD24u;
    {
        const bool branch_taken_0x14cd24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CD28u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x14cd24) {
            ctx->pc = 0x14CD3Cu;
            goto label_14cd3c;
        }
    }
    ctx->pc = 0x14CD2Cu;
    // 0x14cd2c: 0xc0532ee
    ctx->pc = 0x14CD2Cu;
    SET_GPR_U32(ctx, 31, 0x14CD34u);
    ctx->pc = 0x14CD30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        frame_init_0x14cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD34u; }
        else if (ctx->pc != 0x14CD34u) { ctx->pc = 0x14CD34u; }
    }
    if (ctx->pc != 0x14CD34u) { return; }
    ctx->pc = 0x14CD34u;
    // 0x14cd34: 0x8e020000
    ctx->pc = 0x14cd34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cd38: 0x222102b
    ctx->pc = 0x14cd38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14cd3c:
    // 0x14cd3c: 0x5440fff6
    ctx->pc = 0x14CD3Cu;
    {
        const bool branch_taken_0x14cd3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14cd3c) {
            ctx->pc = 0x14CD40u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x14CD18u;
            goto label_14cd18;
        }
    }
    ctx->pc = 0x14CD44u;
    // 0x14cd44: 0x8e020004
    ctx->pc = 0x14cd44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14cd48: 0x222102b
    ctx->pc = 0x14cd48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14cd4c: 0x5040fff2
    ctx->pc = 0x14CD4Cu;
    {
        const bool branch_taken_0x14cd4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14cd4c) {
            ctx->pc = 0x14CD50u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x14CD18u;
            goto label_14cd18;
        }
    }
    ctx->pc = 0x14CD54u;
    // 0x14cd54: 0x56000005
    ctx->pc = 0x14CD54u;
    {
        const bool branch_taken_0x14cd54 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x14cd54) {
            ctx->pc = 0x14CD58u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x14CD6Cu;
            goto label_14cd6c;
        }
    }
    ctx->pc = 0x14CD5Cu;
    // 0x14cd5c: 0x1000001a
    ctx->pc = 0x14CD5Cu;
    {
        const bool branch_taken_0x14cd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CD60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cd5c) {
            ctx->pc = 0x14CDC8u;
            goto label_14cdc8;
        }
    }
    ctx->pc = 0x14CD64u;
label_14cd64:
    // 0x14cd64: 0x10000018
    ctx->pc = 0x14CD64u;
    {
        const bool branch_taken_0x14cd64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CD68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cd64) {
            ctx->pc = 0x14CDC8u;
            goto label_14cdc8;
        }
    }
    ctx->pc = 0x14CD6Cu;
label_14cd6c:
    // 0x14cd6c: 0x10e00015
    ctx->pc = 0x14CD6Cu;
    {
        const bool branch_taken_0x14cd6c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CD70u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cd6c) {
            ctx->pc = 0x14CDC4u;
            goto label_14cdc4;
        }
    }
    ctx->pc = 0x14CD74u;
    // 0x14cd74: 0x8e04000c
    ctx->pc = 0x14cd74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14cd78: 0x1071021
    ctx->pc = 0x14cd78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x14cd7c: 0x0
    ctx->pc = 0x14cd7cu;
    // NOP
label_14cd80:
    // 0x14cd80: 0x23042
    ctx->pc = 0x14cd80u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 2), 1));
    // 0x14cd84: 0x61880
    ctx->pc = 0x14cd84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x14cd88: 0x641821
    ctx->pc = 0x14cd88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14cd8c: 0x8c630000
    ctx->pc = 0x14cd8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14cd90: 0x8c650008
    ctx->pc = 0x14cd90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14cd94: 0x225102b
    ctx->pc = 0x14cd94u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x14cd98: 0x50400003
    ctx->pc = 0x14CD98u;
    {
        const bool branch_taken_0x14cd98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14cd98) {
            ctx->pc = 0x14CD9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->pc = 0x14CDA8u;
            goto label_14cda8;
        }
    }
    ctx->pc = 0x14CDA0u;
    // 0x14cda0: 0x10000005
    ctx->pc = 0x14CDA0u;
    {
        const bool branch_taken_0x14cda0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CDA4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cda0) {
            ctx->pc = 0x14CDB8u;
            goto label_14cdb8;
        }
    }
    ctx->pc = 0x14CDA8u;
label_14cda8:
    // 0x14cda8: 0xa21021
    ctx->pc = 0x14cda8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14cdac: 0x222102b
    ctx->pc = 0x14cdacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14cdb0: 0x1440ffec
    ctx->pc = 0x14CDB0u;
    {
        const bool branch_taken_0x14cdb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CDB4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x14cdb0) {
            ctx->pc = 0x14CD64u;
            goto label_14cd64;
        }
    }
    ctx->pc = 0x14CDB8u;
label_14cdb8:
    // 0x14cdb8: 0x107102b
    ctx->pc = 0x14cdb8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x14cdbc: 0x1440fff0
    ctx->pc = 0x14CDBCu;
    {
        const bool branch_taken_0x14cdbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CDC0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x14cdbc) {
            ctx->pc = 0x14CD80u;
            goto label_14cd80;
        }
    }
    ctx->pc = 0x14CDC4u;
label_14cdc4:
    // 0x14cdc4: 0x102d
    ctx->pc = 0x14cdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14cdc8:
    // 0x14cdc8: 0xdfbf0020
    ctx->pc = 0x14cdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cdcc: 0xdfb10010
    ctx->pc = 0x14cdccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cdd0: 0xdfb00000
    ctx->pc = 0x14cdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cdd4: 0x3e00008
    ctx->pc = 0x14CDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CDD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CD18u: goto label_14cd18;
            case 0x14CD3Cu: goto label_14cd3c;
            case 0x14CD64u: goto label_14cd64;
            case 0x14CD6Cu: goto label_14cd6c;
            case 0x14CD80u: goto label_14cd80;
            case 0x14CDA8u: goto label_14cda8;
            case 0x14CDB8u: goto label_14cdb8;
            case 0x14CDC4u: goto label_14cdc4;
            case 0x14CDC8u: goto label_14cdc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CDDCu;
}
