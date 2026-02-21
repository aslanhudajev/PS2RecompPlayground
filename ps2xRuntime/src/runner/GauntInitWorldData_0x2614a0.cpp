#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GauntInitWorldData
// Address: 0x2614a0 - 0x261670
void GauntInitWorldData_0x2614a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2614a0u;

    // 0x2614a0: 0x27bdff60
    ctx->pc = 0x2614a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2614a4: 0xffbf0090
    ctx->pc = 0x2614a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2614a8: 0xffbe0080
    ctx->pc = 0x2614a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2614ac: 0xffb70070
    ctx->pc = 0x2614acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2614b0: 0xffb60060
    ctx->pc = 0x2614b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2614b4: 0xffb50050
    ctx->pc = 0x2614b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2614b8: 0xffb40040
    ctx->pc = 0x2614b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2614bc: 0xffb30030
    ctx->pc = 0x2614bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2614c0: 0xffb20020
    ctx->pc = 0x2614c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2614c4: 0xffb10010
    ctx->pc = 0x2614c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2614c8: 0xffb00000
    ctx->pc = 0x2614c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2614cc: 0x902d
    ctx->pc = 0x2614ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2614d0: 0x3c17003c
    ctx->pc = 0x2614d0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
    // 0x2614d4: 0x2e0102d
    ctx->pc = 0x2614d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2614d8: 0x245431c0
    ctx->pc = 0x2614d8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 12736));
    // 0x2614dc: 0x3c020034
    ctx->pc = 0x2614dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2614e0: 0x2455e524
    ctx->pc = 0x2614e0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294960420));
    // 0x2614e4: 0x3c02003b
    ctx->pc = 0x2614e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2614e8: 0x24569788
    ctx->pc = 0x2614e8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294940552));
    // 0x2614ec: 0x26be000c
    ctx->pc = 0x2614ecu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 21), 12));
    // 0x2614f0: 0x3c020034
    ctx->pc = 0x2614f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2614f4: 0x2453e788
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294961032));
    // 0x2614f8: 0x3c05003b
    ctx->pc = 0x2614f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2614fc: 0x0
    ctx->pc = 0x2614fcu;
    // NOP
label_261500:
    // 0x261500: 0x2402002c
    ctx->pc = 0x261500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x261504: 0x2428018
    ctx->pc = 0x261504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261508: 0x280202d
    ctx->pc = 0x261508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26150c: 0x24a59780
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940544));
    // 0x261510: 0xc0b6252
    ctx->pc = 0x261510u;
    SET_GPR_U32(ctx, 31, 0x261518u);
    ctx->pc = 0x261514u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261518u; }
    }
    if (ctx->pc != 0x261518u) { return; }
    ctx->pc = 0x261518u;
    // 0x261518: 0x2c0202d
    ctx->pc = 0x261518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26151c: 0xc0b4eca
    ctx->pc = 0x26151Cu;
    SET_GPR_U32(ctx, 31, 0x261524u);
    ctx->pc = 0x261520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261524u; }
    }
    if (ctx->pc != 0x261524u) { return; }
    ctx->pc = 0x261524u;
    // 0x261524: 0x10400021
    ctx->pc = 0x261524u;
    {
        const bool branch_taken_0x261524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261528u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x261524) {
            ctx->pc = 0x2615ACu;
            goto label_2615ac;
        }
    }
    ctx->pc = 0x26152Cu;
    // 0x26152c: 0xc0b4ed2
    ctx->pc = 0x26152Cu;
    SET_GPR_U32(ctx, 31, 0x261534u);
    ctx->pc = 0x261530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261534u; }
    }
    if (ctx->pc != 0x261534u) { return; }
    ctx->pc = 0x261534u;
    // 0x261534: 0x40882d
    ctx->pc = 0x261534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261538: 0x3d01021
    ctx->pc = 0x261538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x26153c: 0x24030001
    ctx->pc = 0x26153cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x261540: 0xac430000
    ctx->pc = 0x261540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x261544: 0x3c030034
    ctx->pc = 0x261544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261548: 0x8c62e7d0
    ctx->pc = 0x261548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x26154c: 0x4410005
    ctx->pc = 0x26154Cu;
    {
        const bool branch_taken_0x26154c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x261550u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 4294967292));
        if (branch_taken_0x26154c) {
            ctx->pc = 0x261564u;
            goto label_261564;
        }
    }
    ctx->pc = 0x261554u;
    // 0x261554: 0x2061021
    ctx->pc = 0x261554u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x261558: 0x8c420000
    ctx->pc = 0x261558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26155c: 0x21200
    ctx->pc = 0x26155cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x261560: 0xac62e7d0
    ctx->pc = 0x261560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 2));
