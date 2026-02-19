#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAwardExp
// Address: 0x29bba0 - 0x29bc44
void CritterAwardExp_0x29bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29bba0u;

    // 0x29bba0: 0x27bdffa0
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29bba4: 0xffbf0050
    ctx->pc = 0x29bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29bba8: 0xffb40040
    ctx->pc = 0x29bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29bbac: 0xffb30030
    ctx->pc = 0x29bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29bbb0: 0xffb20020
    ctx->pc = 0x29bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29bbb4: 0xffb10010
    ctx->pc = 0x29bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29bbb8: 0xffb00000
    ctx->pc = 0x29bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29bbbc: 0x80802d
    ctx->pc = 0x29bbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbc0: 0x6010003
    ctx->pc = 0x29BBC0u;
    {
        const bool branch_taken_0x29bbc0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x29BBC4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x29bbc0) {
            ctx->pc = 0x29BBD0u;
            goto label_29bbd0;
        }
    }
    ctx->pc = 0x29BBC8u;
    // 0x29bbc8: 0x802d
    ctx->pc = 0x29bbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbcc: 0x24120004
    ctx->pc = 0x29bbccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
label_29bbd0:
    // 0x29bbd0: 0x24032b00
    ctx->pc = 0x29bbd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29bbd4: 0x2031818
    ctx->pc = 0x29bbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29bbd8: 0x3c020032
    ctx->pc = 0x29bbd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29bbdc: 0x24421bc0
    ctx->pc = 0x29bbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29bbe0: 0x628821
    ctx->pc = 0x29bbe0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29bbe4: 0x212102a
    ctx->pc = 0x29bbe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x29bbe8: 0x1040000e
    ctx->pc = 0x29BBE8u;
    {
        const bool branch_taken_0x29bbe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BBECu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29bbe8) {
            ctx->pc = 0x29BC24u;
            goto label_29bc24;
        }
    }
    ctx->pc = 0x29BBF0u;
    // 0x29bbf0: 0x46006024
    ctx->pc = 0x29bbf0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x29bbf4: 0x44130000
    ctx->pc = 0x29bbf4u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[0]);
label_29bbf8:
    // 0x29bbf8: 0x8e2200fc
    ctx->pc = 0x29bbf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x29bbfc: 0x54540006
    ctx->pc = 0x29BBFCu;
    {
        const bool branch_taken_0x29bbfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x29bbfc) {
            ctx->pc = 0x29BC00u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29BC18u;
            goto label_29bc18;
        }
    }
    ctx->pc = 0x29BC04u;
    // 0x29bc04: 0x200202d
    ctx->pc = 0x29bc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc08: 0x260282d
    ctx->pc = 0x29bc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc0c: 0xc08d26a
    ctx->pc = 0x29BC0Cu;
    SET_GPR_U32(ctx, 31, 0x29BC14u);
    ctx->pc = 0x29BC10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC14u; }
    }
    if (ctx->pc != 0x29BC14u) { return; }
    ctx->pc = 0x29BC14u;
    // 0x29bc14: 0x26100001
    ctx->pc = 0x29bc14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29bc18:
    // 0x29bc18: 0x212102a
    ctx->pc = 0x29bc18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x29bc1c: 0x1440fff6
    ctx->pc = 0x29BC1Cu;
    {
        const bool branch_taken_0x29bc1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29BC20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x29bc1c) {
            ctx->pc = 0x29BBF8u;
            goto label_29bbf8;
        }
    }
    ctx->pc = 0x29BC24u;
label_29bc24:
    // 0x29bc24: 0xdfbf0050
    ctx->pc = 0x29bc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bc28: 0xdfb40040
    ctx->pc = 0x29bc28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bc2c: 0xdfb30030
    ctx->pc = 0x29bc2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bc30: 0xdfb20020
    ctx->pc = 0x29bc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bc34: 0xdfb10010
    ctx->pc = 0x29bc34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bc38: 0xdfb00000
    ctx->pc = 0x29bc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bc3c: 0x3e00008
    ctx->pc = 0x29BC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29BBD0u: goto label_29bbd0;
            case 0x29BBF8u: goto label_29bbf8;
            case 0x29BC18u: goto label_29bc18;
            case 0x29BC24u: goto label_29bc24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29BC44u;
}
