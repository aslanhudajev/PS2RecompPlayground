#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitNameAudio
// Address: 0x25d788 - 0x25d9c8
void InitNameAudio_0x25d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d788u;

    // 0x25d788: 0x27bdff60
    ctx->pc = 0x25d788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25d78c: 0xffbf0090
    ctx->pc = 0x25d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25d790: 0xffbe0080
    ctx->pc = 0x25d790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x25d794: 0xffb70070
    ctx->pc = 0x25d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25d798: 0xffb60060
    ctx->pc = 0x25d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25d79c: 0xffb50050
    ctx->pc = 0x25d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25d7a0: 0xffb40040
    ctx->pc = 0x25d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25d7a4: 0xffb30030
    ctx->pc = 0x25d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25d7a8: 0xffb20020
    ctx->pc = 0x25d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d7ac: 0xffb10010
    ctx->pc = 0x25d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d7b0: 0xffb00000
    ctx->pc = 0x25d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d7b4: 0xa02d
    ctx->pc = 0x25d7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d7b8: 0x3c02003c
    ctx->pc = 0x25d7b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25d7bc: 0x24552ad0
    ctx->pc = 0x25d7bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 10960));
    // 0x25d7c0: 0x3c02003c
    ctx->pc = 0x25d7c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25d7c4: 0x245e2b68
    ctx->pc = 0x25d7c4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 11112));
    // 0x25d7c8: 0x3c02003c
    ctx->pc = 0x25d7c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25d7cc: 0x24572c68
    ctx->pc = 0x25d7ccu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 11368));
    // 0x25d7d0: 0x2416ffff
    ctx->pc = 0x25d7d0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d7d4: 0x902d
    ctx->pc = 0x25d7d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d7d8:
    // 0x25d7d8: 0x141080
    ctx->pc = 0x25d7d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x25d7dc: 0x3c030032
    ctx->pc = 0x25d7dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25d7e0: 0x24631480
    ctx->pc = 0x25d7e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5248));
    // 0x25d7e4: 0x439821
    ctx->pc = 0x25d7e4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d7e8: 0x128080
    ctx->pc = 0x25d7e8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d7ec: 0x0
    ctx->pc = 0x25d7ecu;
    // NOP
