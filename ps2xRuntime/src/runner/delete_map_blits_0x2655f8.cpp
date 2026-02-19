#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: delete_map_blits
// Address: 0x2655f8 - 0x265708
void delete_map_blits_0x2655f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2655f8u;

    // 0x2655f8: 0x27bdffb0
    ctx->pc = 0x2655f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2655fc: 0xffbf0040
    ctx->pc = 0x2655fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x265600: 0xffb30030
    ctx->pc = 0x265600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x265604: 0xffb20020
    ctx->pc = 0x265604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x265608: 0xffb10010
    ctx->pc = 0x265608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26560c: 0xffb00000
    ctx->pc = 0x26560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265610: 0x882d
    ctx->pc = 0x265610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265614: 0x3c02003c
    ctx->pc = 0x265614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265618: 0x24533320
    ctx->pc = 0x265618u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 13088));
    // 0x26561c: 0x3c02003c
    ctx->pc = 0x26561cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265620: 0x24523330
    ctx->pc = 0x265620u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 13104));
    // 0x265624: 0x118080
    ctx->pc = 0x265624u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
label_265628:
    // 0x265628: 0x2131021
    ctx->pc = 0x265628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x26562c: 0x8c440000
    ctx->pc = 0x26562cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265630: 0x10800007
    ctx->pc = 0x265630u;
    {
        const bool branch_taken_0x265630 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x265634u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x265630) {
            ctx->pc = 0x265650u;
            goto label_265650;
        }
    }
    ctx->pc = 0x265638u;
    // 0x265638: 0xc0b0b38
    ctx->pc = 0x265638u;
    SET_GPR_U32(ctx, 31, 0x265640u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265640u; }
    }
    if (ctx->pc != 0x265640u) { return; }
    ctx->pc = 0x265640u;
    // 0x265640: 0x2121021
    ctx->pc = 0x265640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x265644: 0xc0b0b38
    ctx->pc = 0x265644u;
    SET_GPR_U32(ctx, 31, 0x26564Cu);
    ctx->pc = 0x265648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26564Cu; }
    }
    if (ctx->pc != 0x26564Cu) { return; }
    ctx->pc = 0x26564Cu;
    // 0x26564c: 0x111080
    ctx->pc = 0x26564cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_265650:
    // 0x265650: 0x531821
    ctx->pc = 0x265650u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x265654: 0xac600000
    ctx->pc = 0x265654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x265658: 0x521021
    ctx->pc = 0x265658u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x26565c: 0xac400000
    ctx->pc = 0x26565cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x265660: 0x26310001
    ctx->pc = 0x265660u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x265664: 0x2a220004
    ctx->pc = 0x265664u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x265668: 0x1440ffef
    ctx->pc = 0x265668u;
    {
        const bool branch_taken_0x265668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26566Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x265668) {
            ctx->pc = 0x265628u;
            goto label_265628;
        }
    }
    ctx->pc = 0x265670u;
    // 0x265670: 0x3c02003c
    ctx->pc = 0x265670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265674: 0x8c443344
    ctx->pc = 0x265674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 13124)));
    // 0x265678: 0x50800005
    ctx->pc = 0x265678u;
    {
        const bool branch_taken_0x265678 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x265678) {
            ctx->pc = 0x26567Cu;
            WRITE32(ADD32(GPR_U32(ctx, 2), 13124), GPR_U32(ctx, 0));
            ctx->pc = 0x265690u;
            goto label_265690;
        }
    }
    ctx->pc = 0x265680u;
    // 0x265680: 0xc0b0b38
    ctx->pc = 0x265680u;
    SET_GPR_U32(ctx, 31, 0x265688u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265688u; }
    }
    if (ctx->pc != 0x265688u) { return; }
    ctx->pc = 0x265688u;
    // 0x265688: 0x3c02003c
    ctx->pc = 0x265688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26568c: 0xac403344
    ctx->pc = 0x26568cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13124), GPR_U32(ctx, 0));
label_265690:
    // 0x265690: 0x882d
    ctx->pc = 0x265690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265694: 0x3c02003c
    ctx->pc = 0x265694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265698: 0x24503348
    ctx->pc = 0x265698u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 13128));
    // 0x26569c: 0x111080
    ctx->pc = 0x26569cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2656a0:
    // 0x2656a0: 0x501021
    ctx->pc = 0x2656a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2656a4: 0x8c440000
    ctx->pc = 0x2656a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2656a8: 0x10800004
    ctx->pc = 0x2656A8u;
    {
        const bool branch_taken_0x2656a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2656ACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2656a8) {
            ctx->pc = 0x2656BCu;
            goto label_2656bc;
        }
    }
    ctx->pc = 0x2656B0u;
    // 0x2656b0: 0xc0b0b38
    ctx->pc = 0x2656B0u;
    SET_GPR_U32(ctx, 31, 0x2656B8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2656B8u; }
    }
    if (ctx->pc != 0x2656B8u) { return; }
    ctx->pc = 0x2656B8u;
    // 0x2656b8: 0x111080
    ctx->pc = 0x2656b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2656bc:
    // 0x2656bc: 0x501021
    ctx->pc = 0x2656bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2656c0: 0xac400000
    ctx->pc = 0x2656c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2656c4: 0x26310001
    ctx->pc = 0x2656c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2656c8: 0x2a220008
    ctx->pc = 0x2656c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x2656cc: 0x1440fff4
    ctx->pc = 0x2656CCu;
    {
        const bool branch_taken_0x2656cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2656D0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2656cc) {
            ctx->pc = 0x2656A0u;
            goto label_2656a0;
        }
    }
    ctx->pc = 0x2656D4u;
    // 0x2656d4: 0x882d
    ctx->pc = 0x2656d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2656d8:
    // 0x2656d8: 0xc08dad4
    ctx->pc = 0x2656D8u;
    SET_GPR_U32(ctx, 31, 0x2656E0u);
    ctx->pc = 0x2656DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_player_blits_0x236b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2656E0u; }
    }
    if (ctx->pc != 0x2656E0u) { return; }
    ctx->pc = 0x2656E0u;
    // 0x2656e0: 0x26310001
    ctx->pc = 0x2656e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2656e4: 0x2a220004
    ctx->pc = 0x2656e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x2656e8: 0x1440fffb
    ctx->pc = 0x2656E8u;
    {
        const bool branch_taken_0x2656e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2656ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2656e8) {
            ctx->pc = 0x2656D8u;
            goto label_2656d8;
        }
    }
    ctx->pc = 0x2656F0u;
    // 0x2656f0: 0xdfb30030
    ctx->pc = 0x2656f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2656f4: 0xdfb20020
    ctx->pc = 0x2656f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2656f8: 0xdfb10010
    ctx->pc = 0x2656f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2656fc: 0xdfb00000
    ctx->pc = 0x2656fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265700: 0x3e00008
    ctx->pc = 0x265700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265628u: goto label_265628;
            case 0x265650u: goto label_265650;
            case 0x265690u: goto label_265690;
            case 0x2656A0u: goto label_2656a0;
            case 0x2656BCu: goto label_2656bc;
            case 0x2656D8u: goto label_2656d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x265708u;
}
