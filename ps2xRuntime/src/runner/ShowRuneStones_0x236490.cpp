#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShowRuneStones
// Address: 0x236490 - 0x236704
void ShowRuneStones_0x236490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236490u;

    // 0x236490: 0x27bdff60
    ctx->pc = 0x236490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x236494: 0xffbf0090
    ctx->pc = 0x236494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x236498: 0xffbe0080
    ctx->pc = 0x236498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x23649c: 0xffb70070
    ctx->pc = 0x23649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2364a0: 0xffb60060
    ctx->pc = 0x2364a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2364a4: 0xffb50050
    ctx->pc = 0x2364a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2364a8: 0xffb40040
    ctx->pc = 0x2364a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2364ac: 0xffb30030
    ctx->pc = 0x2364acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2364b0: 0xffb20020
    ctx->pc = 0x2364b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2364b4: 0xffb10010
    ctx->pc = 0x2364b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2364b8: 0xffb00000
    ctx->pc = 0x2364b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2364bc: 0x3c040033
    ctx->pc = 0x2364bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x2364c0: 0x8c83cb6c
    ctx->pc = 0x2364c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294953836)));
    // 0x2364c4: 0x1860006e
    ctx->pc = 0x2364C4u;
    {
        const bool branch_taken_0x2364c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2364C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2364c4) {
            ctx->pc = 0x236680u;
            goto label_236680;
        }
    }
    ctx->pc = 0x2364CCu;
    // 0x2364cc: 0x8c42d358
    ctx->pc = 0x2364ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x2364d0: 0x1440006c
    ctx->pc = 0x2364D0u;
    {
        const bool branch_taken_0x2364d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2364D4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2364d0) {
            ctx->pc = 0x236684u;
            goto label_236684;
        }
    }
    ctx->pc = 0x2364D8u;
    // 0x2364d8: 0x3c020031
    ctx->pc = 0x2364d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2364dc: 0x8c42ffbc
    ctx->pc = 0x2364dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2364e0: 0x621023
    ctx->pc = 0x2364e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2364e4: 0x4410003
    ctx->pc = 0x2364E4u;
    {
        const bool branch_taken_0x2364e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2364E8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294953836), GPR_U32(ctx, 2));
        if (branch_taken_0x2364e4) {
            ctx->pc = 0x2364F4u;
            goto label_2364f4;
        }
    }
    ctx->pc = 0x2364ECu;
    // 0x2364ec: 0xac80cb6c
    ctx->pc = 0x2364ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953836), GPR_U32(ctx, 0));
    // 0x2364f0: 0xa02d
    ctx->pc = 0x2364f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2364f4:
    // 0x2364f4: 0x3c020032
    ctx->pc = 0x2364f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2364f8: 0x245e1bc0
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2364fc: 0x24170005
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 5));
    // 0x236500: 0x24022b00
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x236504: 0x0
    ctx->pc = 0x236504u;
    // NOP
label_236508:
    // 0x236508: 0x2821818
    ctx->pc = 0x236508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23650c: 0x7e8821
    ctx->pc = 0x23650cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x236510: 0x9623093e
    ctx->pc = 0x236510u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2366)));
    // 0x236514: 0x30620002
    ctx->pc = 0x236514u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x236518: 0x14400053
    ctx->pc = 0x236518u;
    {
        const bool branch_taken_0x236518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23651Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 252)));
        if (branch_taken_0x236518) {
            ctx->pc = 0x236668u;
            goto label_236668;
        }
    }
    ctx->pc = 0x236520u;
    // 0x236520: 0x34620002
    ctx->pc = 0x236520u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2));
    // 0x236524: 0xa622093e
    ctx->pc = 0x236524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2366), (uint16_t)GPR_U32(ctx, 2));
    // 0x236528: 0x2662ffff
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x23652c: 0x2c420002
    ctx->pc = 0x23652cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x236530: 0x14400007
    ctx->pc = 0x236530u;
    {
        const bool branch_taken_0x236530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236534u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236530) {
            ctx->pc = 0x236550u;
            goto label_236550;
        }
    }
    ctx->pc = 0x236538u;
    // 0x236538: 0x24020004
    ctx->pc = 0x236538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x23653c: 0x12620005
    ctx->pc = 0x23653Cu;
    {
        const bool branch_taken_0x23653c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x236540u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23653c) {
            ctx->pc = 0x236554u;
            goto label_236554;
        }
    }
    ctx->pc = 0x236544u;
    // 0x236544: 0x1677001b
    ctx->pc = 0x236544u;
    {
        const bool branch_taken_0x236544 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 23));
        ctx->pc = 0x236548u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294953512));
        if (branch_taken_0x236544) {
            ctx->pc = 0x2365B4u;
            goto label_2365b4;
        }
    }
    ctx->pc = 0x23654Cu;
    // 0x23654c: 0x802d
    ctx->pc = 0x23654cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236550:
    // 0x236550: 0x3c020033
    ctx->pc = 0x236550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_236554:
    // 0x236554: 0x2456ca28
    ctx->pc = 0x236554u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294953512));
    // 0x236558: 0x149140
    ctx->pc = 0x236558u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 20), 5));
    // 0x23655c: 0x241500b4
    ctx->pc = 0x23655cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 180));
    // 0x236560: 0x101080
    ctx->pc = 0x236560u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x236564: 0x0
    ctx->pc = 0x236564u;
    // NOP
