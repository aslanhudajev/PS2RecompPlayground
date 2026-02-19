#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: HideExits
// Address: 0x25b6b8 - 0x25b95c
void HideExits_0x25b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b6b8u;

    // 0x25b6b8: 0x27bdfec0
    ctx->pc = 0x25b6b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x25b6bc: 0xffbf0130
    ctx->pc = 0x25b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x25b6c0: 0xffbe0120
    ctx->pc = 0x25b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x25b6c4: 0xffb70110
    ctx->pc = 0x25b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x25b6c8: 0xffb60100
    ctx->pc = 0x25b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x25b6cc: 0xffb500f0
    ctx->pc = 0x25b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x25b6d0: 0xffb400e0
    ctx->pc = 0x25b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x25b6d4: 0xffb300d0
    ctx->pc = 0x25b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x25b6d8: 0xffb200c0
    ctx->pc = 0x25b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x25b6dc: 0xffb100b0
    ctx->pc = 0x25b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x25b6e0: 0xffb000a0
    ctx->pc = 0x25b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x25b6e4: 0x802d
    ctx->pc = 0x25b6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b6e8:
    // 0x25b6e8: 0x101080
    ctx->pc = 0x25b6e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25b6ec: 0x3a21021
    ctx->pc = 0x25b6ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x25b6f0: 0xac400000
    ctx->pc = 0x25b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25b6f4: 0x26100001
    ctx->pc = 0x25b6f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x25b6f8: 0x2a02000e
    ctx->pc = 0x25b6f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 14));
    // 0x25b6fc: 0x1440fffa
    ctx->pc = 0x25B6FCu;
    {
        const bool branch_taken_0x25b6fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25b6fc) {
            ctx->pc = 0x25B6E8u;
            goto label_25b6e8;
        }
    }
    ctx->pc = 0x25B704u;
    // 0x25b704: 0xa82d
    ctx->pc = 0x25b704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b708: 0x24132b00
    ctx->pc = 0x25b708u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25b70c: 0x3c020032
    ctx->pc = 0x25b70cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25b710: 0x24521bc0
    ctx->pc = 0x25b710u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25b714: 0x2b31018
    ctx->pc = 0x25b714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25b718:
    // 0x25b718: 0x528821
    ctx->pc = 0x25b718u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25b71c: 0x8e2200fc
    ctx->pc = 0x25b71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x25b720: 0x5040000f
    ctx->pc = 0x25B720u;
    {
        const bool branch_taken_0x25b720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25b720) {
            ctx->pc = 0x25B724u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x25B760u;
            goto label_25b760;
        }
    }
    ctx->pc = 0x25B728u;
    // 0x25b728: 0x802d
    ctx->pc = 0x25b728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b72c: 0x220202d
    ctx->pc = 0x25b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b730:
    // 0x25b730: 0xc09dd2c
    ctx->pc = 0x25B730u;
    SET_GPR_U32(ctx, 31, 0x25B738u);
    ctx->pc = 0x25B734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2774B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWaves_0x2774b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B738u; }
    }
    if (ctx->pc != 0x25B738u) { return; }
    ctx->pc = 0x25B738u;
    // 0x25b738: 0x101880
    ctx->pc = 0x25b738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25b73c: 0x3a32021
    ctx->pc = 0x25b73cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x25b740: 0x8c830000
    ctx->pc = 0x25b740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25b744: 0x431025
    ctx->pc = 0x25b744u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b748: 0xac820000
    ctx->pc = 0x25b748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x25b74c: 0x26100001
    ctx->pc = 0x25b74cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x25b750: 0x2a02000e
    ctx->pc = 0x25b750u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 14));
    // 0x25b754: 0x1440fff6
    ctx->pc = 0x25B754u;
    {
        const bool branch_taken_0x25b754 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B758u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b754) {
            ctx->pc = 0x25B730u;
            goto label_25b730;
        }
    }
    ctx->pc = 0x25B75Cu;
    // 0x25b75c: 0x26b50001
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_25b760:
    // 0x25b760: 0x2aa20004
    ctx->pc = 0x25b760u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 4));
    // 0x25b764: 0x1440ffec
    ctx->pc = 0x25B764u;
    {
        const bool branch_taken_0x25b764 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B768u;
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25b764) {
            ctx->pc = 0x25B718u;
            goto label_25b718;
        }
    }
    ctx->pc = 0x25B76Cu;
    // 0x25b76c: 0x3c020034
    ctx->pc = 0x25b76cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b770: 0x8c42cd98
    ctx->pc = 0x25b770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x25b774: 0x1840006d
    ctx->pc = 0x25B774u;
    {
        const bool branch_taken_0x25b774 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25B778u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b774) {
            ctx->pc = 0x25B92Cu;
            goto label_25b92c;
        }
    }
    ctx->pc = 0x25B77Cu;
    // 0x25b77c: 0x24140001
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b780: 0x27be0060
    ctx->pc = 0x25b780u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b784: 0x27b70040
    ctx->pc = 0x25b784u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b788: 0x24020110
    ctx->pc = 0x25b788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25b78c: 0x0
    ctx->pc = 0x25b78cu;
    // NOP
