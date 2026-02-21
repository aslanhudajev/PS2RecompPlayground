#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetSafeRock
// Address: 0x253470 - 0x25355c
void SetSafeRock_0x253470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253470u;

    // 0x253470: 0x27bdffb0
    ctx->pc = 0x253470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x253474: 0xffbf0040
    ctx->pc = 0x253474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x253478: 0xffb10030
    ctx->pc = 0x253478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x25347c: 0xffb00020
    ctx->pc = 0x25347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x253480: 0x80802d
    ctx->pc = 0x253480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253484: 0x860300e4
    ctx->pc = 0x253484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x253488: 0x8e020000
    ctx->pc = 0x253488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25348c: 0x14600003
    ctx->pc = 0x25348Cu;
    {
        const bool branch_taken_0x25348c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x253490u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        if (branch_taken_0x25348c) {
            ctx->pc = 0x25349Cu;
            goto label_25349c;
        }
    }
    ctx->pc = 0x253494u;
    // 0x253494: 0x1000000a
    ctx->pc = 0x253494u;
    {
        const bool branch_taken_0x253494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253498u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253494) {
            ctx->pc = 0x2534C0u;
            goto label_2534c0;
        }
    }
    ctx->pc = 0x25349Cu;
label_25349c:
    // 0x25349c: 0x83102a
    ctx->pc = 0x25349cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x2534a0: 0x14400003
    ctx->pc = 0x2534A0u;
    {
        const bool branch_taken_0x2534a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2534A4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2534a0) {
            ctx->pc = 0x2534B0u;
            goto label_2534b0;
        }
    }
    ctx->pc = 0x2534A8u;
    // 0x2534a8: 0x10000005
    ctx->pc = 0x2534A8u;
    {
        const bool branch_taken_0x2534a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2534ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2534a8) {
            ctx->pc = 0x2534C0u;
            goto label_2534c0;
        }
    }
    ctx->pc = 0x2534B0u;
label_2534b0:
    // 0x2534b0: 0x43102a
    ctx->pc = 0x2534b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2534b4: 0x24110003
    ctx->pc = 0x2534b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2534b8: 0x24030002
    ctx->pc = 0x2534b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2534bc: 0x62880a
    ctx->pc = 0x2534bcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2534c0:
    // 0x2534c0: 0x860200f2
    ctx->pc = 0x2534c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x2534c4: 0x12220020
    ctx->pc = 0x2534C4u;
    {
        const bool branch_taken_0x2534c4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2534C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2534c4) {
            ctx->pc = 0x253548u;
            goto label_253548;
        }
    }
    ctx->pc = 0x2534CCu;
    // 0x2534cc: 0xa61100f2
    ctx->pc = 0x2534ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 17));
    // 0x2534d0: 0x8e060000
    ctx->pc = 0x2534d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2534d4: 0x3c05003b
    ctx->pc = 0x2534d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2534d8: 0x24a587b0
    ctx->pc = 0x2534d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936496));
    // 0x2534dc: 0x24c60028
    ctx->pc = 0x2534dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 40));
    // 0x2534e0: 0xc0b6252
    ctx->pc = 0x2534E0u;
    SET_GPR_U32(ctx, 31, 0x2534E8u);
    ctx->pc = 0x2534E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2534E8u; }
    }
    if (ctx->pc != 0x2534E8u) { return; }
    ctx->pc = 0x2534E8u;
    // 0x2534e8: 0xc0944a0
    ctx->pc = 0x2534E8u;
    SET_GPR_U32(ctx, 31, 0x2534F0u);
    ctx->pc = 0x2534ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251280u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemFindMBObjectL1_0x251280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2534F0u; }
    }
    if (ctx->pc != 0x2534F0u) { return; }
    ctx->pc = 0x2534F0u;
    // 0x2534f0: 0x4410007
    ctx->pc = 0x2534F0u;
    {
        const bool branch_taken_0x2534f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2534F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
        if (branch_taken_0x2534f0) {
            ctx->pc = 0x253510u;
            goto label_253510;
        }
    }
    ctx->pc = 0x2534F8u;
    // 0x2534f8: 0x24050001
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2534fc: 0xc0b41b8
    ctx->pc = 0x2534FCu;
    SET_GPR_U32(ctx, 31, 0x253504u);
    ctx->pc = 0x253500u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253504u; }
    }
    if (ctx->pc != 0x253504u) { return; }
    ctx->pc = 0x253504u;
    // 0x253504: 0x2402ffff
    ctx->pc = 0x253504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x253508: 0x1000000a
    ctx->pc = 0x253508u;
    {
        const bool branch_taken_0x253508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25350Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x253508) {
            ctx->pc = 0x253534u;
            goto label_253534;
        }
    }
    ctx->pc = 0x253510u;
label_253510:
    // 0x253510: 0xc0b220e
    ctx->pc = 0x253510u;
    SET_GPR_U32(ctx, 31, 0x253518u);
    ctx->pc = 0x253514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253518u; }
    }
    if (ctx->pc != 0x253518u) { return; }
    ctx->pc = 0x253518u;
    // 0x253518: 0x1620000c
    ctx->pc = 0x253518u;
    {
        const bool branch_taken_0x253518 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x25351Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x253518) {
            ctx->pc = 0x25354Cu;
            goto label_25354c;
        }
    }
    ctx->pc = 0x253520u;
    // 0x253520: 0x960200d8
    ctx->pc = 0x253520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x253524: 0x3042fffe
    ctx->pc = 0x253524u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
    // 0x253528: 0xa60200d8
    ctx->pc = 0x253528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x25352c: 0x2402ffff
    ctx->pc = 0x25352cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x253530: 0xa20200e3
    ctx->pc = 0x253530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 227), (uint8_t)GPR_U32(ctx, 2));
label_253534:
    // 0x253534: 0x16200005
    ctx->pc = 0x253534u;
    {
        const bool branch_taken_0x253534 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x253538u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x253534) {
            ctx->pc = 0x25354Cu;
            goto label_25354c;
        }
    }
    ctx->pc = 0x25353Cu;
    // 0x25353c: 0x2404001e
    ctx->pc = 0x25353cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x253540: 0xc09f866
    ctx->pc = 0x253540u;
    SET_GPR_U32(ctx, 31, 0x253548u);
    ctx->pc = 0x253544u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x27E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXNoLoop_0x27e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253548u; }
    }
    if (ctx->pc != 0x253548u) { return; }
    ctx->pc = 0x253548u;
label_253548:
    // 0x253548: 0xdfbf0040
    ctx->pc = 0x253548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25354c:
    // 0x25354c: 0xdfb10030
    ctx->pc = 0x25354cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253550: 0xdfb00020
    ctx->pc = 0x253550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253554: 0x3e00008
    ctx->pc = 0x253554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25349Cu: goto label_25349c;
            case 0x2534B0u: goto label_2534b0;
            case 0x2534C0u: goto label_2534c0;
            case 0x253510u: goto label_253510;
            case 0x253534u: goto label_253534;
            case 0x253548u: goto label_253548;
            case 0x25354Cu: goto label_25354c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25355Cu;
}
