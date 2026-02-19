#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_titlescreen
// Address: 0x2840b8 - 0x284318
void init_titlescreen_0x2840b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2840b8u;

    // 0x2840b8: 0x27bdff60
    ctx->pc = 0x2840b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2840bc: 0xffbf0090
    ctx->pc = 0x2840bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2840c0: 0xffb60080
    ctx->pc = 0x2840c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2840c4: 0xffb50070
    ctx->pc = 0x2840c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2840c8: 0xffb40060
    ctx->pc = 0x2840c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2840cc: 0xffb30050
    ctx->pc = 0x2840ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2840d0: 0xffb20040
    ctx->pc = 0x2840d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2840d4: 0xffb10030
    ctx->pc = 0x2840d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2840d8: 0xffb00020
    ctx->pc = 0x2840d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2840dc: 0xc0b521c
    ctx->pc = 0x2840DCu;
    SET_GPR_U32(ctx, 31, 0x2840E4u);
    ctx->pc = 0x2840E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D4870u;
    {
        const uint32_t __entryPc = ctx->pc;
        wait_vb_0x2d4870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2840E4u; }
    }
    if (ctx->pc != 0x2840E4u) { return; }
    ctx->pc = 0x2840E4u;
    // 0x2840e4: 0x3c100035
    ctx->pc = 0x2840e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x2840e8: 0x8e02a2b8
    ctx->pc = 0x2840e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943416)));
    // 0x2840ec: 0x4430018
    ctx->pc = 0x2840ECu;
    {
        const bool branch_taken_0x2840ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2840ec) {
            ctx->pc = 0x2840F0u;
            SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32777));
            ctx->pc = 0x284150u;
            goto label_284150;
        }
    }
    ctx->pc = 0x2840F4u;
    // 0x2840f4: 0xc089a1e
    ctx->pc = 0x2840F4u;
    SET_GPR_U32(ctx, 31, 0x2840FCu);
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2840FCu; }
    }
    if (ctx->pc != 0x2840FCu) { return; }
    ctx->pc = 0x2840FCu;
    // 0x2840fc: 0x34048009
    ctx->pc = 0x2840fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32777));
    // 0x284100: 0xc0a0896
    ctx->pc = 0x284100u;
    SET_GPR_U32(ctx, 31, 0x284108u);
    ctx->pc = 0x284104u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282258u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_attract_mode_0x282258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284108u; }
    }
    if (ctx->pc != 0x284108u) { return; }
    ctx->pc = 0x284108u;
    // 0x284108: 0x3c04003b
    ctx->pc = 0x284108u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x28410c: 0x2484c480
    ctx->pc = 0x28410cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x284110: 0x3c05003a
    ctx->pc = 0x284110u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x284114: 0x24a52550
    ctx->pc = 0x284114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x284118: 0x302d
    ctx->pc = 0x284118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28411c: 0xc0b1b04
    ctx->pc = 0x28411Cu;
    SET_GPR_U32(ctx, 31, 0x284124u);
    ctx->pc = 0x284120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284124u; }
    }
    if (ctx->pc != 0x284124u) { return; }
    ctx->pc = 0x284124u;
    // 0x284124: 0x3c04003b
    ctx->pc = 0x284124u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x284128: 0xc0b4a34
    ctx->pc = 0x284128u;
    SET_GPR_U32(ctx, 31, 0x284130u);
    ctx->pc = 0x28412Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955032));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284130u; }
    }
    if (ctx->pc != 0x284130u) { return; }
    ctx->pc = 0x284130u;
    // 0x284130: 0x3c04003b
    ctx->pc = 0x284130u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x284134: 0x2484d030
    ctx->pc = 0x284134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955056));
    // 0x284138: 0x282d
    ctx->pc = 0x284138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28413c: 0x24060001
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x284140: 0xc080d22
    ctx->pc = 0x284140u;
    SET_GPR_U32(ctx, 31, 0x284148u);
    ctx->pc = 0x284144u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284148u; }
    }
    if (ctx->pc != 0x284148u) { return; }
    ctx->pc = 0x284148u;
    // 0x284148: 0x10000003
    ctx->pc = 0x284148u;
    {
        const bool branch_taken_0x284148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28414Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943416), GPR_U32(ctx, 2));
        if (branch_taken_0x284148) {
            ctx->pc = 0x284158u;
            goto label_284158;
        }
    }
    ctx->pc = 0x284150u;