label_236568:
    // 0x236568: 0x521021
    ctx->pc = 0x236568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23656c: 0x561021
    ctx->pc = 0x23656cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x236570: 0x8c440000
    ctx->pc = 0x236570u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236574: 0x5080000a
    ctx->pc = 0x236574u;
    {
        const bool branch_taken_0x236574 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x236574) {
            ctx->pc = 0x236578u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2365A0u;
            goto label_2365a0;
        }
    }
    ctx->pc = 0x23657Cu;
    // 0x23657c: 0x8e22000c
    ctx->pc = 0x23657cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236580: 0x551818
    ctx->pc = 0x236580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236584: 0x711021
    ctx->pc = 0x236584u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x236588: 0x94450cf0
    ctx->pc = 0x236588u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3312)));
    // 0x23658c: 0x2052807
    ctx->pc = 0x23658cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x236590: 0x38a50001
    ctx->pc = 0x236590u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x236594: 0xc0b0ce8
    ctx->pc = 0x236594u;
    SET_GPR_U32(ctx, 31, 0x23659Cu);
    ctx->pc = 0x236598u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23659Cu; }
    }
    if (ctx->pc != 0x23659Cu) { return; }
    ctx->pc = 0x23659Cu;
    // 0x23659c: 0x26100001
    ctx->pc = 0x23659cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2365a0:
    // 0x2365a0: 0x2a020008
    ctx->pc = 0x2365a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x2365a4: 0x1440fff0
    ctx->pc = 0x2365A4u;
    {
        const bool branch_taken_0x2365a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2365A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2365a4) {
            ctx->pc = 0x236568u;
            goto label_236568;
        }
    }
    ctx->pc = 0x2365ACu;
    // 0x2365ac: 0x10000010
    ctx->pc = 0x2365ACu;
    {
        const bool branch_taken_0x2365ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2365B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2365ac) {
            ctx->pc = 0x2365F0u;
            goto label_2365f0;
        }
    }
    ctx->pc = 0x2365B4u;
label_2365b4:
    // 0x2365b4: 0x149140
    ctx->pc = 0x2365b4u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 20), 5));
    // 0x2365b8: 0x101080
    ctx->pc = 0x2365b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2365bc: 0x0
    ctx->pc = 0x2365bcu;
    // NOP