label_25d7f0:
    // 0x25d7f0: 0x3c040032
    ctx->pc = 0x25d7f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x25d7f4: 0x24841428
    ctx->pc = 0x25d7f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5160));
    // 0x25d7f8: 0x2048821
    ctx->pc = 0x25d7f8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x25d7fc: 0x2a0202d
    ctx->pc = 0x25d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d800: 0x3c02003b
    ctx->pc = 0x25d800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x25d804: 0x24459468
    ctx->pc = 0x25d804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294939752));
    // 0x25d808: 0x8e660000
    ctx->pc = 0x25d808u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d80c: 0xc0b6252
    ctx->pc = 0x25D80Cu;
    SET_GPR_U32(ctx, 31, 0x25D814u);
    ctx->pc = 0x25D810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D814u; }
    }
    if (ctx->pc != 0x25D814u) { return; }
    ctx->pc = 0x25D814u;
    // 0x25d814: 0x2a0202d
    ctx->pc = 0x25d814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d818: 0x2405ffff
    ctx->pc = 0x25d818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d81c: 0xc088108
    ctx->pc = 0x25D81Cu;
    SET_GPR_U32(ctx, 31, 0x25D824u);
    ctx->pc = 0x25D820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D824u; }
    }
    if (ctx->pc != 0x25D824u) { return; }
    ctx->pc = 0x25D824u;
    // 0x25d824: 0x141980
    ctx->pc = 0x25d824u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 6));
    // 0x25d828: 0x2038021
    ctx->pc = 0x25d828u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25d82c: 0x21e1821
    ctx->pc = 0x25d82cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x25d830: 0xac620000
    ctx->pc = 0x25d830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25d834: 0x3c05003b
    ctx->pc = 0x25d834u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25d838: 0x2a0202d
    ctx->pc = 0x25d838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d83c: 0x24a59470
    ctx->pc = 0x25d83cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939760));
    // 0x25d840: 0x8e660000
    ctx->pc = 0x25d840u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d844: 0xc0b6252
    ctx->pc = 0x25D844u;
    SET_GPR_U32(ctx, 31, 0x25D84Cu);
    ctx->pc = 0x25D848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D84Cu; }
    }
    if (ctx->pc != 0x25D84Cu) { return; }
    ctx->pc = 0x25D84Cu;
    // 0x25d84c: 0x2a0202d
    ctx->pc = 0x25d84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d850: 0x2405ffff
    ctx->pc = 0x25d850u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d854: 0xc088108
    ctx->pc = 0x25D854u;
    SET_GPR_U32(ctx, 31, 0x25D85Cu);
    ctx->pc = 0x25D858u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D85Cu; }
    }
    if (ctx->pc != 0x25D85Cu) { return; }
    ctx->pc = 0x25D85Cu;
    // 0x25d85c: 0x2178021
    ctx->pc = 0x25d85cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x25d860: 0xae020000
    ctx->pc = 0x25d860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25d864: 0x26520001
    ctx->pc = 0x25d864u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x25d868: 0x2a420010
    ctx->pc = 0x25d868u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 16));
    // 0x25d86c: 0x1440ffe0
    ctx->pc = 0x25D86Cu;
    {
        const bool branch_taken_0x25d86c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D870u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x25d86c) {
            ctx->pc = 0x25D7F0u;
            goto label_25d7f0;
        }
    }
    ctx->pc = 0x25D874u;
    // 0x25d874: 0x141080
    ctx->pc = 0x25d874u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x25d878: 0x3c04003c
    ctx->pc = 0x25d878u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25d87c: 0x24842b48
    ctx->pc = 0x25d87cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11080));
    // 0x25d880: 0x441821
    ctx->pc = 0x25d880u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25d884: 0xac760000
    ctx->pc = 0x25d884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x25d888: 0x3c03003c
    ctx->pc = 0x25d888u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25d88c: 0x24632b58
    ctx->pc = 0x25d88cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11096));
    // 0x25d890: 0x431021
    ctx->pc = 0x25d890u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d894: 0xac560000
    ctx->pc = 0x25d894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x25d898: 0x26940001
    ctx->pc = 0x25d898u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x25d89c: 0x2a820004
    ctx->pc = 0x25d89cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x25d8a0: 0x1440ffcd
    ctx->pc = 0x25D8A0u;
    {
        const bool branch_taken_0x25d8a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D8A4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d8a0) {
            ctx->pc = 0x25D7D8u;
            goto label_25d7d8;
        }
    }
    ctx->pc = 0x25D8A8u;
    // 0x25d8a8: 0xa02d
    ctx->pc = 0x25d8a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8ac: 0x3c02003c
    ctx->pc = 0x25d8acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25d8b0: 0x24552ad0
    ctx->pc = 0x25d8b0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 10960));
    // 0x25d8b4: 0x3c02003c
    ctx->pc = 0x25d8b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25d8b8: 0x245e2d88
    ctx->pc = 0x25d8b8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 11656));
    // 0x25d8bc: 0x3c02003c
    ctx->pc = 0x25d8bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25d8c0: 0x24572e88
    ctx->pc = 0x25d8c0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 11912));
    // 0x25d8c4: 0x2416ffff
    ctx->pc = 0x25d8c4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25d8c8:
    // 0x25d8c8: 0x141080
    ctx->pc = 0x25d8c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x25d8cc: 0x3c040032
    ctx->pc = 0x25d8ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x25d8d0: 0x24841480
    ctx->pc = 0x25d8d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5248));
    // 0x25d8d4: 0x449821
    ctx->pc = 0x25d8d4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25d8d8: 0x128080
    ctx->pc = 0x25d8d8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d8dc: 0x0
    ctx->pc = 0x25d8dcu;
    // NOP
