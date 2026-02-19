#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: next_world
// Address: 0x225198 - 0x2252e0
void next_world_0x225198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x225198u;

    // 0x225198: 0x27bdffd0
    ctx->pc = 0x225198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22519c: 0xffbf0020
    ctx->pc = 0x22519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2251a0: 0xffb10010
    ctx->pc = 0x2251a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2251a4: 0xffb00000
    ctx->pc = 0x2251a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2251a8: 0x3c020032
    ctx->pc = 0x2251a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2251ac: 0x8c4307bc
    ctx->pc = 0x2251acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x2251b0: 0x2464fff3
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x2251b4: 0x3402fff2
    ctx->pc = 0x2251b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65522));
    // 0x2251b8: 0x44102b
    ctx->pc = 0x2251b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2251bc: 0x38440001
    ctx->pc = 0x2251bcu;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2251c0: 0x28630002
    ctx->pc = 0x2251c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2251c4: 0x10800005
    ctx->pc = 0x2251C4u;
    {
        const bool branch_taken_0x2251c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2251C8u;
        SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2251c4) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x2251CCu;
    // 0x2251cc: 0x3c020035
    ctx->pc = 0x2251ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2251d0: 0x8c50f834
    ctx->pc = 0x2251d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294965300)));
    // 0x2251d4: 0x1000002d
    ctx->pc = 0x2251D4u;
    {
        const bool branch_taken_0x2251d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2251D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2251d4) {
            ctx->pc = 0x22528Cu;
            goto label_22528c;
        }
    }
    ctx->pc = 0x2251DCu;
label_2251dc:
    // 0x2251dc: 0x3c020032
    ctx->pc = 0x2251dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2251e0: 0x8c4207b8
    ctx->pc = 0x2251e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x2251e4: 0x441000e
    ctx->pc = 0x2251E4u;
    {
        const bool branch_taken_0x2251e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2251E8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2251e4) {
            ctx->pc = 0x225220u;
            goto label_225220;
        }
    }
    ctx->pc = 0x2251ECu;
    // 0x2251ec: 0x3c020031
    ctx->pc = 0x2251ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2251f0: 0x8c50000c
    ctx->pc = 0x2251f0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2251f4: 0x101203
    ctx->pc = 0x2251f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2251f8: 0x2842000e
    ctx->pc = 0x2251f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 14));
    // 0x2251fc: 0x14400003
    ctx->pc = 0x2251FCu;
    {
        const bool branch_taken_0x2251fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225200u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2251fc) {
            ctx->pc = 0x22520Cu;
            goto label_22520c;
        }
    }
    ctx->pc = 0x225204u;
    // 0x225204: 0x3c020034
    ctx->pc = 0x225204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x225208: 0x8c50e7d0
    ctx->pc = 0x225208u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294961104)));
label_22520c:
    // 0x22520c: 0x3c020001
    ctx->pc = 0x22520cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x225210: 0x2021021
    ctx->pc = 0x225210u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x225214: 0xac6207bc
    ctx->pc = 0x225214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
    // 0x225218: 0x1000001c
    ctx->pc = 0x225218u;
    {
        const bool branch_taken_0x225218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22521Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x225218) {
            ctx->pc = 0x22528Cu;
            goto label_22528c;
        }
    }
    ctx->pc = 0x225220u;