label_2365c0:
    // 0x2365c0: 0x521021
    ctx->pc = 0x2365c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2365c4: 0x551021
    ctx->pc = 0x2365c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2365c8: 0x8c440000
    ctx->pc = 0x2365c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2365cc: 0x50800004
    ctx->pc = 0x2365CCu;
    {
        const bool branch_taken_0x2365cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2365cc) {
            ctx->pc = 0x2365D0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2365E0u;
            goto label_2365e0;
        }
    }
    ctx->pc = 0x2365D4u;
    // 0x2365d4: 0xc0b0ce8
    ctx->pc = 0x2365D4u;
    SET_GPR_U32(ctx, 31, 0x2365DCu);
    ctx->pc = 0x2365D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2365DCu; }
    }
    if (ctx->pc != 0x2365DCu) { return; }
    ctx->pc = 0x2365DCu;
    // 0x2365dc: 0x26100001
    ctx->pc = 0x2365dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2365e0:
    // 0x2365e0: 0x2a020008
    ctx->pc = 0x2365e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x2365e4: 0x1440fff6
    ctx->pc = 0x2365E4u;
    {
        const bool branch_taken_0x2365e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2365E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2365e4) {
            ctx->pc = 0x2365C0u;
            goto label_2365c0;
        }
    }
    ctx->pc = 0x2365ECu;
    // 0x2365ec: 0x3c020031
    ctx->pc = 0x2365ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2365f0:
    // 0x2365f0: 0x8c420018
    ctx->pc = 0x2365f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2365f4: 0x30428000
    ctx->pc = 0x2365f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x2365f8: 0x5440001c
    ctx->pc = 0x2365F8u;
    {
        const bool branch_taken_0x2365f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2365f8) {
            ctx->pc = 0x2365FCu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x23666Cu;
            goto label_23666c;
        }
    }
    ctx->pc = 0x236600u;
    // 0x236600: 0x24020001
    ctx->pc = 0x236600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x236604: 0x52620004
    ctx->pc = 0x236604u;
    {
        const bool branch_taken_0x236604 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x236604) {
            ctx->pc = 0x236608u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x236618u;
            goto label_236618;
        }
    }
    ctx->pc = 0x23660Cu;
    // 0x23660c: 0x56770017
    ctx->pc = 0x23660Cu;
    {
        const bool branch_taken_0x23660c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 23));
        if (branch_taken_0x23660c) {
            ctx->pc = 0x236610u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x23666Cu;
            goto label_23666c;
        }
    }
    ctx->pc = 0x236614u;
    // 0x236614: 0x802d
    ctx->pc = 0x236614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236618:
    // 0x236618: 0x3c020033
    ctx->pc = 0x236618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23661c: 0x2453c968
    ctx->pc = 0x23661cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953320));
    // 0x236620: 0x24020030
    ctx->pc = 0x236620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x236624: 0x2829018
    ctx->pc = 0x236624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236628: 0x101080
    ctx->pc = 0x236628u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x23662c: 0x0
    ctx->pc = 0x23662cu;
    // NOP
label_236630:
    // 0x236630: 0x521021
    ctx->pc = 0x236630u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x236634: 0x531021
    ctx->pc = 0x236634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x236638: 0x8c440000
    ctx->pc = 0x236638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23663c: 0x50800007
    ctx->pc = 0x23663Cu;
    {
        const bool branch_taken_0x23663c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x23663c) {
            ctx->pc = 0x236640u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x23665Cu;
            goto label_23665c;
        }
    }
    ctx->pc = 0x236644u;
    // 0x236644: 0x96251a26
    ctx->pc = 0x236644u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6694)));
    // 0x236648: 0x2052807
    ctx->pc = 0x236648u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x23664c: 0x38a50001
    ctx->pc = 0x23664cu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x236650: 0xc0b0ce8
    ctx->pc = 0x236650u;
    SET_GPR_U32(ctx, 31, 0x236658u);
    ctx->pc = 0x236654u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236658u; }
    }
    if (ctx->pc != 0x236658u) { return; }
    ctx->pc = 0x236658u;
    // 0x236658: 0x26100001
    ctx->pc = 0x236658u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_23665c:
    // 0x23665c: 0x2a02000c
    ctx->pc = 0x23665cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
    // 0x236660: 0x1440fff3
    ctx->pc = 0x236660u;
    {
        const bool branch_taken_0x236660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236664u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x236660) {
            ctx->pc = 0x236630u;
            goto label_236630;
        }
    }
    ctx->pc = 0x236668u;
label_236668:
    // 0x236668: 0x26940001
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_23666c:
    // 0x23666c: 0x2a820004
    ctx->pc = 0x23666cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x236670: 0x1440ffa5
    ctx->pc = 0x236670u;
    {
        const bool branch_taken_0x236670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x236670) {
            ctx->pc = 0x236508u;
            goto label_236508;
        }
    }
    ctx->pc = 0x236678u;
    // 0x236678: 0x10000017
    ctx->pc = 0x236678u;
    {
        const bool branch_taken_0x236678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23667Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x236678) {
            ctx->pc = 0x2366D8u;
            goto label_2366d8;
        }
    }
    ctx->pc = 0x236680u;