label_25d8e0:
    // 0x25d8e0: 0x3c020032
    ctx->pc = 0x25d8e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d8e4: 0x24421428
    ctx->pc = 0x25d8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5160));
    // 0x25d8e8: 0x2028821
    ctx->pc = 0x25d8e8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25d8ec: 0x2a0202d
    ctx->pc = 0x25d8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8f0: 0x3c03003b
    ctx->pc = 0x25d8f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)59 << 16));
    // 0x25d8f4: 0x24659478
    ctx->pc = 0x25d8f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294939768));
    // 0x25d8f8: 0x8e660000
    ctx->pc = 0x25d8f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d8fc: 0xc0b6252
    ctx->pc = 0x25D8FCu;
    SET_GPR_U32(ctx, 31, 0x25D904u);
    ctx->pc = 0x25D900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D904u; }
    }
    if (ctx->pc != 0x25D904u) { return; }
    ctx->pc = 0x25D904u;
    // 0x25d904: 0x2a0202d
    ctx->pc = 0x25d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d908: 0x2405ffff
    ctx->pc = 0x25d908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d90c: 0xc088108
    ctx->pc = 0x25D90Cu;
    SET_GPR_U32(ctx, 31, 0x25D914u);
    ctx->pc = 0x25D910u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D914u; }
    }
    if (ctx->pc != 0x25D914u) { return; }
    ctx->pc = 0x25D914u;
    // 0x25d914: 0x141980
    ctx->pc = 0x25d914u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 6));
    // 0x25d918: 0x2038021
    ctx->pc = 0x25d918u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25d91c: 0x21e1821
    ctx->pc = 0x25d91cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x25d920: 0xac620000
    ctx->pc = 0x25d920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25d924: 0x3c05003b
    ctx->pc = 0x25d924u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25d928: 0x2a0202d
    ctx->pc = 0x25d928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d92c: 0x24a59488
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939784));
    // 0x25d930: 0x8e660000
    ctx->pc = 0x25d930u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d934: 0xc0b6252
    ctx->pc = 0x25D934u;
    SET_GPR_U32(ctx, 31, 0x25D93Cu);
    ctx->pc = 0x25D938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D93Cu; }
    }
    if (ctx->pc != 0x25D93Cu) { return; }
    ctx->pc = 0x25D93Cu;
    // 0x25d93c: 0x2a0202d
    ctx->pc = 0x25d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d940: 0x2405ffff
    ctx->pc = 0x25d940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d944: 0xc088108
    ctx->pc = 0x25D944u;
    SET_GPR_U32(ctx, 31, 0x25D94Cu);
    ctx->pc = 0x25D948u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D94Cu; }
    }
    if (ctx->pc != 0x25D94Cu) { return; }
    ctx->pc = 0x25D94Cu;
    // 0x25d94c: 0x2178021
    ctx->pc = 0x25d94cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x25d950: 0xae020000
    ctx->pc = 0x25d950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25d954: 0x26520001
    ctx->pc = 0x25d954u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x25d958: 0x2a420010
    ctx->pc = 0x25d958u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 16));
    // 0x25d95c: 0x1440ffe0
    ctx->pc = 0x25D95Cu;
    {
        const bool branch_taken_0x25d95c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D960u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x25d95c) {
            ctx->pc = 0x25D8E0u;
            goto label_25d8e0;
        }
    }
    ctx->pc = 0x25D964u;
    // 0x25d964: 0x141080
    ctx->pc = 0x25d964u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x25d968: 0x3c04003c
    ctx->pc = 0x25d968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25d96c: 0x24842d68
    ctx->pc = 0x25d96cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11624));
    // 0x25d970: 0x441821
    ctx->pc = 0x25d970u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25d974: 0xac760000
    ctx->pc = 0x25d974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x25d978: 0x3c03003c
    ctx->pc = 0x25d978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25d97c: 0x24632d78
    ctx->pc = 0x25d97cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11640));
    // 0x25d980: 0x431021
    ctx->pc = 0x25d980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d984: 0xac560000
    ctx->pc = 0x25d984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x25d988: 0x26940001
    ctx->pc = 0x25d988u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x25d98c: 0x2a820004
    ctx->pc = 0x25d98cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x25d990: 0x1440ffcd
    ctx->pc = 0x25D990u;
    {
        const bool branch_taken_0x25d990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D994u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d990) {
            ctx->pc = 0x25D8C8u;
            goto label_25d8c8;
        }
    }
    ctx->pc = 0x25D998u;
    // 0x25d998: 0xdfbf0090
    ctx->pc = 0x25d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d99c: 0xdfbe0080
    ctx->pc = 0x25d99cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d9a0: 0xdfb70070
    ctx->pc = 0x25d9a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d9a4: 0xdfb60060
    ctx->pc = 0x25d9a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d9a8: 0xdfb50050
    ctx->pc = 0x25d9a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d9ac: 0xdfb40040
    ctx->pc = 0x25d9acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d9b0: 0xdfb30030
    ctx->pc = 0x25d9b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d9b4: 0xdfb20020
    ctx->pc = 0x25d9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d9b8: 0xdfb10010
    ctx->pc = 0x25d9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d9bc: 0xdfb00000
    ctx->pc = 0x25d9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d9c0: 0x3e00008
    ctx->pc = 0x25D9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D9C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D7D8u: goto label_25d7d8;
            case 0x25D7F0u: goto label_25d7f0;
            case 0x25D8C8u: goto label_25d8c8;
            case 0x25D8E0u: goto label_25d8e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D9C8u;
}
