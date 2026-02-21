#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RuneBits
// Address: 0x280948 - 0x2809dc
void RuneBits_0x280948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280948u;

    // 0x280948: 0x282d
    ctx->pc = 0x280948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28094c: 0x202d
    ctx->pc = 0x28094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280950: 0x24072b00
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x280954: 0x3c020032
    ctx->pc = 0x280954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x280958: 0x24481bc0
    ctx->pc = 0x280958u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28095c: 0x24060001
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x280960: 0x871018
    ctx->pc = 0x280960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x280964: 0x0
    ctx->pc = 0x280964u;
    // NOP
label_280968:
    // 0x280968: 0x481821
    ctx->pc = 0x280968u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28096c: 0x8c6200fc
    ctx->pc = 0x28096cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x280970: 0x14460003
    ctx->pc = 0x280970u;
    {
        const bool branch_taken_0x280970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x280974u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x280970) {
            ctx->pc = 0x280980u;
            goto label_280980;
        }
    }
    ctx->pc = 0x280978u;
    // 0x280978: 0x94621a26
    ctx->pc = 0x280978u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
    // 0x28097c: 0xa22825
    ctx->pc = 0x28097cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_280980:
    // 0x280980: 0x28820004
    ctx->pc = 0x280980u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x280984: 0x1440fff8
    ctx->pc = 0x280984u;
    {
        const bool branch_taken_0x280984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280988u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x280984) {
            ctx->pc = 0x280968u;
            goto label_280968;
        }
    }
    ctx->pc = 0x28098Cu;
    // 0x28098c: 0x202d
    ctx->pc = 0x28098cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280990: 0x3c020035
    ctx->pc = 0x280990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280994: 0x244396d0
    ctx->pc = 0x280994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x280998: 0x24070031
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 49));
    // 0x28099c: 0x24060030
    ctx->pc = 0x28099cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2809a0: 0x851007
    ctx->pc = 0x2809a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x2809a4: 0x0
    ctx->pc = 0x2809a4u;
    // NOP
label_2809a8:
    // 0x2809a8: 0x30420001
    ctx->pc = 0x2809a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2809ac: 0x10400003
    ctx->pc = 0x2809ACu;
    {
        const bool branch_taken_0x2809ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2809B0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x2809ac) {
            ctx->pc = 0x2809BCu;
            goto label_2809bc;
        }
    }
    ctx->pc = 0x2809B4u;
    // 0x2809b4: 0x10000002
    ctx->pc = 0x2809B4u;
    {
        const bool branch_taken_0x2809b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2809B8u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
        if (branch_taken_0x2809b4) {
            ctx->pc = 0x2809C0u;
            goto label_2809c0;
        }
    }
    ctx->pc = 0x2809BCu;
label_2809bc:
    // 0x2809bc: 0xa0460000
    ctx->pc = 0x2809bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_2809c0:
    // 0x2809c0: 0x24840001
    ctx->pc = 0x2809c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2809c4: 0x2882000d
    ctx->pc = 0x2809c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 13));
    // 0x2809c8: 0x5440fff7
    ctx->pc = 0x2809C8u;
    {
        const bool branch_taken_0x2809c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2809c8) {
            ctx->pc = 0x2809CCu;
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
            ctx->pc = 0x2809A8u;
            goto label_2809a8;
        }
    }
    ctx->pc = 0x2809D0u;
    // 0x2809d0: 0x3c020035
    ctx->pc = 0x2809d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2809d4: 0x3e00008
    ctx->pc = 0x2809D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2809D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280968u: goto label_280968;
            case 0x280980u: goto label_280980;
            case 0x2809A8u: goto label_2809a8;
            case 0x2809BCu: goto label_2809bc;
            case 0x2809C0u: goto label_2809c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2809DCu;
}