label_284150:
    // 0x284150: 0xc0a0896
    ctx->pc = 0x284150u;
    SET_GPR_U32(ctx, 31, 0x284158u);
    ctx->pc = 0x284154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->pc = 0x282258u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_attract_mode_0x282258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284158u; }
    }
    if (ctx->pc != 0x284158u) { return; }
    ctx->pc = 0x284158u;
label_284158:
    // 0x284158: 0x3c030034
    ctx->pc = 0x284158u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x28415c: 0x2402000d
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x284160: 0xac62e800
    ctx->pc = 0x284160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 2));
    // 0x284164: 0x3c020034
    ctx->pc = 0x284164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x284168: 0xac40e804
    ctx->pc = 0x284168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961156), GPR_U32(ctx, 0));
    // 0x28416c: 0x3c020034
    ctx->pc = 0x28416cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x284170: 0x2403ffff
    ctx->pc = 0x284170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284174: 0xac43e808
    ctx->pc = 0x284174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
    // 0x284178: 0x3c020034
    ctx->pc = 0x284178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28417c: 0xac43e80c
    ctx->pc = 0x28417cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961164), GPR_U32(ctx, 3));
    // 0x284180: 0x3c020034
    ctx->pc = 0x284180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x284184: 0xac40fa8c
    ctx->pc = 0x284184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965900), GPR_U32(ctx, 0));
    // 0x284188: 0x3c020032
    ctx->pc = 0x284188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28418c: 0xac401330
    ctx->pc = 0x28418cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
    // 0x284190: 0x3c04003b
    ctx->pc = 0x284190u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x284194: 0xc0b4a34
    ctx->pc = 0x284194u;
    SET_GPR_U32(ctx, 31, 0x28419Cu);
    ctx->pc = 0x284198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955064));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28419Cu; }
    }
    if (ctx->pc != 0x28419Cu) { return; }
    ctx->pc = 0x28419Cu;
    // 0x28419c: 0xc09710c
    ctx->pc = 0x28419Cu;
    SET_GPR_U32(ctx, 31, 0x2841A4u);
    ctx->pc = 0x2841A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841A4u; }
    }
    if (ctx->pc != 0x2841A4u) { return; }
    ctx->pc = 0x2841A4u;
    // 0x2841a4: 0x3c04003b
    ctx->pc = 0x2841a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2841a8: 0xc0b4a34
    ctx->pc = 0x2841A8u;
    SET_GPR_U32(ctx, 31, 0x2841B0u);
    ctx->pc = 0x2841ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955080));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841B0u; }
    }
    if (ctx->pc != 0x2841B0u) { return; }
    ctx->pc = 0x2841B0u;
    // 0x2841b0: 0xc09739e
    ctx->pc = 0x2841B0u;
    SET_GPR_U32(ctx, 31, 0x2841B8u);
    ctx->pc = 0x2841B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25CE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSelect_0x25ce78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841B8u; }
    }
    if (ctx->pc != 0x2841B8u) { return; }
    ctx->pc = 0x2841B8u;
    // 0x2841b8: 0x3c020035
    ctx->pc = 0x2841b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2841bc: 0xac40a2c0
    ctx->pc = 0x2841bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943424), GPR_U32(ctx, 0));
    // 0x2841c0: 0x3c020035
    ctx->pc = 0x2841c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2841c4: 0xac40a2d8
    ctx->pc = 0x2841c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943448), GPR_U32(ctx, 0));
    // 0x2841c8: 0x3c16003b
    ctx->pc = 0x2841c8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)59 << 16));
    // 0x2841cc: 0x3c15003b
    ctx->pc = 0x2841ccu;
    SET_GPR_U32(ctx, 21, ((uint32_t)59 << 16));
    // 0x2841d0: 0x3c020035
    ctx->pc = 0x2841d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2841d4: 0x24549ca0
    ctx->pc = 0x2841d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x2841d8: 0x3c020035
    ctx->pc = 0x2841d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2841dc: 0x24539ca4
    ctx->pc = 0x2841dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294941860));
    // 0x2841e0: 0x3c02003c
    ctx->pc = 0x2841e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2841e4: 0x24523b50
    ctx->pc = 0x2841e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15184));
    // 0x2841e8: 0x3c110035
    ctx->pc = 0x2841e8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x2841ec: 0x3a0202d
    ctx->pc = 0x2841ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2841f0:
    // 0x2841f0: 0x26c5c4a8
    ctx->pc = 0x2841f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 4294952104));
    // 0x2841f4: 0x26a6d058
    ctx->pc = 0x2841f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 4294955096));
    // 0x2841f8: 0xc0b6252
    ctx->pc = 0x2841F8u;
    SET_GPR_U32(ctx, 31, 0x284200u);
    ctx->pc = 0x2841FCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284200u; }
    }
    if (ctx->pc != 0x284200u) { return; }
    ctx->pc = 0x284200u;
    // 0x284200: 0x1010c0
    ctx->pc = 0x284200u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x284204: 0x541821
    ctx->pc = 0x284204u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x284208: 0x531021
    ctx->pc = 0x284208u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x28420c: 0x3a0202d
    ctx->pc = 0x28420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284210: 0x8c650000
    ctx->pc = 0x284210u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284214: 0xc0b0c08
    ctx->pc = 0x284214u;
    SET_GPR_U32(ctx, 31, 0x28421Cu);
    ctx->pc = 0x284218u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28421Cu; }
    }
    if (ctx->pc != 0x28421Cu) { return; }
    ctx->pc = 0x28421Cu;
    // 0x28421c: 0x101880
    ctx->pc = 0x28421cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x284220: 0x721821
    ctx->pc = 0x284220u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x284224: 0xac620000
    ctx->pc = 0x284224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x284228: 0x40202d
    ctx->pc = 0x284228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28422c: 0xc0b0dd6
    ctx->pc = 0x28422Cu;
    SET_GPR_U32(ctx, 31, 0x284234u);
    ctx->pc = 0x284230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294943420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284234u; }
    }
    if (ctx->pc != 0x284234u) { return; }
    ctx->pc = 0x284234u;
    // 0x284234: 0x26100001
    ctx->pc = 0x284234u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x284238: 0x2a020004
    ctx->pc = 0x284238u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x28423c: 0x5440ffec
    ctx->pc = 0x28423Cu;
    {
        const bool branch_taken_0x28423c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28423c) {
            ctx->pc = 0x284240u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2841F0u;
            goto label_2841f0;
        }
    }
    ctx->pc = 0x284244u;
    // 0x284244: 0x3c04003b
    ctx->pc = 0x284244u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x284248: 0x2484d060
    ctx->pc = 0x284248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955104));
    // 0x28424c: 0xc0b1bb4
    ctx->pc = 0x28424Cu;
    SET_GPR_U32(ctx, 31, 0x284254u);
    ctx->pc = 0x284250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284254u; }
    }
    if (ctx->pc != 0x284254u) { return; }
    ctx->pc = 0x284254u;
    // 0x284254: 0x3c030035
    ctx->pc = 0x284254u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x284258: 0xac62a2c4
    ctx->pc = 0x284258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943428), GPR_U32(ctx, 2));
    // 0x28425c: 0x202d
    ctx->pc = 0x28425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284260: 0x40282d
    ctx->pc = 0x284260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284264: 0x240600c0
    ctx->pc = 0x284264u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    // 0x284268: 0x382d
    ctx->pc = 0x284268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28426c: 0x24080080
    ctx->pc = 0x28426cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
    // 0x284270: 0xc0b0b54
    ctx->pc = 0x284270u;
    SET_GPR_U32(ctx, 31, 0x284278u);
    ctx->pc = 0x284274u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284278u; }
    }
    if (ctx->pc != 0x284278u) { return; }
    ctx->pc = 0x284278u;
    // 0x284278: 0x3c10003c
    ctx->pc = 0x284278u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x28427c: 0xae023b60
    ctx->pc = 0x28427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15200), GPR_U32(ctx, 2));
    // 0x284280: 0x3c04003b
    ctx->pc = 0x284280u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x284284: 0xc0b4a34
    ctx->pc = 0x284284u;
    SET_GPR_U32(ctx, 31, 0x28428Cu);
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955120));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28428Cu; }
    }
    if (ctx->pc != 0x28428Cu) { return; }
    ctx->pc = 0x28428Cu;
    // 0x28428c: 0xc0a178c
    ctx->pc = 0x28428Cu;
    SET_GPR_U32(ctx, 31, 0x284294u);
    ctx->pc = 0x285E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        SelectLoadStart_0x285e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284294u; }
    }
    if (ctx->pc != 0x284294u) { return; }
    ctx->pc = 0x284294u;
    // 0x284294: 0x3c04003b
    ctx->pc = 0x284294u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x284298: 0xc0b4a34
    ctx->pc = 0x284298u;
    SET_GPR_U32(ctx, 31, 0x2842A0u);
    ctx->pc = 0x28429Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955136));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842A0u; }
    }
    if (ctx->pc != 0x2842A0u) { return; }
    ctx->pc = 0x2842A0u;
    // 0x2842a0: 0xc089994
    ctx->pc = 0x2842A0u;
    SET_GPR_U32(ctx, 31, 0x2842A8u);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842A8u; }
    }
    if (ctx->pc != 0x2842A8u) { return; }
    ctx->pc = 0x2842A8u;
    // 0x2842a8: 0x3c013f86
    ctx->pc = 0x2842a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16262 << 16));
    // 0x2842ac: 0x34210a92
    ctx->pc = 0x2842acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x2842b0: 0x44816000
    ctx->pc = 0x2842b0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2842b4: 0xc0b4502
    ctx->pc = 0x2842B4u;
    SET_GPR_U32(ctx, 31, 0x2842BCu);
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842BCu; }
    }
    if (ctx->pc != 0x2842BCu) { return; }
    ctx->pc = 0x2842BCu;
    // 0x2842bc: 0x3c020035
    ctx->pc = 0x2842bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2842c0: 0xac40a2c8
    ctx->pc = 0x2842c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943432), GPR_U32(ctx, 0));
    // 0x2842c4: 0x3c030035
    ctx->pc = 0x2842c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2842c8: 0x2402001e
    ctx->pc = 0x2842c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x2842cc: 0xac62a2cc
    ctx->pc = 0x2842ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943436), GPR_U32(ctx, 2));
    // 0x2842d0: 0x8e043b60
    ctx->pc = 0x2842d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15200)));
    // 0x2842d4: 0xc0b0f52
    ctx->pc = 0x2842D4u;
    SET_GPR_U32(ctx, 31, 0x2842DCu);
    ctx->pc = 0x2842D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842DCu; }
    }
    if (ctx->pc != 0x2842DCu) { return; }
    ctx->pc = 0x2842DCu;
    // 0x2842dc: 0xc0a1022
    ctx->pc = 0x2842DCu;
    SET_GPR_U32(ctx, 31, 0x2842E4u);
    ctx->pc = 0x284088u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_titlescreen_timer_0x284088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842E4u; }
    }
    if (ctx->pc != 0x2842E4u) { return; }
    ctx->pc = 0x2842E4u;
    // 0x2842e4: 0x3c04003b
    ctx->pc = 0x2842e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2842e8: 0xc0b4a34
    ctx->pc = 0x2842E8u;
    SET_GPR_U32(ctx, 31, 0x2842F0u);
    ctx->pc = 0x2842ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955152));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842F0u; }
    }
    if (ctx->pc != 0x2842F0u) { return; }
    ctx->pc = 0x2842F0u;
    // 0x2842f0: 0xdfbf0090
    ctx->pc = 0x2842f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2842f4: 0xdfb60080
    ctx->pc = 0x2842f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2842f8: 0xdfb50070
    ctx->pc = 0x2842f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2842fc: 0xdfb40060
    ctx->pc = 0x2842fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284300: 0xdfb30050
    ctx->pc = 0x284300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284304: 0xdfb20040
    ctx->pc = 0x284304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284308: 0xdfb10030
    ctx->pc = 0x284308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28430c: 0xdfb00020
    ctx->pc = 0x28430cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284310: 0x3e00008
    ctx->pc = 0x284310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284150u: goto label_284150;
            case 0x284158u: goto label_284158;
            case 0x2841F0u: goto label_2841f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284318u;
}
