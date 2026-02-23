#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _multadd
// Address: 0x1435a0 - 0x1436b4
void _multadd_0x1435a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_multadd");


    ctx->pc = 0x1435a0u;

    // 0x1435a0: 0x27bdffa0
    ctx->pc = 0x1435a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1435a4: 0xc0402d
    ctx->pc = 0x1435a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435a8: 0xffb40040
    ctx->pc = 0x1435a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1435ac: 0x482d
    ctx->pc = 0x1435acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435b0: 0xffb30030
    ctx->pc = 0x1435b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1435b4: 0x80a02d
    ctx->pc = 0x1435b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435b8: 0xffb10010
    ctx->pc = 0x1435b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1435bc: 0xe0982d
    ctx->pc = 0x1435bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435c0: 0xffbf0050
    ctx->pc = 0x1435c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1435c4: 0xa0882d
    ctx->pc = 0x1435c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435c8: 0xffb00000
    ctx->pc = 0x1435c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1435cc: 0x262a0014
    ctx->pc = 0x1435ccu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 20));
    // 0x1435d0: 0xffb20020
    ctx->pc = 0x1435d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1435d4: 0x140382d
    ctx->pc = 0x1435d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435d8: 0x8e320010
    ctx->pc = 0x1435d8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1435dc: 0x0
    ctx->pc = 0x1435dcu;
    // NOP
label_1435e0:
    // 0x1435e0: 0x8ce30000
    ctx->pc = 0x1435e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1435e4: 0x25290001
    ctx->pc = 0x1435e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1435e8: 0x132302a
    ctx->pc = 0x1435e8u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 18)));
    // 0x1435ec: 0x3064ffff
    ctx->pc = 0x1435ecu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1435f0: 0x881018
    ctx->pc = 0x1435f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1435f4: 0x31c02
    ctx->pc = 0x1435f4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x1435f8: 0x681818
    ctx->pc = 0x1435f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1435fc: 0x532021
    ctx->pc = 0x1435fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x143600: 0x42c02
    ctx->pc = 0x143600u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 16));
    // 0x143604: 0x651821
    ctx->pc = 0x143604u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x143608: 0x3084ffff
    ctx->pc = 0x143608u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x14360c: 0x31400
    ctx->pc = 0x14360cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x143610: 0x39c02
    ctx->pc = 0x143610u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), 16));
    // 0x143614: 0x441021
    ctx->pc = 0x143614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x143618: 0xace20000
    ctx->pc = 0x143618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x14361c: 0x14c0fff0
    ctx->pc = 0x14361Cu;
    {
        const bool branch_taken_0x14361c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x143620u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x14361c) {
            ctx->pc = 0x1435E0u;
            goto label_1435e0;
        }
    }
    ctx->pc = 0x143624u;
    // 0x143624: 0x1260001b
    ctx->pc = 0x143624u;
    {
        const bool branch_taken_0x143624 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x143628u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143624) {
            ctx->pc = 0x143694u;
            goto label_143694;
        }
    }
    ctx->pc = 0x14362Cu;
    // 0x14362c: 0x8e220008
    ctx->pc = 0x14362cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143630: 0x242102a
    ctx->pc = 0x143630u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x143634: 0x14400012
    ctx->pc = 0x143634u;
    {
        const bool branch_taken_0x143634 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x143638u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x143634) {
            ctx->pc = 0x143680u;
            goto label_143680;
        }
    }
    ctx->pc = 0x14363Cu;
    // 0x14363c: 0x8e250004
    ctx->pc = 0x14363cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x143640: 0x280202d
    ctx->pc = 0x143640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143644: 0xc050d32
    ctx->pc = 0x143644u;
    SET_GPR_U32(ctx, 31, 0x14364Cu);
    ctx->pc = 0x143648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14364Cu; }
        else if (ctx->pc != 0x14364Cu) { ctx->pc = 0x14364Cu; }
    }
    if (ctx->pc != 0x14364Cu) { return; }
    ctx->pc = 0x14364Cu;
    // 0x14364c: 0x8e260010
    ctx->pc = 0x14364cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x143650: 0x40802d
    ctx->pc = 0x143650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143654: 0x2625000c
    ctx->pc = 0x143654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    // 0x143658: 0x2604000c
    ctx->pc = 0x143658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x14365c: 0x63080
    ctx->pc = 0x14365cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x143660: 0xc050c90
    ctx->pc = 0x143660u;
    SET_GPR_U32(ctx, 31, 0x143668u);
    ctx->pc = 0x143664u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143668u; }
        else if (ctx->pc != 0x143668u) { ctx->pc = 0x143668u; }
    }
    if (ctx->pc != 0x143668u) { return; }
    ctx->pc = 0x143668u;
    // 0x143668: 0x220282d
    ctx->pc = 0x143668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14366c: 0xc050d5c
    ctx->pc = 0x14366Cu;
    SET_GPR_U32(ctx, 31, 0x143674u);
    ctx->pc = 0x143670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143674u; }
        else if (ctx->pc != 0x143674u) { ctx->pc = 0x143674u; }
    }
    if (ctx->pc != 0x143674u) { return; }
    ctx->pc = 0x143674u;
    // 0x143674: 0x200882d
    ctx->pc = 0x143674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143678: 0x262a0014
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 20));
    // 0x14367c: 0x121080
    ctx->pc = 0x14367cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_143680:
    // 0x143680: 0x1421021
    ctx->pc = 0x143680u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x143684: 0x26520001
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x143688: 0xac530000
    ctx->pc = 0x143688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x14368c: 0xae320010
    ctx->pc = 0x14368cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x143690: 0x220102d
    ctx->pc = 0x143690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143694:
    // 0x143694: 0xdfbf0050
    ctx->pc = 0x143694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143698: 0xdfb40040
    ctx->pc = 0x143698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14369c: 0xdfb30030
    ctx->pc = 0x14369cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1436a0: 0xdfb20020
    ctx->pc = 0x1436a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1436a4: 0xdfb10010
    ctx->pc = 0x1436a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1436a8: 0xdfb00000
    ctx->pc = 0x1436a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1436ac: 0x3e00008
    ctx->pc = 0x1436ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1436B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1435E0u: goto label_1435e0;
            case 0x143680u: goto label_143680;
            case 0x143694u: goto label_143694;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1436B4u;
}
