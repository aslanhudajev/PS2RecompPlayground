#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WritePlayerInfo
// Address: 0x236938 - 0x236b4c
void WritePlayerInfo_0x236938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236938u;

    // 0x236938: 0x27bdff60
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23693c: 0xffbf0090
    ctx->pc = 0x23693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x236940: 0xffbe0080
    ctx->pc = 0x236940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x236944: 0xffb70070
    ctx->pc = 0x236944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x236948: 0xffb60060
    ctx->pc = 0x236948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23694c: 0xffb50050
    ctx->pc = 0x23694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x236950: 0xffb40040
    ctx->pc = 0x236950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x236954: 0xffb30030
    ctx->pc = 0x236954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236958: 0xffb20020
    ctx->pc = 0x236958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23695c: 0xffb10010
    ctx->pc = 0x23695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236960: 0xffb00000
    ctx->pc = 0x236960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236964: 0x3c020031
    ctx->pc = 0x236964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x236968: 0x8c420018
    ctx->pc = 0x236968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23696c: 0x30428000
    ctx->pc = 0x23696cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x236970: 0x10400005
    ctx->pc = 0x236970u;
    {
        const bool branch_taken_0x236970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x236974u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236970) {
            ctx->pc = 0x236988u;
            goto label_236988;
        }
    }
    ctx->pc = 0x236978u;
    // 0x236978: 0x3c020035
    ctx->pc = 0x236978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x23697c: 0x8c42a2d8
    ctx->pc = 0x23697cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x236980: 0x14400067
    ctx->pc = 0x236980u;
    {
        const bool branch_taken_0x236980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236984u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x236980) {
            ctx->pc = 0x236B20u;
            goto label_236b20;
        }
    }
    ctx->pc = 0x236988u;
label_236988:
    // 0x236988: 0x6600009
    ctx->pc = 0x236988u;
    {
        const bool branch_taken_0x236988 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x23698Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x236988) {
            ctx->pc = 0x2369B0u;
            goto label_2369b0;
        }
    }
    ctx->pc = 0x236990u;
    // 0x236990: 0x24030001
    ctx->pc = 0x236990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x236994: 0x2631804
    ctx->pc = 0x236994u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x236998: 0x8c4207b4
    ctx->pc = 0x236998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
    // 0x23699c: 0x621824
    ctx->pc = 0x23699cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2369a0: 0x1060005e
    ctx->pc = 0x2369A0u;
    {
        const bool branch_taken_0x2369a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2369A4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x2369a0) {
            ctx->pc = 0x236B1Cu;
            goto label_236b1c;
        }
    }
    ctx->pc = 0x2369A8u;
    // 0x2369a8: 0x10000003
    ctx->pc = 0x2369A8u;
    {
        const bool branch_taken_0x2369a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2369ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2369a8) {
            ctx->pc = 0x2369B8u;
            goto label_2369b8;
        }
    }
    ctx->pc = 0x2369B0u;
label_2369b0:
    // 0x2369b0: 0x202d
    ctx->pc = 0x2369b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369b4: 0x24120004
    ctx->pc = 0x2369b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
label_2369b8:
    // 0x2369b8: 0x80802d
    ctx->pc = 0x2369b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369bc: 0x24032b00
    ctx->pc = 0x2369bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2369c0: 0x2031818
    ctx->pc = 0x2369c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2369c4: 0x3c020032
    ctx->pc = 0x2369c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2369c8: 0x24421bc0
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2369cc: 0x628821
    ctx->pc = 0x2369ccu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2369d0: 0x212102a
    ctx->pc = 0x2369d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x2369d4: 0x1040002a
    ctx->pc = 0x2369D4u;
    {
        const bool branch_taken_0x2369d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2369d4) {
            ctx->pc = 0x236A80u;
            goto label_236a80;
        }
    }
    ctx->pc = 0x2369DCu;
    // 0x2369dc: 0x3c1e0032
    ctx->pc = 0x2369dcu;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
    // 0x2369e0: 0x24170001
    ctx->pc = 0x2369e0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2369e4: 0x24160003
    ctx->pc = 0x2369e4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2369e8: 0x24150006
    ctx->pc = 0x2369e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2369ec: 0x2414000a
    ctx->pc = 0x2369ecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 10));
