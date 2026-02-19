#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLoadBankDesc
// Address: 0x221460 - 0x2214e8
void AudioLoadBankDesc_0x221460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221460u;

    // 0x221460: 0x27bdffc0
    ctx->pc = 0x221460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221464: 0xffbf0030
    ctx->pc = 0x221464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x221468: 0xffb20020
    ctx->pc = 0x221468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22146c: 0xffb10010
    ctx->pc = 0x22146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x221470: 0xffb00000
    ctx->pc = 0x221470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221474: 0xa0882d
    ctx->pc = 0x221474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221478: 0x3c020032
    ctx->pc = 0x221478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22147c: 0x8c42fd58
    ctx->pc = 0x22147cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x221480: 0x10400003
    ctx->pc = 0x221480u;
    {
        const bool branch_taken_0x221480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221484u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221480) {
            ctx->pc = 0x221490u;
            goto label_221490;
        }
    }
    ctx->pc = 0x221488u;
    // 0x221488: 0x10000011
    ctx->pc = 0x221488u;
    {
        const bool branch_taken_0x221488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22148Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221488) {
            ctx->pc = 0x2214D0u;
            goto label_2214d0;
        }
    }
    ctx->pc = 0x221490u;
label_221490:
    // 0x221490: 0xc0880b4
    ctx->pc = 0x221490u;
    SET_GPR_U32(ctx, 31, 0x221498u);
    ctx->pc = 0x2202D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindPart_0x2202d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221498u; }
    }
    if (ctx->pc != 0x221498u) { return; }
    ctx->pc = 0x221498u;
    // 0x221498: 0x40802d
    ctx->pc = 0x221498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22149c: 0x3c020032
    ctx->pc = 0x22149cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2214a0: 0x24040124
    ctx->pc = 0x2214a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 292));
    // 0x2214a4: 0x2042018
    ctx->pc = 0x2214a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2214a8: 0x24840014
    ctx->pc = 0x2214a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
    // 0x2214ac: 0x8c42fe28
    ctx->pc = 0x2214acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966824)));
    // 0x2214b0: 0x822021
    ctx->pc = 0x2214b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2214b4: 0xc0880da
    ctx->pc = 0x2214B4u;
    SET_GPR_U32(ctx, 31, 0x2214BCu);
    ctx->pc = 0x2214B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220368u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindBank_0x220368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214BCu; }
    }
    if (ctx->pc != 0x2214BCu) { return; }
    ctx->pc = 0x2214BCu;
    // 0x2214bc: 0x200202d
    ctx->pc = 0x2214bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214c0: 0x40282d
    ctx->pc = 0x2214c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214c4: 0x240302d
    ctx->pc = 0x2214c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214c8: 0xc088468
    ctx->pc = 0x2214C8u;
    SET_GPR_U32(ctx, 31, 0x2214D0u);
    ctx->pc = 0x2214CCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2211A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBank_0x2211a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214D0u; }
    }
    if (ctx->pc != 0x2214D0u) { return; }
    ctx->pc = 0x2214D0u;
label_2214d0:
    // 0x2214d0: 0xdfbf0030
    ctx->pc = 0x2214d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2214d4: 0xdfb20020
    ctx->pc = 0x2214d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2214d8: 0xdfb10010
    ctx->pc = 0x2214d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2214dc: 0xdfb00000
    ctx->pc = 0x2214dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2214e0: 0x3e00008
    ctx->pc = 0x2214E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2214E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221490u: goto label_221490;
            case 0x2214D0u: goto label_2214d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2214E8u;
}
