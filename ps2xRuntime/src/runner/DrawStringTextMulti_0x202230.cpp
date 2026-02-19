#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawStringTextMulti
// Address: 0x202230 - 0x2023d0
void DrawStringTextMulti_0x202230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202230u;

    // 0x202230: 0x27bdff50
    ctx->pc = 0x202230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x202234: 0xffbf0090
    ctx->pc = 0x202234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x202238: 0xffb70080
    ctx->pc = 0x202238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x20223c: 0xffb60070
    ctx->pc = 0x20223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x202240: 0xffb50060
    ctx->pc = 0x202240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x202244: 0xffb40050
    ctx->pc = 0x202244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x202248: 0xffb30040
    ctx->pc = 0x202248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x20224c: 0xffb20030
    ctx->pc = 0x20224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x202250: 0xffb10020
    ctx->pc = 0x202250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x202254: 0xffb00010
    ctx->pc = 0x202254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x202258: 0xe7b500a8
    ctx->pc = 0x202258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x20225c: 0xe7b400a0
    ctx->pc = 0x20225cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x202260: 0x80b82d
    ctx->pc = 0x202260u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202264: 0xa0882d
    ctx->pc = 0x202264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202268: 0xc0902d
    ctx->pc = 0x202268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20226c: 0xe0982d
    ctx->pc = 0x20226cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202270: 0x100b02d
    ctx->pc = 0x202270u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202274: 0x120a02d
    ctx->pc = 0x202274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202278: 0x3c030031
    ctx->pc = 0x202278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20227c: 0x24020014
    ctx->pc = 0x20227cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x202280: 0x2821018
    ctx->pc = 0x202280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202284: 0x8c63f6c0
    ctx->pc = 0x202284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294964928)));
    // 0x202288: 0x6410003
    ctx->pc = 0x202288u;
    {
        const bool branch_taken_0x202288 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x20228Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x202288) {
            ctx->pc = 0x202298u;
            goto label_202298;
        }
    }
    ctx->pc = 0x202290u;
    // 0x202290: 0x3c020031
    ctx->pc = 0x202290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202294: 0x8c52f288
    ctx->pc = 0x202294u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294963848)));
label_202298:
    // 0x202298: 0x3c020031
    ctx->pc = 0x202298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20229c: 0xc601000c
    ctx->pc = 0x20229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2022a0: 0xc440f27c
    ctx->pc = 0x2022a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022a4: 0x46000d02
    ctx->pc = 0x2022a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2022a8: 0xc6150010
    ctx->pc = 0x2022a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2022ac: 0x3c030031
    ctx->pc = 0x2022acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2022b0: 0x8e020008
    ctx->pc = 0x2022b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2022b4: 0x8c64f6b4
    ctx->pc = 0x2022b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294964916)));
    // 0x2022b8: 0x24030014
    ctx->pc = 0x2022b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2022bc: 0x431018
    ctx->pc = 0x2022bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2022c0: 0x441021
    ctx->pc = 0x2022c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2022c4: 0x8c420010
    ctx->pc = 0x2022c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2022c8: 0x6600007
    ctx->pc = 0x2022C8u;
    {
        const bool branch_taken_0x2022c8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2022CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2022c8) {
            ctx->pc = 0x2022E8u;
            goto label_2022e8;
        }
    }
    ctx->pc = 0x2022D0u;
    // 0x2022d0: 0x2a62000a
    ctx->pc = 0x2022d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 10));
    // 0x2022d4: 0x10400005
    ctx->pc = 0x2022D4u;
    {
        const bool branch_taken_0x2022d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2022D8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2022d4) {
            ctx->pc = 0x2022ECu;
            goto label_2022ec;
        }
    }
    ctx->pc = 0x2022DCu;
    // 0x2022dc: 0x2842000a
    ctx->pc = 0x2022dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x2022e0: 0x14400003
    ctx->pc = 0x2022E0u;
    {
        const bool branch_taken_0x2022e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2022E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2022e0) {
            ctx->pc = 0x2022F0u;
            goto label_2022f0;
        }
    }
    ctx->pc = 0x2022E8u;