label_2369f0:
    // 0x2369f0: 0x2171004
    ctx->pc = 0x2369f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 16) & 0x1F));
    // 0x2369f4: 0x8fc307b4
    ctx->pc = 0x2369f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 1972)));
    // 0x2369f8: 0x431024
    ctx->pc = 0x2369f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2369fc: 0x5040001d
    ctx->pc = 0x2369FCu;
    {
        const bool branch_taken_0x2369fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2369fc) {
            ctx->pc = 0x236A00u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x236A74u;
            goto label_236a74;
        }
    }
    ctx->pc = 0x236A04u;
    // 0x236a04: 0x9623093e
    ctx->pc = 0x236a04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2366)));
    // 0x236a08: 0x30620001
    ctx->pc = 0x236a08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x236a0c: 0x54400019
    ctx->pc = 0x236A0Cu;
    {
        const bool branch_taken_0x236a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x236a0c) {
            ctx->pc = 0x236A10u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x236A74u;
            goto label_236a74;
        }
    }
    ctx->pc = 0x236A14u;
    // 0x236a14: 0x34620001
    ctx->pc = 0x236a14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x236a18: 0xa622093e
    ctx->pc = 0x236a18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2366), (uint16_t)GPR_U32(ctx, 2));
    // 0x236a1c: 0x8e23097c
    ctx->pc = 0x236a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2428)));
    // 0x236a20: 0x10760013
    ctx->pc = 0x236A20u;
    {
        const bool branch_taken_0x236a20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x236A24u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x236a20) {
            ctx->pc = 0x236A70u;
            goto label_236a70;
        }
    }
    ctx->pc = 0x236A28u;
    // 0x236a28: 0x10400005
    ctx->pc = 0x236A28u;
    {
        const bool branch_taken_0x236a28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x236a28) {
            ctx->pc = 0x236A40u;
            goto label_236a40;
        }
    }
    ctx->pc = 0x236A30u;
    // 0x236a30: 0x50600010
    ctx->pc = 0x236A30u;
    {
        const bool branch_taken_0x236a30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x236a30) {
            ctx->pc = 0x236A34u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x236A74u;
            goto label_236a74;
        }
    }
    ctx->pc = 0x236A38u;
    // 0x236a38: 0x10000009
    ctx->pc = 0x236A38u;
    {
        const bool branch_taken_0x236a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x236a38) {
            ctx->pc = 0x236A60u;
            goto label_236a60;
        }
    }
    ctx->pc = 0x236A40u;
label_236a40:
    // 0x236a40: 0x10750003
    ctx->pc = 0x236A40u;
    {
        const bool branch_taken_0x236a40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        if (branch_taken_0x236a40) {
            ctx->pc = 0x236A50u;
            goto label_236a50;
        }
    }
    ctx->pc = 0x236A48u;
    // 0x236a48: 0x14740005
    ctx->pc = 0x236A48u;
    {
        const bool branch_taken_0x236a48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        if (branch_taken_0x236a48) {
            ctx->pc = 0x236A60u;
            goto label_236a60;
        }
    }
    ctx->pc = 0x236A50u;
label_236a50:
    // 0x236a50: 0xc08d76c
    ctx->pc = 0x236A50u;
    SET_GPR_U32(ctx, 31, 0x236A58u);
    ctx->pc = 0x236A54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_health_and_items_0x235db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A58u; }
    }
    if (ctx->pc != 0x236A58u) { return; }
    ctx->pc = 0x236A58u;
    // 0x236a58: 0x10000006
    ctx->pc = 0x236A58u;
    {
        const bool branch_taken_0x236a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x236A5Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x236a58) {
            ctx->pc = 0x236A74u;
            goto label_236a74;
        }
    }
    ctx->pc = 0x236A60u;
label_236a60:
    // 0x236a60: 0xc08d76c
    ctx->pc = 0x236A60u;
    SET_GPR_U32(ctx, 31, 0x236A68u);
    ctx->pc = 0x236A64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_health_and_items_0x235db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A68u; }
    }
    if (ctx->pc != 0x236A68u) { return; }
    ctx->pc = 0x236A68u;
    // 0x236a68: 0xc08d9c2
    ctx->pc = 0x236A68u;
    SET_GPR_U32(ctx, 31, 0x236A70u);
    ctx->pc = 0x236A6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236708u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_crystals_0x236708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A70u; }
    }
    if (ctx->pc != 0x236A70u) { return; }
    ctx->pc = 0x236A70u;
label_236a70:
    // 0x236a70: 0x26100001
    ctx->pc = 0x236a70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_236a74:
    // 0x236a74: 0x212102a
    ctx->pc = 0x236a74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x236a78: 0x1440ffdd
    ctx->pc = 0x236A78u;
    {
        const bool branch_taken_0x236a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236A7Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x236a78) {
            ctx->pc = 0x2369F0u;
            goto label_2369f0;
        }
    }
    ctx->pc = 0x236A80u;
