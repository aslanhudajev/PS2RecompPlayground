#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_guncon2_port__Fv
// Address: 0x1ed480 - 0x1ed640
void set_guncon2_port__Fv_0x1ed480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_guncon2_port__Fv");


    ctx->pc = 0x1ed480u;

    // 0x1ed480: 0x27bdffa0
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ed484: 0x7fbf0030
    ctx->pc = 0x1ed484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ed488: 0x7fb20020
    ctx->pc = 0x1ed488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed48c: 0x7fb10010
    ctx->pc = 0x1ed48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed490: 0x7fb00000
    ctx->pc = 0x1ed490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed494: 0x83838e00
    ctx->pc = 0x1ed494u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938112)));
    // 0x1ed498: 0x10600063
    ctx->pc = 0x1ED498u;
    {
        const bool branch_taken_0x1ed498 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED49Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x1ed498) {
            ctx->pc = 0x1ED628u;
            goto label_1ed628;
        }
    }
    ctx->pc = 0x1ED4A0u;
    // 0x1ed4a0: 0x3c020051
    ctx->pc = 0x1ed4a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed4a4: 0xae400000
    ctx->pc = 0x1ed4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ed4a8: 0x24444840
    ctx->pc = 0x1ed4a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 18496));
    // 0x1ed4ac: 0xc07f278
    ctx->pc = 0x1ED4ACu;
    SET_GPR_U32(ctx, 31, 0x1ED4B4u);
    ctx->pc = 0x1ED4B0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x1FC9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunGetInfo__FPUc_0x1fc9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4B4u; }
        else if (ctx->pc != 0x1ED4B4u) { ctx->pc = 0x1ED4B4u; }
    }
    if (ctx->pc != 0x1ED4B4u) { return; }
    ctx->pc = 0x1ED4B4u;
    // 0x1ed4b4: 0x1440005c
    ctx->pc = 0x1ED4B4u;
    {
        const bool branch_taken_0x1ed4b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED4B8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed4b4) {
            ctx->pc = 0x1ED628u;
            goto label_1ed628;
        }
    }
    ctx->pc = 0x1ED4BCu;
    // 0x1ed4bc: 0xc07f2f4
    ctx->pc = 0x1ED4BCu;
    SET_GPR_U32(ctx, 31, 0x1ED4C4u);
    ctx->pc = 0x1FCBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunSync__Fi_0x1fcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4C4u; }
        else if (ctx->pc != 0x1ED4C4u) { ctx->pc = 0x1ED4C4u; }
    }
    if (ctx->pc != 0x1ED4C4u) { return; }
    ctx->pc = 0x1ED4C4u;
    // 0x1ed4c4: 0x3c020051
    ctx->pc = 0x1ed4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed4c8: 0x70008628
    ctx->pc = 0x1ed4c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ed4cc: 0x24514840
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 18496));
label_1ed4d0:
    // 0x1ed4d0: 0x92220002
    ctx->pc = 0x1ed4d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1ed4d4: 0x50400033
    ctx->pc = 0x1ED4D4u;
    {
        const bool branch_taken_0x1ed4d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed4d4) {
            ctx->pc = 0x1ED4D8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1ED5A4u;
            goto label_1ed5a4;
        }
    }
    ctx->pc = 0x1ED4DCu;
    // 0x1ed4dc: 0x3c020051
    ctx->pc = 0x1ed4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed4e0: 0x72002628
    ctx->pc = 0x1ed4e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ed4e4: 0xc07f2b8
    ctx->pc = 0x1ED4E4u;
    SET_GPR_U32(ctx, 31, 0x1ED4ECu);
    ctx->pc = 0x1ED4E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18624));
    ctx->pc = 0x1FCAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunGetLocation__FiPUc_0x1fcae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4ECu; }
        else if (ctx->pc != 0x1ED4ECu) { ctx->pc = 0x1ED4ECu; }
    }
    if (ctx->pc != 0x1ED4ECu) { return; }
    ctx->pc = 0x1ED4ECu;
    // 0x1ed4ec: 0x1440002c
    ctx->pc = 0x1ED4ECu;
    {
        const bool branch_taken_0x1ed4ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED4F0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed4ec) {
            ctx->pc = 0x1ED5A0u;
            goto label_1ed5a0;
        }
    }
    ctx->pc = 0x1ED4F4u;
    // 0x1ed4f4: 0xc07f2f4
    ctx->pc = 0x1ED4F4u;
    SET_GPR_U32(ctx, 31, 0x1ED4FCu);
    ctx->pc = 0x1FCBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunSync__Fi_0x1fcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4FCu; }
        else if (ctx->pc != 0x1ED4FCu) { ctx->pc = 0x1ED4FCu; }
    }
    if (ctx->pc != 0x1ED4FCu) { return; }
    ctx->pc = 0x1ED4FCu;
    // 0x1ed4fc: 0x3c010051
    ctx->pc = 0x1ed4fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed500: 0x902248c0
    ctx->pc = 0x1ed500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18624)));
    // 0x1ed504: 0x30420001
    ctx->pc = 0x1ed504u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ed508: 0x21100
    ctx->pc = 0x1ed508u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ed50c: 0x5d1021
    ctx->pc = 0x1ed50cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ed510: 0x24470040
    ctx->pc = 0x1ed510u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ed514: 0x8ce20000
    ctx->pc = 0x1ed514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ed518: 0x1440000b
    ctx->pc = 0x1ED518u;
    {
        const bool branch_taken_0x1ed518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ed518) {
            ctx->pc = 0x1ED548u;
            goto label_1ed548;
        }
    }
    ctx->pc = 0x1ED520u;
    // 0x1ed520: 0x24020001
    ctx->pc = 0x1ed520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed524: 0xace20000
    ctx->pc = 0x1ed524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1ed528: 0x3c020051
    ctx->pc = 0x1ed528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed52c: 0xacf00004
    ctx->pc = 0x1ed52cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1ed530: 0x24e40008
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ed534: 0x244548c0
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18624));
    // 0x1ed538: 0xc050c90
    ctx->pc = 0x1ED538u;
    SET_GPR_U32(ctx, 31, 0x1ED540u);
    ctx->pc = 0x1ED53Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED540u; }
        else if (ctx->pc != 0x1ED540u) { ctx->pc = 0x1ED540u; }
    }
    if (ctx->pc != 0x1ED540u) { return; }
    ctx->pc = 0x1ED540u;
    // 0x1ed540: 0x10000017
    ctx->pc = 0x1ED540u;
    {
        const bool branch_taken_0x1ed540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed540) {
            ctx->pc = 0x1ED5A0u;
            goto label_1ed5a0;
        }
    }
    ctx->pc = 0x1ED548u;