label_261564:
    // 0x261564: 0x121080
    ctx->pc = 0x261564u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x261568: 0x538021
    ctx->pc = 0x261568u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26156c: 0x8e020000
    ctx->pc = 0x26156cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x261570: 0x14400005
    ctx->pc = 0x261570u;
    {
        const bool branch_taken_0x261570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261574u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x261570) {
            ctx->pc = 0x261588u;
            goto label_261588;
        }
    }
    ctx->pc = 0x261578u;
    // 0x261578: 0xc0b4f52
    ctx->pc = 0x261578u;
    SET_GPR_U32(ctx, 31, 0x261580u);
    ctx->pc = 0x26157Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261580u; }
    }
    if (ctx->pc != 0x261580u) { return; }
    ctx->pc = 0x261580u;
    // 0x261580: 0xae020000
    ctx->pc = 0x261580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x261584: 0x121080
    ctx->pc = 0x261584u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_261588:
    // 0x261588: 0x531021
    ctx->pc = 0x261588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26158c: 0x3c03003b
    ctx->pc = 0x26158cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)59 << 16));
    // 0x261590: 0x24649788
    ctx->pc = 0x261590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294940552));
    // 0x261594: 0x26e531c0
    ctx->pc = 0x261594u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 12736));
    // 0x261598: 0x220302d
    ctx->pc = 0x261598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26159c: 0xc0b4e7c
    ctx->pc = 0x26159Cu;
    SET_GPR_U32(ctx, 31, 0x2615A4u);
    ctx->pc = 0x2615A0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615A4u; }
    }
    if (ctx->pc != 0x2615A4u) { return; }
    ctx->pc = 0x2615A4u;
    // 0x2615a4: 0x10000009
    ctx->pc = 0x2615A4u;
    {
        const bool branch_taken_0x2615a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2615A8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2615a4) {
            ctx->pc = 0x2615CCu;
            goto label_2615cc;
        }
    }
    ctx->pc = 0x2615ACu;
label_2615ac:
    // 0x2615ac: 0x3c04003b
    ctx->pc = 0x2615acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2615b0: 0x24849790
    ctx->pc = 0x2615b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940560));
    // 0x2615b4: 0xc0b492e
    ctx->pc = 0x2615B4u;
    SET_GPR_U32(ctx, 31, 0x2615BCu);
    ctx->pc = 0x2615B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 12736));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615BCu; }
    }
    if (ctx->pc != 0x2615BCu) { return; }
    ctx->pc = 0x2615BCu;
    // 0x2615bc: 0x121080
    ctx->pc = 0x2615bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x2615c0: 0x531021
    ctx->pc = 0x2615c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2615c4: 0xac400000
    ctx->pc = 0x2615c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2615c8: 0x26520001
    ctx->pc = 0x2615c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2615cc:
    // 0x2615cc: 0x2e42000e
    ctx->pc = 0x2615ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 14));
    // 0x2615d0: 0x1440ffcb
    ctx->pc = 0x2615D0u;
    {
        const bool branch_taken_0x2615d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2615D4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x2615d0) {
            ctx->pc = 0x261500u;
            goto label_261500;
        }
    }
    ctx->pc = 0x2615D8u;
    // 0x2615d8: 0x3c030034
    ctx->pc = 0x2615d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2615dc: 0x3c02ffff
    ctx->pc = 0x2615dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2615e0: 0x3442ffff
    ctx->pc = 0x2615e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2615e4: 0xac62e7c4
    ctx->pc = 0x2615e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961092), GPR_U32(ctx, 2));
    // 0x2615e8: 0x3c02003c
    ctx->pc = 0x2615e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2615ec: 0x2403ffff
    ctx->pc = 0x2615ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2615f0: 0xac433200
    ctx->pc = 0x2615f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12800), GPR_U32(ctx, 3));
    // 0x2615f4: 0x3c020034
    ctx->pc = 0x2615f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2615f8: 0xac43e7f0
    ctx->pc = 0x2615f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961136), GPR_U32(ctx, 3));
    // 0x2615fc: 0x3c020034
    ctx->pc = 0x2615fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261600: 0xac43e7f4
    ctx->pc = 0x261600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961140), GPR_U32(ctx, 3));
    // 0x261604: 0x3c020034
    ctx->pc = 0x261604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261608: 0xac43e894
    ctx->pc = 0x261608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961300), GPR_U32(ctx, 3));
    // 0x26160c: 0x3c020034
    ctx->pc = 0x26160cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261610: 0xac40e7c0
    ctx->pc = 0x261610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961088), GPR_U32(ctx, 0));
    // 0x261614: 0x3c020034
    ctx->pc = 0x261614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261618: 0xac40e7c8
    ctx->pc = 0x261618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961096), GPR_U32(ctx, 0));
    // 0x26161c: 0x3c100031
    ctx->pc = 0x26161cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x261620: 0x2610ffe8
    ctx->pc = 0x261620u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x261624: 0x8e040024
    ctx->pc = 0x261624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x261628: 0xc0987c4
    ctx->pc = 0x261628u;
    SET_GPR_U32(ctx, 31, 0x261630u);
    ctx->pc = 0x26162Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x261F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadValidWave_0x261f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261630u; }
    }
    if (ctx->pc != 0x261630u) { return; }
    ctx->pc = 0x261630u;
    // 0x261630: 0xae020024
    ctx->pc = 0x261630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x261634: 0x3c030034
    ctx->pc = 0x261634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261638: 0x24020d00
    ctx->pc = 0x261638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3328));
    // 0x26163c: 0xac62e7d4
    ctx->pc = 0x26163cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961108), GPR_U32(ctx, 2));
    // 0x261640: 0xdfbf0090
    ctx->pc = 0x261640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x261644: 0xdfbe0080
    ctx->pc = 0x261644u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x261648: 0xdfb70070
    ctx->pc = 0x261648u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26164c: 0xdfb60060
    ctx->pc = 0x26164cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261650: 0xdfb50050
    ctx->pc = 0x261650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261654: 0xdfb40040
    ctx->pc = 0x261654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261658: 0xdfb30030
    ctx->pc = 0x261658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26165c: 0xdfb20020
    ctx->pc = 0x26165cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261660: 0xdfb10010
    ctx->pc = 0x261660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261664: 0xdfb00000
    ctx->pc = 0x261664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261668: 0x3e00008
    ctx->pc = 0x261668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26166Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261500u: goto label_261500;
            case 0x261564u: goto label_261564;
            case 0x261588u: goto label_261588;
            case 0x2615ACu: goto label_2615ac;
            case 0x2615CCu: goto label_2615cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261670u;
}
