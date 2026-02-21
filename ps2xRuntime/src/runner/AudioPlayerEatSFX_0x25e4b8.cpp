#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerEatSFX
// Address: 0x25e4b8 - 0x25e588
void AudioPlayerEatSFX_0x25e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e4b8u;

    // 0x25e4b8: 0x27bdffc0
    ctx->pc = 0x25e4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e4bc: 0xffbf0030
    ctx->pc = 0x25e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e4c0: 0xffb20020
    ctx->pc = 0x25e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e4c4: 0xffb10010
    ctx->pc = 0x25e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e4c8: 0xffb00000
    ctx->pc = 0x25e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e4cc: 0x80882d
    ctx->pc = 0x25e4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4d0: 0xa0902d
    ctx->pc = 0x25e4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4d4: 0x24032b00
    ctx->pc = 0x25e4d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e4d8: 0x2231818
    ctx->pc = 0x25e4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e4dc: 0x3c020032
    ctx->pc = 0x25e4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e4e0: 0x24421bc0
    ctx->pc = 0x25e4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e4e4: 0x628021
    ctx->pc = 0x25e4e4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e4e8: 0xc0b5c24
    ctx->pc = 0x25E4E8u;
    SET_GPR_U32(ctx, 31, 0x25E4F0u);
    ctx->pc = 0x25E4ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E4F0u; }
    }
    if (ctx->pc != 0x25E4F0u) { return; }
    ctx->pc = 0x25E4F0u;
    // 0x25e4f0: 0x14400009
    ctx->pc = 0x25E4F0u;
    {
        const bool branch_taken_0x25e4f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E4F4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x25e4f0) {
            ctx->pc = 0x25E518u;
            goto label_25e518;
        }
    }
    ctx->pc = 0x25E4F8u;
    // 0x25e4f8: 0x220202d
    ctx->pc = 0x25e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4fc: 0x240282d
    ctx->pc = 0x25e4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e500: 0xdfbf0030
    ctx->pc = 0x25e500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e504: 0xdfb20020
    ctx->pc = 0x25e504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e508: 0xdfb10010
    ctx->pc = 0x25e508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e50c: 0xdfb00000
    ctx->pc = 0x25e50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e510: 0x8097900
    ctx->pc = 0x25E510u;
    ctx->pc = 0x25E514u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x25E400u;
    AudioPlayerEatFood_0x25e400(rdram, ctx, runtime); return;
    ctx->pc = 0x25E518u;
label_25e518:
    // 0x25e518: 0x2463d690
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956688));
    // 0x25e51c: 0x8e020008
    ctx->pc = 0x25e51cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e520: 0x21080
    ctx->pc = 0x25e520u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e524: 0x431021
    ctx->pc = 0x25e524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e528: 0x8c520000
    ctx->pc = 0x25e528u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e52c: 0x6400011
    ctx->pc = 0x25E52Cu;
    {
        const bool branch_taken_0x25e52c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x25E530u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25e52c) {
            ctx->pc = 0x25E574u;
            goto label_25e574;
        }
    }
    ctx->pc = 0x25E534u;
    // 0x25e534: 0xc088648
    ctx->pc = 0x25E534u;
    SET_GPR_U32(ctx, 31, 0x25E53Cu);
    ctx->pc = 0x25E538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E53Cu; }
    }
    if (ctx->pc != 0x25E53Cu) { return; }
    ctx->pc = 0x25E53Cu;
    // 0x25e53c: 0x40802d
    ctx->pc = 0x25e53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e540: 0xc0975da
    ctx->pc = 0x25E540u;
    SET_GPR_U32(ctx, 31, 0x25E548u);
    ctx->pc = 0x25E544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E548u; }
    }
    if (ctx->pc != 0x25E548u) { return; }
    ctx->pc = 0x25E548u;
    // 0x25e548: 0x24040061
    ctx->pc = 0x25e548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 97));
    // 0x25e54c: 0x242200a
    ctx->pc = 0x25e54cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
    // 0x25e550: 0x240500c0
    ctx->pc = 0x25e550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x25e554: 0x200302d
    ctx->pc = 0x25e554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e558: 0x3c01bf80
    ctx->pc = 0x25e558u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e55c: 0x44816000
    ctx->pc = 0x25e55cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e560: 0x3c013f80
    ctx->pc = 0x25e560u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e564: 0x44816800
    ctx->pc = 0x25e564u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e568: 0xc088c86
    ctx->pc = 0x25E568u;
    SET_GPR_U32(ctx, 31, 0x25E570u);
    ctx->pc = 0x25E56Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x223218u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueAdd4_0x223218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E570u; }
    }
    if (ctx->pc != 0x25E570u) { return; }
    ctx->pc = 0x25E570u;
    // 0x25e570: 0xdfbf0030
    ctx->pc = 0x25e570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e574:
    // 0x25e574: 0xdfb20020
    ctx->pc = 0x25e574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e578: 0xdfb10010
    ctx->pc = 0x25e578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e57c: 0xdfb00000
    ctx->pc = 0x25e57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e580: 0x3e00008
    ctx->pc = 0x25E580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E518u: goto label_25e518;
            case 0x25E574u: goto label_25e574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E588u;
}