label_1ed548:
    // 0x1ed548: 0x3c020051
    ctx->pc = 0x1ed548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed54c: 0x24040001
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed550: 0x24e50001
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ed554: 0x244648c1
    ctx->pc = 0x1ed554u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 18625));
label_1ed558:
    // 0x1ed558: 0x90a30008
    ctx->pc = 0x1ed558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ed55c: 0x90c20000
    ctx->pc = 0x1ed55cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ed560: 0x43082a
    ctx->pc = 0x1ed560u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1ed564: 0x54200007
    ctx->pc = 0x1ED564u;
    {
        const bool branch_taken_0x1ed564 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ed564) {
            ctx->pc = 0x1ED568u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
            ctx->pc = 0x1ED584u;
            goto label_1ed584;
        }
    }
    ctx->pc = 0x1ED56Cu;
    // 0x1ed56c: 0x24840001
    ctx->pc = 0x1ed56cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ed570: 0x28820008
    ctx->pc = 0x1ed570u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x1ed574: 0x24a50001
    ctx->pc = 0x1ed574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ed578: 0x1440fff7
    ctx->pc = 0x1ED578u;
    {
        const bool branch_taken_0x1ed578 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED57Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1ed578) {
            ctx->pc = 0x1ED558u;
            goto label_1ed558;
        }
    }
    ctx->pc = 0x1ED580u;
    // 0x1ed580: 0x24060008
    ctx->pc = 0x1ed580u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
label_1ed584:
    // 0x1ed584: 0x14860006
    ctx->pc = 0x1ED584u;
    {
        const bool branch_taken_0x1ed584 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x1ED588u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1ed584) {
            ctx->pc = 0x1ED5A0u;
            goto label_1ed5a0;
        }
    }
    ctx->pc = 0x1ED58Cu;
    // 0x1ed58c: 0xacf00004
    ctx->pc = 0x1ed58cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1ed590: 0x24e40008
    ctx->pc = 0x1ed590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ed594: 0xc050c90
    ctx->pc = 0x1ED594u;
    SET_GPR_U32(ctx, 31, 0x1ED59Cu);
    ctx->pc = 0x1ED598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18624));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED59Cu; }
        else if (ctx->pc != 0x1ED59Cu) { ctx->pc = 0x1ED59Cu; }
    }
    if (ctx->pc != 0x1ED59Cu) { return; }
    ctx->pc = 0x1ED59Cu;
    // 0x1ed59c: 0x0
    ctx->pc = 0x1ed59cu;
    // NOP