label_25b790:
    // 0x25b790: 0x2a21018
    ctx->pc = 0x25b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25b794: 0x3c040034
    ctx->pc = 0x25b794u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x25b798: 0x8c83cd94
    ctx->pc = 0x25b798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294954388)));
    // 0x25b79c: 0x439821
    ctx->pc = 0x25b79cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b7a0: 0x866300d8
    ctx->pc = 0x25b7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x25b7a4: 0x2402ffff
    ctx->pc = 0x25b7a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b7a8: 0x1062005a
    ctx->pc = 0x25B7A8u;
    {
        const bool branch_taken_0x25b7a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25B7ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b7a8) {
            ctx->pc = 0x25B914u;
            goto label_25b914;
        }
    }
    ctx->pc = 0x25B7B0u;
    // 0x25b7b0: 0x8e620000
    ctx->pc = 0x25b7b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25b7b4: 0x8c430000
    ctx->pc = 0x25b7b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b7b8: 0x24020009
    ctx->pc = 0x25b7b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x25b7bc: 0x54620056
    ctx->pc = 0x25B7BCu;
    {
        const bool branch_taken_0x25b7bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b7bc) {
            ctx->pc = 0x25B7C0u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x25B918u;
            goto label_25b918;
        }
    }
    ctx->pc = 0x25B7C4u;
    // 0x25b7c4: 0x966200f0
    ctx->pc = 0x25b7c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x25b7c8: 0x21400
    ctx->pc = 0x25b7c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x25b7cc: 0x2b403
    ctx->pc = 0x25b7ccu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25b7d0: 0x29603
    ctx->pc = 0x25b7d0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x25b7d4: 0x3c020031
    ctx->pc = 0x25b7d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x25b7d8: 0x8c42f184
    ctx->pc = 0x25b7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x25b7dc: 0x10400006
    ctx->pc = 0x25B7DCu;
    {
        const bool branch_taken_0x25b7dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B7E0u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 22), 255));
        if (branch_taken_0x25b7dc) {
            ctx->pc = 0x25B7F8u;
            goto label_25b7f8;
        }
    }
    ctx->pc = 0x25B7E4u;
    // 0x25b7e4: 0x11182b
    ctx->pc = 0x25b7e4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x25b7e8: 0x3a420007
    ctx->pc = 0x25b7e8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 7));
    // 0x25b7ec: 0x280802d
    ctx->pc = 0x25b7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b7f0: 0x10000023
    ctx->pc = 0x25B7F0u;
    {
        const bool branch_taken_0x25b7f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B7F4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x25b7f0) {
            ctx->pc = 0x25B880u;
            goto label_25b880;
        }
    }
    ctx->pc = 0x25B7F8u;
