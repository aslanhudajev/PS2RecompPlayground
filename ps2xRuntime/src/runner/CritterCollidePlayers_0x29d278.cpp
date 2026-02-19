#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCollidePlayers
// Address: 0x29d278 - 0x29d510
void CritterCollidePlayers_0x29d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29d278u;

    // 0x29d278: 0x27bdff10
    ctx->pc = 0x29d278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29d27c: 0xffbf00c0
    ctx->pc = 0x29d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29d280: 0xffb700b0
    ctx->pc = 0x29d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x29d284: 0xffb600a0
    ctx->pc = 0x29d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x29d288: 0xffb50090
    ctx->pc = 0x29d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x29d28c: 0xffb40080
    ctx->pc = 0x29d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x29d290: 0xffb30070
    ctx->pc = 0x29d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x29d294: 0xffb20060
    ctx->pc = 0x29d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29d298: 0xffb10050
    ctx->pc = 0x29d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x29d29c: 0xffb00040
    ctx->pc = 0x29d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29d2a0: 0xe7b600e0
    ctx->pc = 0x29d2a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29d2a4: 0xe7b500d8
    ctx->pc = 0x29d2a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x29d2a8: 0xe7b400d0
    ctx->pc = 0x29d2a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29d2ac: 0x80882d
    ctx->pc = 0x29d2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2b0: 0xa0982d
    ctx->pc = 0x29d2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2b4: 0x8e220004
    ctx->pc = 0x29d2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d2b8: 0xc456007c
    ctx->pc = 0x29d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29d2bc: 0xc4550078
    ctx->pc = 0x29d2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29d2c0: 0x26350060
    ctx->pc = 0x29d2c0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 96));
    // 0x29d2c4: 0x902d
    ctx->pc = 0x29d2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2c8: 0xb02d
    ctx->pc = 0x29d2c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2cc: 0xc6200060
    ctx->pc = 0x29d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d2d0: 0xc6610000
    ctx->pc = 0x29d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d2d4: 0x46010000
    ctx->pc = 0x29d2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d2d8: 0xe7a00020
    ctx->pc = 0x29d2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d2dc: 0xc6a00004
    ctx->pc = 0x29d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d2e0: 0xc6610004
    ctx->pc = 0x29d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d2e4: 0x46010000
    ctx->pc = 0x29d2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d2e8: 0xe7a00024
    ctx->pc = 0x29d2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d2ec: 0xc6a00008
    ctx->pc = 0x29d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d2f0: 0xc6610008
    ctx->pc = 0x29d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d2f4: 0x46010000
    ctx->pc = 0x29d2f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d2f8: 0xe7a00028
    ctx->pc = 0x29d2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d2fc: 0xa02d
    ctx->pc = 0x29d2fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d300: 0x3c020032
    ctx->pc = 0x29d300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29d304: 0x24571bc0
    ctx->pc = 0x29d304u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29d308: 0x24022b00
    ctx->pc = 0x29d308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29d30c: 0x0
    ctx->pc = 0x29d30cu;
    // NOP
label_29d310:
    // 0x29d310: 0x2821818
    ctx->pc = 0x29d310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29d314: 0x778021
    ctx->pc = 0x29d314u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x29d318: 0x8e0300fc
    ctx->pc = 0x29d318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x29d31c: 0x24020001
    ctx->pc = 0x29d31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d320: 0x10620003
    ctx->pc = 0x29D320u;
    {
        const bool branch_taken_0x29d320 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29D324u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x29d320) {
            ctx->pc = 0x29D330u;
            goto label_29d330;
        }
    }
    ctx->pc = 0x29D328u;
    // 0x29d328: 0x54620063
    ctx->pc = 0x29D328u;
    {
        const bool branch_taken_0x29d328 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29d328) {
            ctx->pc = 0x29D32Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29D4B8u;
            goto label_29d4b8;
        }
    }
    ctx->pc = 0x29D330u;