label_1ed5a0:
    // 0x1ed5a0: 0x26100001
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ed5a4:
    // 0x1ed5a4: 0x2a020002
    ctx->pc = 0x1ed5a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ed5a8: 0x1440ffc9
    ctx->pc = 0x1ED5A8u;
    {
        const bool branch_taken_0x1ed5a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED5ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1ed5a8) {
            ctx->pc = 0x1ED4D0u;
            goto label_1ed4d0;
        }
    }
    ctx->pc = 0x1ED5B0u;
    // 0x1ed5b0: 0x70008e28
    ctx->pc = 0x1ed5b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ed5b4:
    // 0x1ed5b4: 0xc07b518
    ctx->pc = 0x1ED5B4u;
    SET_GPR_U32(ctx, 31, 0x1ED5BCu);
    ctx->pc = 0x1ED5B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5BCu; }
        else if (ctx->pc != 0x1ED5BCu) { ctx->pc = 0x1ED5BCu; }
    }
    if (ctx->pc != 0x1ED5BCu) { return; }
    ctx->pc = 0x1ED5BCu;
    // 0x1ed5bc: 0x8e430000
    ctx->pc = 0x1ed5bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ed5c0: 0x10600012
    ctx->pc = 0x1ED5C0u;
    {
        const bool branch_taken_0x1ed5c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED5C4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed5c0) {
            ctx->pc = 0x1ED60Cu;
            goto label_1ed60c;
        }
    }
    ctx->pc = 0x1ED5C8u;
    // 0x1ed5c8: 0x8e440004
    ctx->pc = 0x1ed5c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ed5cc: 0x24030004
    ctx->pc = 0x1ed5ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed5d0: 0xae040034
    ctx->pc = 0x1ed5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x1ed5d4: 0x8e040038
    ctx->pc = 0x1ed5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1ed5d8: 0x14830005
    ctx->pc = 0x1ED5D8u;
    {
        const bool branch_taken_0x1ed5d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ed5d8) {
            ctx->pc = 0x1ED5F0u;
            goto label_1ed5f0;
        }
    }
    ctx->pc = 0x1ED5E0u;
    // 0x1ed5e0: 0x8e040034
    ctx->pc = 0x1ed5e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ed5e4: 0xc07b660
    ctx->pc = 0x1ED5E4u;
    SET_GPR_U32(ctx, 31, 0x1ED5ECu);
    ctx->pc = 0x1ED5E8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5ECu; }
        else if (ctx->pc != 0x1ED5ECu) { ctx->pc = 0x1ED5ECu; }
    }
    if (ctx->pc != 0x1ED5ECu) { return; }
    ctx->pc = 0x1ED5ECu;
    // 0x1ed5ec: 0x0
    ctx->pc = 0x1ed5ecu;
    // NOP
label_1ed5f0:
    // 0x1ed5f0: 0x8e030038
    ctx->pc = 0x1ed5f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1ed5f4: 0x28610008
    ctx->pc = 0x1ed5f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1ed5f8: 0x50200008
    ctx->pc = 0x1ED5F8u;
    {
        const bool branch_taken_0x1ed5f8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed5f8) {
            ctx->pc = 0x1ED5FCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1ED61Cu;
            goto label_1ed61c;
        }
    }
    ctx->pc = 0x1ED600u;
    // 0x1ed600: 0x24630001
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed604: 0x10000004
    ctx->pc = 0x1ED604u;
    {
        const bool branch_taken_0x1ed604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED608u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x1ed604) {
            ctx->pc = 0x1ED618u;
            goto label_1ed618;
        }
    }
    ctx->pc = 0x1ED60Cu;
label_1ed60c:
    // 0x1ed60c: 0xae000038
    ctx->pc = 0x1ed60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1ed610: 0x2403ffff
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed614: 0xae030034
    ctx->pc = 0x1ed614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_1ed618:
    // 0x1ed618: 0x26310001
    ctx->pc = 0x1ed618u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1ed61c:
    // 0x1ed61c: 0x2a230002
    ctx->pc = 0x1ed61cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 2));
    // 0x1ed620: 0x1460ffe4
    ctx->pc = 0x1ED620u;
    {
        const bool branch_taken_0x1ed620 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED624u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x1ed620) {
            ctx->pc = 0x1ED5B4u;
            goto label_1ed5b4;
        }
    }
    ctx->pc = 0x1ED628u;
label_1ed628:
    // 0x1ed628: 0x7bbf0030
    ctx->pc = 0x1ed628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed62c: 0x7bb20020
    ctx->pc = 0x1ed62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed630: 0x7bb10010
    ctx->pc = 0x1ed630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed634: 0x7bb00000
    ctx->pc = 0x1ed634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed638: 0x3e00008
    ctx->pc = 0x1ED638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED63Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED4D0u: goto label_1ed4d0;
            case 0x1ED548u: goto label_1ed548;
            case 0x1ED558u: goto label_1ed558;
            case 0x1ED584u: goto label_1ed584;
            case 0x1ED5A0u: goto label_1ed5a0;
            case 0x1ED5A4u: goto label_1ed5a4;
            case 0x1ED5B4u: goto label_1ed5b4;
            case 0x1ED5F0u: goto label_1ed5f0;
            case 0x1ED60Cu: goto label_1ed60c;
            case 0x1ED618u: goto label_1ed618;
            case 0x1ED61Cu: goto label_1ed61c;
            case 0x1ED628u: goto label_1ed628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED640u;
}