label_2022e8:
    // 0x2022e8: 0x8fb30000
    ctx->pc = 0x2022e8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2022ec:
    // 0x2022ec: 0x260202d
    ctx->pc = 0x2022ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2022f0:
    // 0x2022f0: 0xc080570
    ctx->pc = 0x2022F0u;
    SET_GPR_U32(ctx, 31, 0x2022F8u);
    ctx->pc = 0x2022F4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022F8u; }
    }
    if (ctx->pc != 0x2022F8u) { return; }
    ctx->pc = 0x2022F8u;
    // 0x2022f8: 0x40182d
    ctx->pc = 0x2022f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022fc: 0x32221000
    ctx->pc = 0x2022fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 4096));
    // 0x202300: 0x1040000b
    ctx->pc = 0x202300u;
    {
        const bool branch_taken_0x202300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202304u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x202300) {
            ctx->pc = 0x202330u;
            goto label_202330;
        }
    }
    ctx->pc = 0x202308u;
    // 0x202308: 0x2402efff
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x20230c: 0x2228824
    ctx->pc = 0x20230cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x202310: 0x8e020000
    ctx->pc = 0x202310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202314: 0x2442ffff
    ctx->pc = 0x202314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202318: 0x2422018
    ctx->pc = 0x202318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20231c: 0x831021
    ctx->pc = 0x20231cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x202320: 0x21fc2
    ctx->pc = 0x202320u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x202324: 0x431021
    ctx->pc = 0x202324u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202328: 0x21043
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20232c: 0x2228823
    ctx->pc = 0x20232cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_202330:
    // 0x202330: 0x802d
    ctx->pc = 0x202330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202334: 0x1000000b
    ctx->pc = 0x202334u;
    {
        const bool branch_taken_0x202334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202338u;
        SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
        if (branch_taken_0x202334) {
            ctx->pc = 0x202364u;
            goto label_202364;
        }
    }
    ctx->pc = 0x20233Cu;
    // 0x20233c: 0x0
    ctx->pc = 0x20233cu;
    // NOP
label_202340:
    // 0x202340: 0x220282d
    ctx->pc = 0x202340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202344: 0x260302d
    ctx->pc = 0x202344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202348: 0x2c0382d
    ctx->pc = 0x202348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20234c: 0x4600a306
    ctx->pc = 0x20234cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202350: 0x4600ab46
    ctx->pc = 0x202350u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x202354: 0xc08041c
    ctx->pc = 0x202354u;
    SET_GPR_U32(ctx, 31, 0x20235Cu);
    ctx->pc = 0x202358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20235Cu; }
    }
    if (ctx->pc != 0x20235Cu) { return; }
    ctx->pc = 0x20235Cu;
    // 0x20235c: 0x2328821
    ctx->pc = 0x20235cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202360: 0x26100001
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_202364:
    // 0x202364: 0x280202d
    ctx->pc = 0x202364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202368: 0x200282d
    ctx->pc = 0x202368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20236c: 0xc08065e
    ctx->pc = 0x20236Cu;
    SET_GPR_U32(ctx, 31, 0x202374u);
    ctx->pc = 0x202370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202374u; }
    }
    if (ctx->pc != 0x202374u) { return; }
    ctx->pc = 0x202374u;
    // 0x202374: 0x1440fff2
    ctx->pc = 0x202374u;
    {
        const bool branch_taken_0x202374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x202378u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202374) {
            ctx->pc = 0x202340u;
            goto label_202340;
        }
    }
    ctx->pc = 0x20237Cu;
    // 0x20237c: 0x16000004
    ctx->pc = 0x20237Cu;
    {
        const bool branch_taken_0x20237c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x202380u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 18480));
        if (branch_taken_0x20237c) {
            ctx->pc = 0x202390u;
            goto label_202390;
        }
    }
    ctx->pc = 0x202384u;
    // 0x202384: 0x280282d
    ctx->pc = 0x202384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202388: 0xc0b492e
    ctx->pc = 0x202388u;
    SET_GPR_U32(ctx, 31, 0x202390u);
    ctx->pc = 0x20238Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202390u; }
    }
    if (ctx->pc != 0x202390u) { return; }
    ctx->pc = 0x202390u;
label_202390:
    // 0x202390: 0x3c020031
    ctx->pc = 0x202390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202394: 0xac51f284
    ctx->pc = 0x202394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963844), GPR_U32(ctx, 17));
    // 0x202398: 0x220102d
    ctx->pc = 0x202398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20239c: 0xdfbf0090
    ctx->pc = 0x20239cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2023a0: 0xdfb70080
    ctx->pc = 0x2023a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2023a4: 0xdfb60070
    ctx->pc = 0x2023a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2023a8: 0xdfb50060
    ctx->pc = 0x2023a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2023ac: 0xdfb40050
    ctx->pc = 0x2023acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2023b0: 0xdfb30040
    ctx->pc = 0x2023b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2023b4: 0xdfb20030
    ctx->pc = 0x2023b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2023b8: 0xdfb10020
    ctx->pc = 0x2023b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2023bc: 0xdfb00010
    ctx->pc = 0x2023bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2023c0: 0xc7b500a8
    ctx->pc = 0x2023c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2023c4: 0xc7b400a0
    ctx->pc = 0x2023c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2023c8: 0x3e00008
    ctx->pc = 0x2023C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202298u: goto label_202298;
            case 0x2022E8u: goto label_2022e8;
            case 0x2022ECu: goto label_2022ec;
            case 0x2022F0u: goto label_2022f0;
            case 0x202330u: goto label_202330;
            case 0x202340u: goto label_202340;
            case 0x202364u: goto label_202364;
            case 0x202390u: goto label_202390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2023D0u;
}