label_29d330:
    // 0x29d330: 0x9602093c
    ctx->pc = 0x29d330u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x29d334: 0x30420020
    ctx->pc = 0x29d334u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x29d338: 0x5440005f
    ctx->pc = 0x29D338u;
    {
        const bool branch_taken_0x29d338 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29d338) {
            ctx->pc = 0x29D33Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29D4B8u;
            goto label_29d4b8;
        }
    }
    ctx->pc = 0x29D340u;
    // 0x29d340: 0xc60c0828
    ctx->pc = 0x29d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29d344: 0x460cb500
    ctx->pc = 0x29d344u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    // 0x29d348: 0xc60d082c
    ctx->pc = 0x29d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29d34c: 0x8e220004
    ctx->pc = 0x29d34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d350: 0x8c42005c
    ctx->pc = 0x29d350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29d354: 0x30420100
    ctx->pc = 0x29d354u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x29d358: 0x10400018
    ctx->pc = 0x29D358u;
    {
        const bool branch_taken_0x29d358 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D35Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
        if (branch_taken_0x29d358) {
            ctx->pc = 0x29D3BCu;
            goto label_29d3bc;
        }
    }
    ctx->pc = 0x29D360u;
    // 0x29d360: 0x220202d
    ctx->pc = 0x29d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d364: 0x260282d
    ctx->pc = 0x29d364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d368: 0x26060070
    ctx->pc = 0x29d368u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 112));
    // 0x29d36c: 0x27a70030
    ctx->pc = 0x29d36cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d370: 0xc0a69dc
    ctx->pc = 0x29D370u;
    SET_GPR_U32(ctx, 31, 0x29D378u);
    ctx->pc = 0x29D374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A770u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveNodeCol_0x29a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D378u; }
    }
    if (ctx->pc != 0x29D378u) { return; }
    ctx->pc = 0x29D378u;
    // 0x29d378: 0x40902d
    ctx->pc = 0x29d378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d37c: 0x1240004d
    ctx->pc = 0x29D37Cu;
    {
        const bool branch_taken_0x29d37c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D380u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x29d37c) {
            ctx->pc = 0x29D4B4u;
            goto label_29d4b4;
        }
    }
    ctx->pc = 0x29D384u;
    // 0x29d384: 0x24020060
    ctx->pc = 0x29d384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29d388: 0x622018
    ctx->pc = 0x29d388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29d38c: 0x911821
    ctx->pc = 0x29d38cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x29d390: 0xc6000070
    ctx->pc = 0x29d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d394: 0xc4610580
    ctx->pc = 0x29d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d398: 0x46010001
    ctx->pc = 0x29d398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d39c: 0xe7a00000
    ctx->pc = 0x29d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d3a0: 0xc6000074
    ctx->pc = 0x29d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3a4: 0xc4610584
    ctx->pc = 0x29d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d3a8: 0x46010001
    ctx->pc = 0x29d3a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d3ac: 0xe7a00004
    ctx->pc = 0x29d3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d3b0: 0xc6000078
    ctx->pc = 0x29d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3b4: 0x10000015
    ctx->pc = 0x29D3B4u;
    {
        const bool branch_taken_0x29d3b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D3B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x29d3b4) {
            ctx->pc = 0x29D40Cu;
            goto label_29d40c;
        }
    }
    ctx->pc = 0x29D3BCu;
label_29d3bc:
    // 0x29d3bc: 0x26040070
    ctx->pc = 0x29d3bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x29d3c0: 0x2a0282d
    ctx->pc = 0x29d3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3c4: 0x27a60020
    ctx->pc = 0x29d3c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d3c8: 0x27a70030
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d3cc: 0x4600a306
    ctx->pc = 0x29d3ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29d3d0: 0x46000346
    ctx->pc = 0x29d3d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x29d3d4: 0xc0a4202
    ctx->pc = 0x29D3D4u;
    SET_GPR_U32(ctx, 31, 0x29D3DCu);
    ctx->pc = 0x29D3D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3DCu; }
    }
    if (ctx->pc != 0x29D3DCu) { return; }
    ctx->pc = 0x29D3DCu;
    // 0x29d3dc: 0x40902d
    ctx->pc = 0x29d3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3e0: 0x12400034
    ctx->pc = 0x29D3E0u;
    {
        const bool branch_taken_0x29d3e0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D3E4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x29d3e0) {
            ctx->pc = 0x29D4B4u;
            goto label_29d4b4;
        }
    }
    ctx->pc = 0x29D3E8u;
    // 0x29d3e8: 0xc6000070
    ctx->pc = 0x29d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3ec: 0x46010001
    ctx->pc = 0x29d3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d3f0: 0xe7a00000
    ctx->pc = 0x29d3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d3f4: 0xc6000074
    ctx->pc = 0x29d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d3f8: 0xc7a10024
    ctx->pc = 0x29d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d3fc: 0x46010001
    ctx->pc = 0x29d3fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d400: 0xe7a00004
    ctx->pc = 0x29d400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d404: 0xc6000078
    ctx->pc = 0x29d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d408: 0xc7a10028
    ctx->pc = 0x29d408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d40c:
    // 0x29d40c: 0x46010001
    ctx->pc = 0x29d40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d410: 0x12400028
    ctx->pc = 0x29D410u;
    {
        const bool branch_taken_0x29d410 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D414u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x29d410) {
            ctx->pc = 0x29D4B4u;
            goto label_29d4b4;
        }
    }
    ctx->pc = 0x29D418u;
    // 0x29d418: 0x26d60001
    ctx->pc = 0x29d418u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    // 0x29d41c: 0xc0b58a4
    ctx->pc = 0x29D41Cu;
    SET_GPR_U32(ctx, 31, 0x29D424u);
    ctx->pc = 0x29D420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D424u; }
    }
    if (ctx->pc != 0x29D424u) { return; }
    ctx->pc = 0x29D424u;
    // 0x29d424: 0x4600a301
    ctx->pc = 0x29d424u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x29d428: 0x3c013f80
    ctx->pc = 0x29d428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29d42c: 0x44810000
    ctx->pc = 0x29d42cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29d430: 0x46006034
    ctx->pc = 0x29d430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d434: 0x0
    ctx->pc = 0x29d434u;
    // NOP
    // 0x29d438: 0x45010008
    ctx->pc = 0x29D438u;
    {
        const bool branch_taken_0x29d438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D43Cu;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x29d438) {
            ctx->pc = 0x29D45Cu;
            goto label_29d45c;
        }
    }
    ctx->pc = 0x29D440u;
    // 0x29d440: 0x3c014040
    ctx->pc = 0x29d440u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x29d444: 0x44810000
    ctx->pc = 0x29d444u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29d448: 0x460c0034
    ctx->pc = 0x29d448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d44c: 0x0
    ctx->pc = 0x29d44cu;
    // NOP
    // 0x29d450: 0x45000002
    ctx->pc = 0x29D450u;
    {
        const bool branch_taken_0x29d450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D454u;
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x29d450) {
            ctx->pc = 0x29D45Cu;
            goto label_29d45c;
        }
    }
    ctx->pc = 0x29D458u;
    // 0x29d458: 0x46000046
    ctx->pc = 0x29d458u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29d45c:
    // 0x29d45c: 0x46000b06
    ctx->pc = 0x29d45cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x29d460: 0xc7a10000
    ctx->pc = 0x29d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d464: 0x46016042
    ctx->pc = 0x29d464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x29d468: 0xe7a10000
    ctx->pc = 0x29d468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d46c: 0xc7a20004
    ctx->pc = 0x29d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d470: 0x46026082
    ctx->pc = 0x29d470u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x29d474: 0xe7a20004
    ctx->pc = 0x29d474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d478: 0xc7a30008
    ctx->pc = 0x29d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d47c: 0x460360c2
    ctx->pc = 0x29d47cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x29d480: 0xe7a30008
    ctx->pc = 0x29d480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d484: 0x46010840
    ctx->pc = 0x29d484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29d488: 0xc6000848
    ctx->pc = 0x29d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d48c: 0x46000840
    ctx->pc = 0x29d48cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d490: 0xe6010848
    ctx->pc = 0x29d490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2120), bits); }
    // 0x29d494: 0x46021080
    ctx->pc = 0x29d494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29d498: 0xc600084c
    ctx->pc = 0x29d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d49c: 0x46001080
    ctx->pc = 0x29d49cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29d4a0: 0xe602084c
    ctx->pc = 0x29d4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2124), bits); }
    // 0x29d4a4: 0x460318c0
    ctx->pc = 0x29d4a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x29d4a8: 0xc6000850
    ctx->pc = 0x29d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d4ac: 0x460018c0
    ctx->pc = 0x29d4acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29d4b0: 0xe6030850
    ctx->pc = 0x29d4b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2128), bits); }