label_236680:
    // 0x236680: 0xa02d
    ctx->pc = 0x236680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236684:
    // 0x236684: 0x3c020033
    ctx->pc = 0x236684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236688: 0x2452ca28
    ctx->pc = 0x236688u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294953512));
    // 0x23668c: 0x802d
    ctx->pc = 0x23668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236690:
    // 0x236690: 0x148940
    ctx->pc = 0x236690u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 5));
    // 0x236694: 0x101080
    ctx->pc = 0x236694u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_236698:
    // 0x236698: 0x511021
    ctx->pc = 0x236698u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23669c: 0x521021
    ctx->pc = 0x23669cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2366a0: 0x8c440000
    ctx->pc = 0x2366a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2366a4: 0x50800004
    ctx->pc = 0x2366A4u;
    {
        const bool branch_taken_0x2366a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2366a4) {
            ctx->pc = 0x2366A8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2366B8u;
            goto label_2366b8;
        }
    }
    ctx->pc = 0x2366ACu;
    // 0x2366ac: 0xc0b0ce8
    ctx->pc = 0x2366ACu;
    SET_GPR_U32(ctx, 31, 0x2366B4u);
    ctx->pc = 0x2366B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2366B4u; }
    }
    if (ctx->pc != 0x2366B4u) { return; }
    ctx->pc = 0x2366B4u;
    // 0x2366b4: 0x26100001
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2366b8:
    // 0x2366b8: 0x2a020008
    ctx->pc = 0x2366b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x2366bc: 0x1440fff6
    ctx->pc = 0x2366BCu;
    {
        const bool branch_taken_0x2366bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2366C0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2366bc) {
            ctx->pc = 0x236698u;
            goto label_236698;
        }
    }
    ctx->pc = 0x2366C4u;
    // 0x2366c4: 0x26940001
    ctx->pc = 0x2366c4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2366c8: 0x2a820004
    ctx->pc = 0x2366c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x2366cc: 0x1440fff0
    ctx->pc = 0x2366CCu;
    {
        const bool branch_taken_0x2366cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2366D0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2366cc) {
            ctx->pc = 0x236690u;
            goto label_236690;
        }
    }
    ctx->pc = 0x2366D4u;
    // 0x2366d4: 0xdfbf0090
    ctx->pc = 0x2366d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2366d8:
    // 0x2366d8: 0xdfbe0080
    ctx->pc = 0x2366d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2366dc: 0xdfb70070
    ctx->pc = 0x2366dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2366e0: 0xdfb60060
    ctx->pc = 0x2366e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2366e4: 0xdfb50050
    ctx->pc = 0x2366e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2366e8: 0xdfb40040
    ctx->pc = 0x2366e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2366ec: 0xdfb30030
    ctx->pc = 0x2366ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2366f0: 0xdfb20020
    ctx->pc = 0x2366f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2366f4: 0xdfb10010
    ctx->pc = 0x2366f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2366f8: 0xdfb00000
    ctx->pc = 0x2366f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2366fc: 0x3e00008
    ctx->pc = 0x2366FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2364F4u: goto label_2364f4;
            case 0x236508u: goto label_236508;
            case 0x236550u: goto label_236550;
            case 0x236554u: goto label_236554;
            case 0x236568u: goto label_236568;
            case 0x2365A0u: goto label_2365a0;
            case 0x2365B4u: goto label_2365b4;
            case 0x2365C0u: goto label_2365c0;
            case 0x2365E0u: goto label_2365e0;
            case 0x2365F0u: goto label_2365f0;
            case 0x236618u: goto label_236618;
            case 0x236630u: goto label_236630;
            case 0x23665Cu: goto label_23665c;
            case 0x236668u: goto label_236668;
            case 0x23666Cu: goto label_23666c;
            case 0x236680u: goto label_236680;
            case 0x236684u: goto label_236684;
            case 0x236690u: goto label_236690;
            case 0x236698u: goto label_236698;
            case 0x2366B8u: goto label_2366b8;
            case 0x2366D8u: goto label_2366d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236704u;
}