label_236a80:
    // 0x236a80: 0x6610027
    ctx->pc = 0x236A80u;
    {
        const bool branch_taken_0x236a80 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x236A84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x236a80) {
            ctx->pc = 0x236B20u;
            goto label_236b20;
        }
    }
    ctx->pc = 0x236A88u;
    // 0x236a88: 0xc08d924
    ctx->pc = 0x236A88u;
    SET_GPR_U32(ctx, 31, 0x236A90u);
    ctx->pc = 0x236A8Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x236490u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowRuneStones_0x236490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A90u; }
    }
    if (ctx->pc != 0x236A90u) { return; }
    ctx->pc = 0x236A90u;
    // 0x236a90: 0x8e041b40
    ctx->pc = 0x236a90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6976)));
    // 0x236a94: 0x10800005
    ctx->pc = 0x236A94u;
    {
        const bool branch_taken_0x236a94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x236A98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x236a94) {
            ctx->pc = 0x236AACu;
            goto label_236aac;
        }
    }
    ctx->pc = 0x236A9Cu;
    // 0x236a9c: 0xc0b0b38
    ctx->pc = 0x236A9Cu;
    SET_GPR_U32(ctx, 31, 0x236AA4u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AA4u; }
    }
    if (ctx->pc != 0x236AA4u) { return; }
    ctx->pc = 0x236AA4u;
    // 0x236aa4: 0xae001b40
    ctx->pc = 0x236aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6976), GPR_U32(ctx, 0));
    // 0x236aa8: 0x3c020033
    ctx->pc = 0x236aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_236aac:
    // 0x236aac: 0x8c44c7c4
    ctx->pc = 0x236aacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952900)));
    // 0x236ab0: 0x480001a
    ctx->pc = 0x236AB0u;
    {
        const bool branch_taken_0x236ab0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x236AB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x236ab0) {
            ctx->pc = 0x236B1Cu;
            goto label_236b1c;
        }
    }
    ctx->pc = 0x236AB8u;
    // 0x236ab8: 0x24030001
    ctx->pc = 0x236ab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x236abc: 0x831804
    ctx->pc = 0x236abcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x236ac0: 0x8c4207b4
    ctx->pc = 0x236ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
    // 0x236ac4: 0x621824
    ctx->pc = 0x236ac4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236ac8: 0x10600014
    ctx->pc = 0x236AC8u;
    {
        const bool branch_taken_0x236ac8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x236ACCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x236ac8) {
            ctx->pc = 0x236B1Cu;
            goto label_236b1c;
        }
    }
    ctx->pc = 0x236AD0u;
    // 0x236ad0: 0x246315d0
    ctx->pc = 0x236ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5584));
    // 0x236ad4: 0x41040
    ctx->pc = 0x236ad4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x236ad8: 0x431021
    ctx->pc = 0x236ad8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236adc: 0x94450000
    ctx->pc = 0x236adcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236ae0: 0x3c04003a
    ctx->pc = 0x236ae0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x236ae4: 0x24847a80
    ctx->pc = 0x236ae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31360));
    // 0x236ae8: 0x24a50022
    ctx->pc = 0x236ae8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 34));
    // 0x236aec: 0xc0b0c08
    ctx->pc = 0x236AECu;
    SET_GPR_U32(ctx, 31, 0x236AF4u);
    ctx->pc = 0x236AF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294966947));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AF4u; }
    }
    if (ctx->pc != 0x236AF4u) { return; }
    ctx->pc = 0x236AF4u;
    // 0x236af4: 0x3c10003c
    ctx->pc = 0x236af4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x236af8: 0xae021b40
    ctx->pc = 0x236af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6976), GPR_U32(ctx, 2));
    // 0x236afc: 0x40202d
    ctx->pc = 0x236afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b00: 0x24050020
    ctx->pc = 0x236b00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x236b04: 0xc0b0cf6
    ctx->pc = 0x236B04u;
    SET_GPR_U32(ctx, 31, 0x236B0Cu);
    ctx->pc = 0x236B08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B0Cu; }
    }
    if (ctx->pc != 0x236B0Cu) { return; }
    ctx->pc = 0x236B0Cu;
    // 0x236b0c: 0x3c01477a
    ctx->pc = 0x236b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x236b10: 0x44816000
    ctx->pc = 0x236b10u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x236b14: 0xc0b0dd6
    ctx->pc = 0x236B14u;
    SET_GPR_U32(ctx, 31, 0x236B1Cu);
    ctx->pc = 0x236B18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6976)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B1Cu; }
    }
    if (ctx->pc != 0x236B1Cu) { return; }
    ctx->pc = 0x236B1Cu;
label_236b1c:
    // 0x236b1c: 0xdfbf0090
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_236b20:
    // 0x236b20: 0xdfbe0080
    ctx->pc = 0x236b20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x236b24: 0xdfb70070
    ctx->pc = 0x236b24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236b28: 0xdfb60060
    ctx->pc = 0x236b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236b2c: 0xdfb50050
    ctx->pc = 0x236b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236b30: 0xdfb40040
    ctx->pc = 0x236b30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236b34: 0xdfb30030
    ctx->pc = 0x236b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236b38: 0xdfb20020
    ctx->pc = 0x236b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236b3c: 0xdfb10010
    ctx->pc = 0x236b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b40: 0xdfb00000
    ctx->pc = 0x236b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b44: 0x3e00008
    ctx->pc = 0x236B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236988u: goto label_236988;
            case 0x2369B0u: goto label_2369b0;
            case 0x2369B8u: goto label_2369b8;
            case 0x2369F0u: goto label_2369f0;
            case 0x236A40u: goto label_236a40;
            case 0x236A50u: goto label_236a50;
            case 0x236A60u: goto label_236a60;
            case 0x236A70u: goto label_236a70;
            case 0x236A74u: goto label_236a74;
            case 0x236A80u: goto label_236a80;
            case 0x236AACu: goto label_236aac;
            case 0x236B1Cu: goto label_236b1c;
            case 0x236B20u: goto label_236b20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236B4Cu;
}
