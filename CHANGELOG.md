# Release notes

## Version 2.2.0 -- 2021-06-08

Notable differences from version 2.1.0.

- Add access to Radiation class & functions to change RadiationType, wavelength in PowderPattern and ScatteringData (and hence DiffractionDataSingleCrystal) classes.

- Fix the custodian_ward when creating a PowderPatternDiffraction: PowderPatternDiffraction must persist while PowderPattern exists, and Crystal must persist while PowderPatternDiffraction exists.

- Add 3D Crystal viewer `pyobjcryst.crystal.Crystal.widget_3d`.

## Version 2.1.0 -- 2019-03-11

Notable differences from version 2.0.1.

### Added

- Support for Python 3.7.
- Validation of compiler options from `python-config`.
- Make scons scripts compatible with Python 3 and Python 2.
- Support np.array arguments for `SetPowderPatternX`, `SetPowderPatternObs`.
- Declare compatible version requirements for client Anaconda packages.
- Facility for silencing spurious console output from libobjcryst.

### Changed

- Build Anaconda package with Anaconda C++ compiler.
- Update to libobjcryst 2017.2.x.

### Deprecated

- Variable `__gitsha__` in the `version` module which was renamed
  to `__git_commit__`.

### Removed

- Support for Python 3.4.

### Fixed

- Ambiguous use of boost::python classes and functions.
- Name suffix resolution of `boost_python` shared library.
- `SetPowderPatternX` crash for zero-length argument.
- Incorrectly doubled return value from `GetInversionCenter`.
