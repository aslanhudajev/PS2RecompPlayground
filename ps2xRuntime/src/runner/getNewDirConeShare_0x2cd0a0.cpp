#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewDirConeShare
// Address: 0x2cd0a0 - 0x2cd164
void getNewDirConeShare_0x2cd0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd0a0u;

    // 0x2cd0a0: 0x27bdff70
    ctx->pc = 0x2cd0a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cd0a4: 0xffbf0080
    ctx->pc = 0x2cd0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2cd0a8: 0xffb40070
    ctx->pc = 0x2cd0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2cd0ac: 0xffb30060
    ctx->pc = 0x2cd0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2cd0b0: 0xffb20050
    ctx->pc = 0x2cd0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2cd0b4: 0xffb10040
    ctx->pc = 0x2cd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2cd0b8: 0xffb00030
    ctx->pc = 0x2cd0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cd0bc: 0x80902d
    ctx->pc = 0x2cd0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0c0: 0xa0a02d
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0c4: 0x96440030
    ctx->pc = 0x2cd0c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2cd0c8: 0xc0b32d4
    ctx->pc = 0x2CD0C8u;
    SET_GPR_U32(ctx, 31, 0x2CD0D0u);
    ctx->pc = 0x2CD0CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->pc = 0x2CCB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        getRandomIdx_0x2ccb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0D0u; }
    }
    if (ctx->pc != 0x2CD0D0u) { return; }
    ctx->pc = 0x2CD0D0u;
    // 0x2cd0d0: 0x40982d
    ctx->pc = 0x2cd0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0d4: 0x660001c
    ctx->pc = 0x2CD0D4u;
    {
        const bool branch_taken_0x2cd0d4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2CD0D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2cd0d4) {
            ctx->pc = 0x2CD148u;
            goto label_2cd148;
        }
    }
    ctx->pc = 0x2CD0DCu;
    // 0x2cd0dc: 0x8e420014
    ctx->pc = 0x2cd0dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2cd0e0: 0x531021
    ctx->pc = 0x2cd0e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cd0e4: 0x90420000
    ctx->pc = 0x2cd0e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd0e8: 0x2c420002
    ctx->pc = 0x2cd0e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2cd0ec: 0x10400014
    ctx->pc = 0x2CD0ECu;
    {
        const bool branch_taken_0x2cd0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CD0F0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2cd0ec) {
            ctx->pc = 0x2CD140u;
            goto label_2cd140;
        }
    }
    ctx->pc = 0x2CD0F4u;
    // 0x2cd0f4: 0x240202d
    ctx->pc = 0x2cd0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0f8: 0x280282d
    ctx->pc = 0x2cd0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0fc: 0xc0b325e
    ctx->pc = 0x2CD0FCu;
    SET_GPR_U32(ctx, 31, 0x2CD104u);
    ctx->pc = 0x2CD100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CC978u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCurrentDir_0x2cc978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD104u; }
    }
    if (ctx->pc != 0x2CD104u) { return; }
    ctx->pc = 0x2CD104u;
    // 0x2cd104: 0x27b10010
    ctx->pc = 0x2cd104u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cd108: 0x3a0202d
    ctx->pc = 0x2cd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd10c: 0x220282d
    ctx->pc = 0x2cd10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd110: 0xc0b32a6
    ctx->pc = 0x2CD110u;
    SET_GPR_U32(ctx, 31, 0x2CD118u);
    ctx->pc = 0x2CD114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CCA98u;
    {
        const uint32_t __entryPc = ctx->pc;
        getOrthoVecs_0x2cca98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD118u; }
    }
    if (ctx->pc != 0x2CD118u) { return; }
    ctx->pc = 0x2CD118u;
    // 0x2cd118: 0x2404000c
    ctx->pc = 0x2cd118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd11c: 0x2642018
    ctx->pc = 0x2cd11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cd120: 0x8e42000c
    ctx->pc = 0x2cd120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cd124: 0x822021
    ctx->pc = 0x2cd124u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd128: 0x280282d
    ctx->pc = 0x2cd128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd12c: 0xc64c0040
    ctx->pc = 0x2cd12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd130: 0x200302d
    ctx->pc = 0x2cd130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd134: 0x3a0382d
    ctx->pc = 0x2cd134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd138: 0xc0b345a
    ctx->pc = 0x2CD138u;
    SET_GPR_U32(ctx, 31, 0x2CD140u);
    ctx->pc = 0x2CD13Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CD168u;
    {
        const uint32_t __entryPc = ctx->pc;
        getConeDir_0x2cd168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD140u; }
    }
    if (ctx->pc != 0x2CD140u) { return; }
    ctx->pc = 0x2CD140u;
label_2cd140:
    // 0x2cd140: 0x260102d
    ctx->pc = 0x2cd140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd144: 0xdfbf0080
    ctx->pc = 0x2cd144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2cd148:
    // 0x2cd148: 0xdfb40070
    ctx->pc = 0x2cd148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cd14c: 0xdfb30060
    ctx->pc = 0x2cd14cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd150: 0xdfb20050
    ctx->pc = 0x2cd150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd154: 0xdfb10040
    ctx->pc = 0x2cd154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd158: 0xdfb00030
    ctx->pc = 0x2cd158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd15c: 0x3e00008
    ctx->pc = 0x2CD15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD140u: goto label_2cd140;
            case 0x2CD148u: goto label_2cd148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD164u;
}