label_25b7f8:
    // 0x25b7f8: 0x2a420005
    ctx->pc = 0x25b7f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 5));
    // 0x25b7fc: 0x14400019
    ctx->pc = 0x25B7FCu;
    {
        const bool branch_taken_0x25b7fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B800u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x25b7fc) {
            ctx->pc = 0x25B864u;
            goto label_25b864;
        }
    }
    ctx->pc = 0x25B804u;
    // 0x25b804: 0x2a420007
    ctx->pc = 0x25b804u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 7));
    // 0x25b808: 0x14400005
    ctx->pc = 0x25B808u;
    {
        const bool branch_taken_0x25b808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B80Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x25b808) {
            ctx->pc = 0x25B820u;
            goto label_25b820;
        }
    }
    ctx->pc = 0x25B810u;
    // 0x25b810: 0x12420007
    ctx->pc = 0x25B810u;
    {
        const bool branch_taken_0x25b810 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x25b810) {
            ctx->pc = 0x25B830u;
            goto label_25b830;
        }
    }
    ctx->pc = 0x25B818u;
    // 0x25b818: 0x10000012
    ctx->pc = 0x25B818u;
    {
        const bool branch_taken_0x25b818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25b818) {
            ctx->pc = 0x25B864u;
            goto label_25b864;
        }
    }
    ctx->pc = 0x25B820u;
label_25b820:
    // 0x25b820: 0xc09dd74
    ctx->pc = 0x25B820u;
    SET_GPR_U32(ctx, 31, 0x25B828u);
    ctx->pc = 0x25B824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2775D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldOpen_0x2775d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B828u; }
    }
    if (ctx->pc != 0x25B828u) { return; }
    ctx->pc = 0x25B828u;
    // 0x25b828: 0x10000015
    ctx->pc = 0x25B828u;
    {
        const bool branch_taken_0x25b828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B82Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
        if (branch_taken_0x25b828) {
            ctx->pc = 0x25B880u;
            goto label_25b880;
        }
    }
    ctx->pc = 0x25B830u;
label_25b830:
    // 0x25b830: 0xc09dd74
    ctx->pc = 0x25B830u;
    SET_GPR_U32(ctx, 31, 0x25B838u);
    ctx->pc = 0x25B834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2775D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldOpen_0x2775d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B838u; }
    }
    if (ctx->pc != 0x25B838u) { return; }
    ctx->pc = 0x25B838u;
    // 0x25b838: 0x14400003
    ctx->pc = 0x25B838u;
    {
        const bool branch_taken_0x25b838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B83Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x25b838) {
            ctx->pc = 0x25B848u;
            goto label_25b848;
        }
    }
    ctx->pc = 0x25B840u;
    // 0x25b840: 0x1000000f
    ctx->pc = 0x25B840u;
    {
        const bool branch_taken_0x25b840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B844u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25b840) {
            ctx->pc = 0x25B880u;
            goto label_25b880;
        }
    }
    ctx->pc = 0x25B848u;
label_25b848:
    // 0x25b848: 0x24020003
    ctx->pc = 0x25b848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b84c: 0x14620005
    ctx->pc = 0x25B84Cu;
    {
        const bool branch_taken_0x25b84c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25B850u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25b84c) {
            ctx->pc = 0x25B864u;
            goto label_25b864;
        }
    }
    ctx->pc = 0x25B854u;
    // 0x25b854: 0xc09d9fe
    ctx->pc = 0x25B854u;
    SET_GPR_U32(ctx, 31, 0x25B85Cu);
    ctx->pc = 0x25B858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8191));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B85Cu; }
    }
    if (ctx->pc != 0x25B85Cu) { return; }
    ctx->pc = 0x25B85Cu;
    // 0x25b85c: 0x10000008
    ctx->pc = 0x25B85Cu;
    {
        const bool branch_taken_0x25b85c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B860u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
        if (branch_taken_0x25b85c) {
            ctx->pc = 0x25B880u;
            goto label_25b880;
        }
    }
    ctx->pc = 0x25B864u;
