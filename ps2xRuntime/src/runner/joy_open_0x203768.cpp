#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: joy_open
// Address: 0x203768 - 0x2037e0
void joy_open_0x203768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203768u;

    // 0x203768: 0x27bdffe0
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20376c: 0xffbf0010
    ctx->pc = 0x20376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203770: 0xffb00000
    ctx->pc = 0x203770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203774: 0x80382d
    ctx->pc = 0x203774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203778: 0x71880
    ctx->pc = 0x203778u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20377c: 0x651821
    ctx->pc = 0x20377cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x203780: 0x31a00
    ctx->pc = 0x203780u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x203784: 0x3c02003c
    ctx->pc = 0x203784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x203788: 0x2442b540
    ctx->pc = 0x203788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948160));
    // 0x20378c: 0x623021
    ctx->pc = 0x20378cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203790: 0x3c040031
    ctx->pc = 0x203790u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x203794: 0x24840ee8
    ctx->pc = 0x203794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3816));
    // 0x203798: 0x51080
    ctx->pc = 0x203798u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20379c: 0x71900
    ctx->pc = 0x20379cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
    // 0x2037a0: 0x431021
    ctx->pc = 0x2037a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2037a4: 0x448021
    ctx->pc = 0x2037a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2037a8: 0x8e020000
    ctx->pc = 0x2037a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2037ac: 0x14400007
    ctx->pc = 0x2037ACu;
    {
        const bool branch_taken_0x2037ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2037B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2037ac) {
            ctx->pc = 0x2037CCu;
            goto label_2037cc;
        }
    }
    ctx->pc = 0x2037B4u;
    // 0x2037b4: 0xc0b8fdc
    ctx->pc = 0x2037B4u;
    SET_GPR_U32(ctx, 31, 0x2037BCu);
    ctx->pc = 0x2037B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadPortOpen_0x2e3f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037BCu; }
    }
    if (ctx->pc != 0x2037BCu) { return; }
    ctx->pc = 0x2037BCu;
    // 0x2037bc: 0x40182d
    ctx->pc = 0x2037bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037c0: 0x10600002
    ctx->pc = 0x2037C0u;
    {
        const bool branch_taken_0x2037c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2037C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2037c0) {
            ctx->pc = 0x2037CCu;
            goto label_2037cc;
        }
    }
    ctx->pc = 0x2037C8u;
    // 0x2037c8: 0xae020000
    ctx->pc = 0x2037c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2037cc:
    // 0x2037cc: 0x60102d
    ctx->pc = 0x2037ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037d0: 0xdfbf0010
    ctx->pc = 0x2037d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2037d4: 0xdfb00000
    ctx->pc = 0x2037d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2037d8: 0x3e00008
    ctx->pc = 0x2037D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2037DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2037CCu: goto label_2037cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2037E0u;
}