label_225220:
    // 0x225220: 0x202d
    ctx->pc = 0x225220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225224: 0x3c020032
    ctx->pc = 0x225224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x225228: 0x24471bc0
    ctx->pc = 0x225228u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x22522c: 0x24062b00
    ctx->pc = 0x22522cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x225230: 0x24050002
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x225234: 0x861018
    ctx->pc = 0x225234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_225238:
    // 0x225238: 0x471821
    ctx->pc = 0x225238u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22523c: 0x8c6200fc
    ctx->pc = 0x22523cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x225240: 0x10400006
    ctx->pc = 0x225240u;
    {
        const bool branch_taken_0x225240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225244u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x225240) {
            ctx->pc = 0x22525Cu;
            goto label_22525c;
        }
    }
    ctx->pc = 0x225248u;
    // 0x225248: 0x10450004
    ctx->pc = 0x225248u;
    {
        const bool branch_taken_0x225248 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x225248) {
            ctx->pc = 0x22525Cu;
            goto label_22525c;
        }
    }
    ctx->pc = 0x225250u;
    // 0x225250: 0x8c630808
    ctx->pc = 0x225250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x225254: 0x203102a
    ctx->pc = 0x225254u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x225258: 0x62800b
    ctx->pc = 0x225258u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_22525c:
    // 0x22525c: 0x28820004
    ctx->pc = 0x22525cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x225260: 0x1440fff5
    ctx->pc = 0x225260u;
    {
        const bool branch_taken_0x225260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225264u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x225260) {
            ctx->pc = 0x225238u;
            goto label_225238;
        }
    }
    ctx->pc = 0x225268u;
    // 0x225268: 0x6010004
    ctx->pc = 0x225268u;
    {
        const bool branch_taken_0x225268 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22526Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
        if (branch_taken_0x225268) {
            ctx->pc = 0x22527Cu;
            goto label_22527c;
        }
    }
    ctx->pc = 0x225270u;
    // 0x225270: 0x3c020034
    ctx->pc = 0x225270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x225274: 0x8c50e7d4
    ctx->pc = 0x225274u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x225278: 0x101203
    ctx->pc = 0x225278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
label_22527c:
    // 0x22527c: 0x2842000e
    ctx->pc = 0x22527cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 14));
    // 0x225280: 0x14400002
    ctx->pc = 0x225280u;
    {
        const bool branch_taken_0x225280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225284u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225280) {
            ctx->pc = 0x22528Cu;
            goto label_22528c;
        }
    }
    ctx->pc = 0x225288u;
    // 0x225288: 0x8c50e7d0
    ctx->pc = 0x225288u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294961104)));
label_22528c:
    // 0x22528c: 0xc0986b4
    ctx->pc = 0x22528Cu;
    SET_GPR_U32(ctx, 31, 0x225294u);
    ctx->pc = 0x225290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225294u; }
    }
    if (ctx->pc != 0x225294u) { return; }
    ctx->pc = 0x225294u;
    // 0x225294: 0x1620000d
    ctx->pc = 0x225294u;
    {
        const bool branch_taken_0x225294 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x225298u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x225294) {
            ctx->pc = 0x2252CCu;
            goto label_2252cc;
        }
    }
    ctx->pc = 0x22529Cu;
    // 0x22529c: 0x3c020034
    ctx->pc = 0x22529cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2252a0: 0x8c42e7c8
    ctx->pc = 0x2252a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2252a4: 0x94420004
    ctx->pc = 0x2252a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2252a8: 0x30420001
    ctx->pc = 0x2252a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2252ac: 0x14400007
    ctx->pc = 0x2252ACu;
    {
        const bool branch_taken_0x2252ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2252B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2252ac) {
            ctx->pc = 0x2252CCu;
            goto label_2252cc;
        }
    }
    ctx->pc = 0x2252B4u;
    // 0x2252b4: 0xc09882c
    ctx->pc = 0x2252B4u;
    SET_GPR_U32(ctx, 31, 0x2252BCu);
    ctx->pc = 0x2252B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2620B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextWorldLevel_0x2620b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252BCu; }
    }
    if (ctx->pc != 0x2252BCu) { return; }
    ctx->pc = 0x2252BCu;
    // 0x2252bc: 0x40802d
    ctx->pc = 0x2252bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252c0: 0xc0986b4
    ctx->pc = 0x2252C0u;
    SET_GPR_U32(ctx, 31, 0x2252C8u);
    ctx->pc = 0x2252C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252C8u; }
    }
    if (ctx->pc != 0x2252C8u) { return; }
    ctx->pc = 0x2252C8u;
    // 0x2252c8: 0x200102d
    ctx->pc = 0x2252c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2252cc:
    // 0x2252cc: 0xdfbf0020
    ctx->pc = 0x2252ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2252d0: 0xdfb10010
    ctx->pc = 0x2252d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2252d4: 0xdfb00000
    ctx->pc = 0x2252d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2252d8: 0x3e00008
    ctx->pc = 0x2252D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2252DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2251DCu: goto label_2251dc;
            case 0x22520Cu: goto label_22520c;
            case 0x225220u: goto label_225220;
            case 0x225238u: goto label_225238;
            case 0x22525Cu: goto label_22525c;
            case 0x22527Cu: goto label_22527c;
            case 0x22528Cu: goto label_22528c;
            case 0x2252CCu: goto label_2252cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2252E0u;
}