label_25b864:
    // 0x25b864: 0x6200006
    ctx->pc = 0x25B864u;
    {
        const bool branch_taken_0x25b864 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x25B868u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x25b864) {
            ctx->pc = 0x25B880u;
            goto label_25b880;
        }
    }
    ctx->pc = 0x25B86Cu;
    // 0x25b86c: 0x3a21021
    ctx->pc = 0x25b86cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x25b870: 0x8c420000
    ctx->pc = 0x25b870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b874: 0x2221007
    ctx->pc = 0x25b874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x25b878: 0x30420001
    ctx->pc = 0x25b878u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x25b87c: 0x282800a
    ctx->pc = 0x25b87cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
label_25b880:
    // 0x25b880: 0x52000025
    ctx->pc = 0x25B880u;
    {
        const bool branch_taken_0x25b880 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x25b880) {
            ctx->pc = 0x25B884u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x25B918u;
            goto label_25b918;
        }
    }
    ctx->pc = 0x25B888u;
    // 0x25b888: 0x8e640070
    ctx->pc = 0x25b888u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x25b88c: 0x8c900074
    ctx->pc = 0x25b88cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x25b890: 0xc0b5494
    ctx->pc = 0x25B890u;
    SET_GPR_U32(ctx, 31, 0x25B898u);
    ctx->pc = 0x25B894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B898u; }
    }
    if (ctx->pc != 0x25B898u) { return; }
    ctx->pc = 0x25B898u;
    // 0x25b898: 0xc094db8
    ctx->pc = 0x25B898u;
    SET_GPR_U32(ctx, 31, 0x25B8A0u);
    ctx->pc = 0x25B89Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2536E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveItemGeo_0x2536e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8A0u; }
    }
    if (ctx->pc != 0x25B8A0u) { return; }
    ctx->pc = 0x25B8A0u;
    // 0x25b8a0: 0x32d100ff
    ctx->pc = 0x25b8a0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 22), 255));
    // 0x25b8a4: 0x3c04003b
    ctx->pc = 0x25b8a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25b8a8: 0x24848fa0
    ctx->pc = 0x25b8a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938528));
    // 0x25b8ac: 0x3c0282d
    ctx->pc = 0x25b8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8b0: 0x200302d
    ctx->pc = 0x25b8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8b4: 0xc0b1b04
    ctx->pc = 0x25B8B4u;
    SET_GPR_U32(ctx, 31, 0x25B8BCu);
    ctx->pc = 0x25B8B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8BCu; }
    }
    if (ctx->pc != 0x25B8BCu) { return; }
    ctx->pc = 0x25B8BCu;
    // 0x25b8bc: 0xae620070
    ctx->pc = 0x25b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
    // 0x25b8c0: 0x24028000
    ctx->pc = 0x25b8c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x25b8c4: 0xa66200d8
    ctx->pc = 0x25b8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b8c8: 0x2e0202d
    ctx->pc = 0x25b8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8cc: 0x3c05003b
    ctx->pc = 0x25b8ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25b8d0: 0x24a58fb0
    ctx->pc = 0x25b8d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938544));
    // 0x25b8d4: 0x26460040
    ctx->pc = 0x25b8d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 64));
    // 0x25b8d8: 0xc0b6252
    ctx->pc = 0x25B8D8u;
    SET_GPR_U32(ctx, 31, 0x25B8E0u);
    ctx->pc = 0x25B8DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8E0u; }
    }
    if (ctx->pc != 0x25B8E0u) { return; }
    ctx->pc = 0x25B8E0u;
    // 0x25b8e0: 0xc0870d4
    ctx->pc = 0x25B8E0u;
    SET_GPR_U32(ctx, 31, 0x25B8E8u);
    ctx->pc = 0x25B8E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8E8u; }
    }
    if (ctx->pc != 0x25B8E8u) { return; }
    ctx->pc = 0x25B8E8u;
    // 0x25b8e8: 0x10400006
    ctx->pc = 0x25B8E8u;
    {
        const bool branch_taken_0x25b8e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B8ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25b8e8) {
            ctx->pc = 0x25B904u;
            goto label_25b904;
        }
    }
    ctx->pc = 0x25B8F0u;
    // 0x25b8f0: 0x8c440028
    ctx->pc = 0x25b8f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25b8f4: 0xc0b41b8
    ctx->pc = 0x25B8F4u;
    SET_GPR_U32(ctx, 31, 0x25B8FCu);
    ctx->pc = 0x25B8F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8FCu; }
    }
    if (ctx->pc != 0x25B8FCu) { return; }
    ctx->pc = 0x25B8FCu;
    // 0x25b8fc: 0x10000006
    ctx->pc = 0x25B8FCu;
    {
        const bool branch_taken_0x25b8fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B900u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x25b8fc) {
            ctx->pc = 0x25B918u;
            goto label_25b918;
        }
    }
    ctx->pc = 0x25B904u;