label_29d4b4:
    // 0x29d4b4: 0x26940001
    ctx->pc = 0x29d4b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_29d4b8:
    // 0x29d4b8: 0x2a820004
    ctx->pc = 0x29d4b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x29d4bc: 0x1440ff94
    ctx->pc = 0x29D4BCu;
    {
        const bool branch_taken_0x29d4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29D4C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x29d4bc) {
            ctx->pc = 0x29D310u;
            goto label_29d310;
        }
    }
    ctx->pc = 0x29D4C4u;
    // 0x29d4c4: 0x12400004
    ctx->pc = 0x29D4C4u;
    {
        const bool branch_taken_0x29d4c4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D4C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29d4c4) {
            ctx->pc = 0x29D4D8u;
            goto label_29d4d8;
        }
    }
    ctx->pc = 0x29D4CCu;
    // 0x29d4cc: 0x44800000
    ctx->pc = 0x29d4ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29d4d0: 0xe6600008
    ctx->pc = 0x29d4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x29d4d4: 0xe6600000
    ctx->pc = 0x29d4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_29d4d8:
    // 0x29d4d8: 0xdfbf00c0
    ctx->pc = 0x29d4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29d4dc: 0xdfb700b0
    ctx->pc = 0x29d4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29d4e0: 0xdfb600a0
    ctx->pc = 0x29d4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29d4e4: 0xdfb50090
    ctx->pc = 0x29d4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29d4e8: 0xdfb40080
    ctx->pc = 0x29d4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29d4ec: 0xdfb30070
    ctx->pc = 0x29d4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29d4f0: 0xdfb20060
    ctx->pc = 0x29d4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d4f4: 0xdfb10050
    ctx->pc = 0x29d4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d4f8: 0xdfb00040
    ctx->pc = 0x29d4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d4fc: 0xc7b600e0
    ctx->pc = 0x29d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29d500: 0xc7b500d8
    ctx->pc = 0x29d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29d504: 0xc7b400d0
    ctx->pc = 0x29d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d508: 0x3e00008
    ctx->pc = 0x29D508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D50Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29D310u: goto label_29d310;
            case 0x29D330u: goto label_29d330;
            case 0x29D3BCu: goto label_29d3bc;
            case 0x29D40Cu: goto label_29d40c;
            case 0x29D45Cu: goto label_29d45c;
            case 0x29D4B4u: goto label_29d4b4;
            case 0x29D4B8u: goto label_29d4b8;
            case 0x29D4D8u: goto label_29d4d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29D510u;
}
