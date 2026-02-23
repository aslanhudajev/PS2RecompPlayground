#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFCON_ReadTotSmplQue
// Address: 0x192be0 - 0x192ca8
void SFCON_ReadTotSmplQue_0x192be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFCON_ReadTotSmplQue");


    ctx->pc = 0x192be0u;

    // 0x192be0: 0x27bdff90
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x192be4: 0xffb20030
    ctx->pc = 0x192be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192be8: 0xffb30040
    ctx->pc = 0x192be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x192bec: 0x80902d
    ctx->pc = 0x192becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bf0: 0xffb10020
    ctx->pc = 0x192bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x192bf4: 0xa0982d
    ctx->pc = 0x192bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bf8: 0xffb00010
    ctx->pc = 0x192bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192bfc: 0xc0882d
    ctx->pc = 0x192bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c00: 0xffbf0060
    ctx->pc = 0x192c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x192c04: 0x3a0202d
    ctx->pc = 0x192c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c08: 0xffb40050
    ctx->pc = 0x192c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x192c0c: 0xc064f3a
    ctx->pc = 0x192C0Cu;
    SET_GPR_U32(ctx, 31, 0x192C14u);
    ctx->pc = 0x192C10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 2708));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C14u; }
        else if (ctx->pc != 0x192C14u) { ctx->pc = 0x192C14u; }
    }
    if (ctx->pc != 0x192C14u) { return; }
    ctx->pc = 0x192C14u;
    // 0x192c14: 0x8e0201a8
    ctx->pc = 0x192c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x192c18: 0x8e0301ac
    ctx->pc = 0x192c18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x192c1c: 0x431023
    ctx->pc = 0x192c1cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192c20: 0x5c400005
    ctx->pc = 0x192C20u;
    {
        const bool branch_taken_0x192c20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x192c20) {
            ctx->pc = 0x192C24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->pc = 0x192C38u;
            goto label_192c38;
        }
    }
    ctx->pc = 0x192C28u;
    // 0x192c28: 0x2402ffff
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192c2c: 0xa02d
    ctx->pc = 0x192c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c30: 0x10000012
    ctx->pc = 0x192C30u;
    {
        const bool branch_taken_0x192c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192C34u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x192c30) {
            ctx->pc = 0x192C7Cu;
            goto label_192c7c;
        }
    }
    ctx->pc = 0x192C38u;
label_192c38:
    // 0x192c38: 0x2404ffff
    ctx->pc = 0x192c38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192c3c: 0x24140001
    ctx->pc = 0x192c3cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c40: 0xae220000
    ctx->pc = 0x192c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x192c44: 0x8e0301ac
    ctx->pc = 0x192c44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x192c48: 0x83202a
    ctx->pc = 0x192c48u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x192c4c: 0x2462001f
    ctx->pc = 0x192c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 31));
    // 0x192c50: 0x64100b
    ctx->pc = 0x192c50u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x192c54: 0x21143
    ctx->pc = 0x192c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x192c58: 0x21140
    ctx->pc = 0x192c58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x192c5c: 0x621823
    ctx->pc = 0x192c5cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192c60: 0x31880
    ctx->pc = 0x192c60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x192c64: 0x2431821
    ctx->pc = 0x192c64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192c68: 0x8c640c44
    ctx->pc = 0x192c68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 3140)));
    // 0x192c6c: 0xae640000
    ctx->pc = 0x192c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x192c70: 0x8e0201ac
    ctx->pc = 0x192c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x192c74: 0x24420001
    ctx->pc = 0x192c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x192c78: 0xae0201ac
    ctx->pc = 0x192c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
label_192c7c:
    // 0x192c7c: 0xc064f44
    ctx->pc = 0x192C7Cu;
    SET_GPR_U32(ctx, 31, 0x192C84u);
    ctx->pc = 0x192C80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C84u; }
        else if (ctx->pc != 0x192C84u) { ctx->pc = 0x192C84u; }
    }
    if (ctx->pc != 0x192C84u) { return; }
    ctx->pc = 0x192C84u;
    // 0x192c84: 0x280102d
    ctx->pc = 0x192c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c88: 0xdfbf0060
    ctx->pc = 0x192c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192c8c: 0xdfb40050
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192c90: 0xdfb30040
    ctx->pc = 0x192c90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192c94: 0xdfb20030
    ctx->pc = 0x192c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192c98: 0xdfb10020
    ctx->pc = 0x192c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192c9c: 0xdfb00010
    ctx->pc = 0x192c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ca0: 0x3e00008
    ctx->pc = 0x192CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192C38u: goto label_192c38;
            case 0x192C7Cu: goto label_192c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192CA8u;
}
