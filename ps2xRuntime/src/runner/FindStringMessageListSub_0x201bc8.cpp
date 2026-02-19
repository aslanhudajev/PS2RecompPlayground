#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindStringMessageListSub
// Address: 0x201bc8 - 0x201c44
void FindStringMessageListSub_0x201bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201bc8u;

    // 0x201bc8: 0x27bdffc0
    ctx->pc = 0x201bc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201bcc: 0xffbf0030
    ctx->pc = 0x201bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x201bd0: 0xffb20020
    ctx->pc = 0x201bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201bd4: 0xffb10010
    ctx->pc = 0x201bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201bd8: 0xffb00000
    ctx->pc = 0x201bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201bdc: 0x80802d
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201be0: 0xa0902d
    ctx->pc = 0x201be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201be4: 0x882d
    ctx->pc = 0x201be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201be8:
    // 0x201be8: 0x8e020040
    ctx->pc = 0x201be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x201bec: 0x222102a
    ctx->pc = 0x201becu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x201bf0: 0x1040000a
    ctx->pc = 0x201BF0u;
    {
        const bool branch_taken_0x201bf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x201BF4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x201bf0) {
            ctx->pc = 0x201C1Cu;
            goto label_201c1c;
        }
    }
    ctx->pc = 0x201BF8u;
    // 0x201bf8: 0x8e03002c
    ctx->pc = 0x201bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x201bfc: 0x431021
    ctx->pc = 0x201bfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201c00: 0x8c420000
    ctx->pc = 0x201c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201c04: 0x8e040024
    ctx->pc = 0x201c04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x201c08: 0x442021
    ctx->pc = 0x201c08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201c0c: 0xc0bf194
    ctx->pc = 0x201C0Cu;
    SET_GPR_U32(ctx, 31, 0x201C14u);
    ctx->pc = 0x201C10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC650u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x2fc650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201C14u; }
    }
    if (ctx->pc != 0x201C14u) { return; }
    ctx->pc = 0x201C14u;
    // 0x201c14: 0x5040fff4
    ctx->pc = 0x201C14u;
    {
        const bool branch_taken_0x201c14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x201c14) {
            ctx->pc = 0x201C18u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x201BE8u;
            goto label_201be8;
        }
    }
    ctx->pc = 0x201C1Cu;
label_201c1c:
    // 0x201c1c: 0x8e030040
    ctx->pc = 0x201c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x201c20: 0x223182a
    ctx->pc = 0x201c20u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x201c24: 0x2402ffff
    ctx->pc = 0x201c24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201c28: 0x223100b
    ctx->pc = 0x201c28u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x201c2c: 0xdfbf0030
    ctx->pc = 0x201c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201c30: 0xdfb20020
    ctx->pc = 0x201c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201c34: 0xdfb10010
    ctx->pc = 0x201c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201c38: 0xdfb00000
    ctx->pc = 0x201c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c3c: 0x3e00008
    ctx->pc = 0x201C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201BE8u: goto label_201be8;
            case 0x201C1Cu: goto label_201c1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201C44u;
}