label_25b904:
    // 0x25b904: 0x3c04003b
    ctx->pc = 0x25b904u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25b908: 0x24848fc8
    ctx->pc = 0x25b908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938568));
    // 0x25b90c: 0xc0b492e
    ctx->pc = 0x25B90Cu;
    SET_GPR_U32(ctx, 31, 0x25B914u);
    ctx->pc = 0x25B910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B914u; }
    }
    if (ctx->pc != 0x25B914u) { return; }
    ctx->pc = 0x25B914u;
label_25b914:
    // 0x25b914: 0x26b50001
    ctx->pc = 0x25b914u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_25b918:
    // 0x25b918: 0x3c020034
    ctx->pc = 0x25b918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b91c: 0x8c42cd98
    ctx->pc = 0x25b91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x25b920: 0x2a2102a
    ctx->pc = 0x25b920u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x25b924: 0x1440ff9a
    ctx->pc = 0x25B924u;
    {
        const bool branch_taken_0x25b924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B928u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x25b924) {
            ctx->pc = 0x25B790u;
            goto label_25b790;
        }
    }
    ctx->pc = 0x25B92Cu;
label_25b92c:
    // 0x25b92c: 0xdfbf0130
    ctx->pc = 0x25b92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25b930: 0xdfbe0120
    ctx->pc = 0x25b930u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25b934: 0xdfb70110
    ctx->pc = 0x25b934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25b938: 0xdfb60100
    ctx->pc = 0x25b938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25b93c: 0xdfb500f0
    ctx->pc = 0x25b93cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25b940: 0xdfb400e0
    ctx->pc = 0x25b940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25b944: 0xdfb300d0
    ctx->pc = 0x25b944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25b948: 0xdfb200c0
    ctx->pc = 0x25b948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25b94c: 0xdfb100b0
    ctx->pc = 0x25b94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25b950: 0xdfb000a0
    ctx->pc = 0x25b950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b954: 0x3e00008
    ctx->pc = 0x25B954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B958u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B6E8u: goto label_25b6e8;
            case 0x25B718u: goto label_25b718;
            case 0x25B730u: goto label_25b730;
            case 0x25B760u: goto label_25b760;
            case 0x25B790u: goto label_25b790;
            case 0x25B7F8u: goto label_25b7f8;
            case 0x25B820u: goto label_25b820;
            case 0x25B830u: goto label_25b830;
            case 0x25B848u: goto label_25b848;
            case 0x25B864u: goto label_25b864;
            case 0x25B880u: goto label_25b880;
            case 0x25B904u: goto label_25b904;
            case 0x25B914u: goto label_25b914;
            case 0x25B918u: goto label_25b918;
            case 0x25B92Cu: goto label_25b92c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B95Cu;
}
